//
// Created by Admin on 09.12.2021.
//

#include "dump.h"

dump::dump(const string& arguments) {
    for (char i : arguments){
        args[0].push_back(i);
    }
}


void dump::parse_args() {
    string filename = args[0];
    file.open(filename, ofstream::out);
    if (!file.is_open()) throw runtime_error("Dump : cannot open file");
}


void dump::do_work(vector<string> txt) {
    parse_args();
    for (const auto& it : txt){
        text.push_back(it);
        file << it;
    }
    file.close();
}


vector<string> dump::get_result() {
    return text;
}