cmake_minimum_required(VERSION 3.20)
project(Fuktory)

set(CMAKE_CXX_STANDARD 14)

add_executable(Fuktory main.cpp Worker.cpp Worker.h facktory.cpp facktory.h readfile.cpp readfile.h writefile.cpp writefile.h grep.cpp grep.h sort.cpp sort.h replace.cpp replace.h dump.cpp dump.h configread.cpp configread.h FactoryExecutor.cpp FactoryExecutor.h)
