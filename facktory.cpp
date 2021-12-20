//
// Created by Admin on 06.12.2021.
//

#include "facktory.h"
#include "readfile.h"
#include "writefile.h"
#include "grep.h"
#include "sort.h"
#include "replace.h"
#include "dump.h"

unordered_map<string, int> worker_names({{"readfile", 1}, {"writefile", 2},
                                         {"grep", 3}, {"sort", 4}, {"replace", 5},
                                         {"dump", 6}});

Worker *facktory::createWorker(const string &Worker_name, const string &arguments) {
    Worker* p;
    switch(worker_names[Worker_name]){
        default:
            throw runtime_error("Factory : this worker doesn't exist");
        case 1:
            p = new readfile(arguments);
            break;
        case 2:
            p = new writefile(arguments);
            break;
        case 3:
            p = new grep(arguments);
            break;
        case 4:
            p = new sort(arguments);
            break;
        case 5:
            p = new replace(arguments);
            break;
        case 6:
            p = new dump(arguments);
            break;
    }
    return p;
}
