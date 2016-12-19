#ifndef SERIALIZABLE
#define SERIALIZABLE

using namespace std;
#include <string>

class Serializable{
  const char *filename;
public:
    Serializable();
    char* getFile() const;
    void setFile(const char* file);
    virtual ~Serializable(){}
    virtual void write() const;
};

#endif
