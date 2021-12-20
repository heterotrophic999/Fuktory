//
// Created by Admin on 09.12.2021.
//

#ifndef FUKTORY_CONFIGREAD_H
#define FUKTORY_CONFIGREAD_H
#include <string>
#include <vector>
#include <fstream>
#include <list>
#include <map>

using namespace std;

class configread {
private:
    string workers, args;
    int id{};
    list<pair<string, string>> priority;
    map<int, pair<string, string>> jobs;
    ifstream file;

    void separate_ids(const string& str);

    void separate(const string& str);

    void read_desc();

    void read_csed();
public:
    explicit configread(const string& filename);

    list<pair<string, string>> read_config();
};


#endif //FUKTORY_CONFIGREAD_H
