//
// Created by Admin on 09.12.2021.
//

#ifndef FUKTORY_FACTORYEXECUTOR_H
#define FUKTORY_FACTORYEXECUTOR_H

#include "facktory.h"
#include "configread.h"

class FactoryExecutor {
private:
    Worker* worker{};
    list<pair<string, string>> priority;
    string filename;
    vector<string> text;
    facktory fact;

    void parse_config();
public:
    explicit FactoryExecutor(const string& file);

    void execute();
};


#endif //FUKTORY_FACTORYEXECUTOR_H
