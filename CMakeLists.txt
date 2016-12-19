cmake_minimum_required(VERSION 3.6)
project(Project)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/Im.cpp src/Im.h src/OutIm.cpp src/OutIm.h src/constantes.h src/Etage.cpp src/Etage.h src/Serializable.cpp src/Serializable.h src/FileNameException.h src/EtageSerializable.cpp src/EtageSerializable.h src/Local.cpp src/Local.h src/Appartement.cpp src/Appartement.h src/Bureau.cpp src/Bureau.h src/OutOfRangeException.h src/Liste.h )
add_executable(MainFinal src/mainFinal.cpp ${SOURCE_FILES})
add_executable(MainOriginal src/mainOriginal.cpp ${SOURCE_FILES})