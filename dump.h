//
// Created by Admin on 09.12.2021.
//

#ifndef FUKTORY_DUMP_H
#define FUKTORY_DUMP_H
#include "Worker.h"

class dump : public Worker{
private:
    ofstream file;
    void parse_args() override;
public:
    explicit dump(const string& arguments);

    void do_work(vector<string> txt) override;

    vector<string> get_result() override;
};


#endif //FUKTORY_DUMP_H
