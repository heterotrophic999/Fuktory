//
// Created by Admin on 08.12.2021.
//

#include "writefile.h"

writefile::writefile(const string& arguments){
    string s;
    args.push_back(s);
    for (char i : arguments){
        args[0].push_back(i);
    }
}


vector<string> writefile::get_result() {
    return vector<string>();
}


void writefile::parse_args(){
    string filename = args[0];
    file.open(filename);
    if(!file){
        throw runtime_error("WriteFile : Cannot open file");
    }
}


void writefile::do_work(vector<string> txt){
    parse_args();
    for (const auto& it : txt){
        file << it << '\n';
    }
    file.close();
}