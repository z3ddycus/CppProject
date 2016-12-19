cmake_minimum_required(VERSION 3.6)
project(Project)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES  src/Im.cpp src/Im.h src/OutIm.cpp src/OutIm.h src/Etage.h src/Serializable.cpp src/Serializable.h src/FileNameException.cpp src/FileNameException.h src/EtageSerializable.h src/Local.cpp src/Local.h src/Appartement.h src/Bureau.h src/EtageAppartement.cpp src/EtageAppartement.h src/EtageBureau.cpp src/EtageBureau.h)
add_executable(MainVector src/mainVectorEtage.cpp ${SOURCE_FILES})
add_executable(MainOriginal src/mainOriginal.cpp ${SOURCE_FILES})