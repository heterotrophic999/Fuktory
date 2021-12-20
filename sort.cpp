//
// Created by Admin on 09.12.2021.
//

#include "sort.h"
#include <iostream>
#include <algorithm>

sort::sort(const string& args) {
}
void sort::parse_args() {}

void sort::get_words(const string& str){
    string got_word;
    string new_str = str + " ";

    for(char it : new_str){
        if(it != ' ' && it!= '\n'){
            got_word += it;
        }
        else{
            if(!got_word.empty()){
                got_word += " ";
                words.push_back(got_word);
                got_word = "";
            }

        }
    }
}

bool sort::size_comp(const string &first, const string &second) {
    if (first.size() == second.size()){
        return first < second;
    }
    else return first.size() < second.size();
}



void sort::do_work(vector<string> txt) {
    parse_args();
//    for(const auto& it : txt){
//        get
//    }
//    if(words.size() == 1){
//        text = txt;
//        return;
//    }
//    words.sort(size_comp);
//    for(const auto& it : words){
//        text.push_back(it);
//    }
    std::sort(txt.begin(), txt.end(), compare);
    text=txt;
}

vector<string> sort::get_result() {
    return text;
}

bool sort::compare(string a, string b) {
    return (a.compare(b) < 0);
}
