//
// Created by Admin on 09.12.2021.
//

#ifndef FUKTORY_REPLACE_H
#define FUKTORY_REPLACE_H
#include "Worker.h"

class replace : public Worker{
private:
    string word1, word2;
    vector<string> words;
    void get_words(const string& str);
    string replace_words();
    void parse_args() override;
public:
    explicit replace(const string& arguments);
    void do_work(vector<string> txt) override;
    vector<string> get_result() override;
};


#endif //FUKTORY_REPLACE_H
