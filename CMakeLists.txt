cmake_minimum_required(VERSION 3.5)
project(Project)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/origine/Im.cpp src/origine/Im.h src/origine/OutIm.cpp src/origine/OutIm.h src/etage/constantes.h src/etage/Etage.cpp src/etage/Etage.h src/util/Serializable.cpp src/util/Serializable.h src/util/FileNameException.h src/etage/Local.cpp src/etage/Local.h src/etage/Appartement.cpp src/etage/Appartement.h src/etage/Bureau.cpp src/etage/Bureau.h src/util/OutOfRangeException.h src/util/Liste.h )
add_executable(mainFinal src/mainFinal.cpp ${SOURCE_FILES})
add_executable(main src/main.cpp ${SOURCE_FILES})