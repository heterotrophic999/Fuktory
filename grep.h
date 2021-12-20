//
// Created by Admin on 09.12.2021.
//

#ifndef FUKTORY_GREP_H
#define FUKTORY_GREP_H
#include "Worker.h"

class grep : public Worker{
private:
    string word;
    void parse_args() override;
public:
    explicit grep(const string& arguments);

    void do_work(vector<string> txt) override;

    vector<string> get_result() override;
};


#endif //FUKTORY_GREP_H
