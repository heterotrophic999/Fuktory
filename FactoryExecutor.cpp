//
// Created by Admin on 09.12.2021.
//

#include "FactoryExecutor.h"

FactoryExecutor::FactoryExecutor(const string& file) {
    filename = file;
}

void FactoryExecutor::parse_config() {
    configread reader(filename);
    priority = reader.read_config();
}

void FactoryExecutor::execute() {
    parse_config();
    for(const auto& it : priority){
        worker = fact.createWorker(it.first, it.second);
        worker->do_work(text);
        if(it.first != "writefile"){
            text = worker->get_result();
        }
    }
}
