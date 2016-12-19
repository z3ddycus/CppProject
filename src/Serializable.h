#ifndef SERIALIZABLE
#define SERIALIZABLE

using namespace std;
#include <string>

class Serializable{
private:
  const char* filename;
public:
    Serializable();
    Serializable(Serializable const& s);
    virtual ~Serializable(){}
    friend std::ostream& operator<<(std::ostream&, const Serializable&);
    const char* getFile();
    void setFile(const char* file);
    virtual void write();
};

#endif
