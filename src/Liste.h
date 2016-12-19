//
// Created by Kadinator on 19/12/2016.
//

#ifndef PROJECT_LISTE_H
#define PROJECT_LISTE_H

#include <iostream>
#include "OutOfRangeException.h"

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
class Liste {
private:
    ListeMembre<E>* tete;
public:
    Liste() {
        tete = nullptr;
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
    void ajout(E e) {
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
    E get(int i) {
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
};

#endif //PROJECT_LISTE_H
