//
// Created by Admin on 06.12.2021.
//

#ifndef FUKTORY_READFILE_H
#define FUKTORY_READFILE_H
#include "Worker.h"

class readfile : public Worker{
private:
    ifstream file;
    void parse_args() override;
public:
    explicit readfile(const string& arguments);

    void do_work(vector<string> txt) override;

    vector<string> get_result() override;
};


#endif //FUKTORY_READFILE_H
