//
// Created by Admin on 09.12.2021.
//

#include "replace.h"

replace::replace(const string& arguments) {
    string s;
    args.push_back(s);
    args.push_back(s);
    int i = 0;
    for(char it : arguments){
        if(it != ' ' && it != '\n'){
            args[i].push_back(it);
        }
        else{
            i++;
        }
    }
}


void replace::get_words(const string& str) {
    string got_word;

    for(char it : str){
        if(it != ' ' && it!= '\n'){
            got_word += it;
        }
        else{
            words.push_back(got_word);
            got_word = "";
        }
    }
}


string replace::replace_words() {
    string str;
    for(auto it : words){
        if (it == word1){
            it = word2;
        }
        str += it;
        str += ' ';
    }
    //str += "\n";
    return str;
}


void replace::parse_args() {
    word1 = args[0];
    word2 = args[1];
}


void replace::do_work(vector<string> txt) {
    parse_args();
    for(const auto& it : txt){
        get_words(it);
        string rep = replace_words();
        text.push_back(rep);
        words.clear();
    }
}


vector<string> replace::get_result() {
    return text;
}