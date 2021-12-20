//
// Created by Admin on 09.12.2021.
//

#ifndef FUKTORY_SORT_H
#define FUKTORY_SORT_H
#include "Worker.h"

class sort : public Worker{
private:
    list<string> words;
    static bool size_comp(const string& first, const string& second);
    void get_words(const string& str);
    void parse_args() override;
    static bool compare(string a, string b);
public:
    explicit sort(const string& args);
    void do_work(vector<string> txt) override;
    vector<string> get_result() override;
};


#endif //FUKTORY_SORT_H
