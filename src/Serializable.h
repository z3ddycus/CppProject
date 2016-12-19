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
    virtual ~Serializable(){};
    virtual void print(std::ostream& flux) = 0;
    friend std::ostream& operator<<(std::ostream&, const Serializable&);
    const char* getFile();
    void setFile(const char* file);
    virtual void write();
};

#endif
