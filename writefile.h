//
// Created by Admin on 08.12.2021.
//

#ifndef FUKTORY_WRITEFILE_H
#define FUKTORY_WRITEFILE_H
#include "Worker.h"


class writefile : public Worker{
private:
    vector<string> get_result() override;

    void parse_args() override;
public:
    ofstream file;
    explicit writefile(const string& arguments);

    void do_work(vector<string> txt) override;
};


#endif //FUKTORY_WRITEFILE_H
