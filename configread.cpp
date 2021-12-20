//
// Created by Admin on 09.12.2021.
//

#include "configread.h"
#include "iostream"

configread::configread(const string& filename) {
    std::cout << filename;
    file.open(filename, ifstream::in);
    if (!file.is_open()) throw runtime_error("ConfigReader : No input file");
    if (file.peek()==std::ifstream::traits_type::eof()) throw runtime_error("ConfigReader :Empty input file");
}


void configread::separate(const string& str) {
    for (char i : str){
        if(i != ' ') {
            workers += i;
        }
        else{
            break;
        }
    }
    size_t pos = str.find(' ') + 1;
    if (pos != string::npos){
        args = str.substr(pos);
    }
    else{
        args = " ";
    }
}


void configread::separate_ids(const string& str) {
    if(str.empty()) return;
    string num;
    string words;
    for(char it : str){
        if(isdigit(it)){
            num += it;
        }
        else break;
    }
    id = stoi(num);
    separate(str.substr(str.find('=') + 2));
}


void configread::read_desc() {
    string str;

    getline(file, str);
    if(str!="desc"){
        while(str!="desc" && file){
            getline(file, str);
        }
    }
    getline(file, str);
    while(str != "csed"){
        if(str != ""){
            separate_ids(str);
            jobs[id] = make_pair(workers, args);
            workers.clear();
            args.clear();

        }
        getline(file, str);
    }
}


void configread::read_csed() {
    string str;
    string num;
    getline(file, str);
    str += " ";
    for (char i : str){
        if(isdigit(i)){
            num += i;
        }
        else{
            if (!num.empty()){
                id = stoi(num);
                priority.push_back(jobs[id]);
                num.clear();
            }


        }
    }
}


list<pair<string, string>> configread::read_config() {
    read_desc();
    read_csed();
    return priority;
}