//
// Created by Kadinator on 19/12/2016.
//

#ifndef PROJECT_LISTE_H
#define PROJECT_LISTE_H

#include <iostream>
#include "OutOfRangeException.h"
using namespace std;

template <typename E>
class ListeMembre {
private:
    E valeur;
    ListeMembre* next;
public:
    ListeMembre(E e) {
        valeur = e;
        next = nullptr;
    };
    virtual ~ListeMembre() {};
    E getE() {
        return valeur;
    };
    ListeMembre* getNext() {
        return next;
    };
    void setE(E e) {
        valeur = e;
    };
    void setNext(ListeMembre* nex) {
        next = nex;
    };
};

template <typename E>
class ListeIterator:iterator<forward_iterator_tag, ListeMembre<E>*> {

    ListeMembre<E>* itr;
public:
    ListeIterator<E>():itr(nullptr){};
    ListeIterator<E>(ListeMembre<E>* lmp){itr = lmp;};
    ListeIterator<E>(const ListeIterator<E>& li){itr = li.itr;};
    E& operator*() {
        E e = itr->getE();
        E &f = e;
        return f;
    };
    E& operator->() {
        E e = itr->getE();
        E &f = e;
        return f;
    }
    bool operator==(const ListeIterator<E>& li) {
        return itr == li.itr;
    };
    bool operator!=(const ListeIterator<E>& li) {
      return itr != li.itr;
    };
    ListeIterator<E>& operator++() {
        itr = itr->getNext();
        return *this;
    }
    ListeIterator<E> operator++(int) {
        ListeIterator<E> result(*this);
        itr = itr->getNext();
        return result;
    }

};

template <typename E>
class Liste {
private:
    ListeMembre<E>* tete;
    int size;
public:
    Liste() : tete(nullptr), size(0){
    };
    virtual ~Liste() {
        ListeMembre<E>* lm = tete;
        while (lm != nullptr) {
            ListeMembre<E>* f = lm;
            lm = lm->getNext();
            f->~ListeMembre();
        }
    };
    ListeMembre<E>* getTete() {
        return tete;
    };
    int getSize() const{
        return size;
    }
    void ajout(E e) {
        ++size;
        ListeMembre<E>* lm = new ListeMembre<E>(e);
        if (tete == nullptr) {
            tete = lm;
        } else {
            ListeMembre<E>* q = tete;
            while (q->getNext() != nullptr) {
                q = q->getNext();
            }
            q->setNext(lm);
        }
    };
    E get(int i) const{
        int j = 0;
        ListeMembre<E>* search = tete;
        while (search != nullptr && i != j) {
            search = search->getNext();
            j++;
        }
        if (search == nullptr) {
            throw OutOfRangeException();
        } else {
            return search->getE();
        }
    };
    void set(int i, E e) {
        int j = 0;
        ListeMembre<E>* search = tete;
        while (search != nullptr && i != j) {
            search = search->getNext();
            j++;
        }
        if (search == nullptr) {
            throw OutOfRangeException();
        } else {
            search->setE(e);
        }
    };
    ListeMembre<E> remove(int i) {
        --size;
        int j = 0;
        ListeMembre<E>* search = tete;
        while (search != nullptr && j != i - 1) {
            search = search->getNext();
            j++;
        }
        if (search != nullptr && search->getNext() != nullptr) {
            ListeMembre<E>* lm = search->getNext();
            search->setNext(lm->getNext());
            return *lm;
        } else {
            return 0;
        }
    };
    ListeIterator<E> begin() {
        return ListeIterator<E>(tete);
    }
    ListeIterator<E> end() {
        return ListeIterator<E>();
    }
};

#endif //PROJECT_LISTE_H
