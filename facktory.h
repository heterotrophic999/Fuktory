//
// Created by Admin on 06.12.2021.
//

#ifndef FUKTORY_FACKTORY_H
#define FUKTORY_FACKTORY_H
#include "Worker.h"

class facktory {
public:
    Worker* createWorker(const string& Worker_name, const string& arguments);
};


#endif //FUKTORY_FACKTORY_H
