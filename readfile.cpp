//
// Created by Admin on 06.12.2021.
//

#include "readfile.h"

readfile::readfile(const string& arguments){
    string s;
    args.push_back(s);
    for (char i : arguments){
        args[0].push_back(i);
    }
}

void readfile::parse_args(){
    string filename = args[0];
    file.open(filename, ifstream::in);
    if(!file.is_open()){
        throw runtime_error("Readfile : cannot open file");
    }
}

void readfile::do_work(vector<string> txt){
    parse_args();
    string str;
    if (file.peek()==std::ifstream::traits_type::eof()) {
        throw runtime_error("Readfile : input file is empty");
    }
    while(!file.eof() && file){
        getline(file, str);
        if (!str.empty()){
            str += '\n';
            text.push_back(str);
        }
    }
    file.close();
}

vector<string> readfile::get_result(){
    return text;
}