using namespace std;
#include <iostream>
#include <fstream>
#include "Serializable.h"
#include "FileNameException.h"

Serializable::Serializable() {
  filename = "";
};

Serializable::Serializable(Serializable const &s) {
  filename = s.filename;
}

std::ostream& operator<<(std::ostream &strm, const Serializable &a) {
  return strm << "Class : Serializable" << endl << "Filename : " << a.filename << endl;
}

const char* Serializable::getFile() {
  return filename;
}

void Serializable::setFile(const char* file) {
  filename = file;
}

void Serializable::write() {
  try {
    if (filename == "") {
      throw FileNameException();
    }
  } catch(FileNameException const& e) {
    cout << e.serializable() << endl;
    return;
  }
  ofstream writing;
  writing.open(getFile());
  writing << *this;
  writing.close();
}
