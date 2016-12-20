using namespace std;
#include <iostream>
#include <fstream>
#include "Serializable.h"
#include "FileNameException.h"

Serializable::Serializable() {
  filename = (char*) "";
};

Serializable::Serializable(Serializable &s) {
  filename = s.filename;
}

char* Serializable::getFile() const {
  return filename;
}

void Serializable::setFile(char* file) {
  filename = file;
}

void Serializable::write() const {
  try {
    if (filename == "") {
      throw FileNameException();
    }
  } catch(FileNameException const& e) {
    cout << e.serializable() << endl;
    return;
  }
  ofstream writing;
  writing.open(getFile(), ofstream::app);
  printS(writing);
  writing.close();
}
