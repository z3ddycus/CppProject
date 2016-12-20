#ifndef SERIALIZABLE
#define SERIALIZABLE

using namespace std;
#include <string>
#include <iostream>

class Serializable{
private:
  char* filename;
public:
    Serializable();
    Serializable(Serializable & s);
    virtual ~Serializable(){};
    virtual void printS(ostream &os=cout)const = 0;
    char* getFile() const;
    void setFile(char* file);
    virtual void write() const;
};

#endif
