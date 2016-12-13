#ifndef SERIALIZABLE
#define SERIALIZABLE

using namespace std;
#include <string>

class Serializable{
  const char *filename;
public: Serializable(const char *filename);
    virtual ~Serializable(){}
    virtual void write();
};

#endif
