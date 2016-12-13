using namespace std;
#include <iostream>
#include <fstream>
#include <string>
#include "Serializable.h"

Serializable::Serializable(const char *filename) : filename(filename){}

void Serializable::write() {
  ofstream writing;
  writing.open(filename);
  string classname = "Class : Serializable";
  writing << classname;
  writing.close();
}
