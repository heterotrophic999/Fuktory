//
// Created by Admin on 06.12.2021.
//

#include <string>
#include <fstream>
#include <utility>
#include <vector>
#include <list>
#include <unordered_map>
#include <map>
#ifndef FUKTORY_WORKER_H
#define FUKTORY_WORKER_H

using namespace std;
class Worker {
protected:
    vector<string> args;
    vector<string> text;
public:
    virtual void parse_args() = 0;

    virtual void do_work(vector<string> text) = 0;

    virtual vector<string> get_result() = 0;
};


#endif //FUKTORY_WORKER_H
