//
// Created by Admin on 09.12.2021.
//

#include "grep.h"

grep::grep(const string& arguments) {
    string s;
    args.push_back(s);
    for (char i : arguments){
        args[0].push_back(i);
    }
}


void grep::parse_args() {
    word = args[0];
}


void grep::do_work(vector<string> txt){
    parse_args();
    string rword;
    for (const auto& it : txt){
        for (const auto& it1 : it){
            if(it1 != ' ' && it1 != '\n'){
                rword += it1;
            }
            else{
                if (rword == word){
                    text.push_back(it);
                    rword = "";
                    break;
                }
                else{
                    rword = "";
                }
            }
        }
    }
}


vector<string> grep::get_result() {
    return text;
}