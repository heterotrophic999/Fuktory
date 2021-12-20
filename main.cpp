#include <iostream>
#include "FactoryExecutor.h"

using namespace std;

int main() {
    FactoryExecutor w1(R"(D:\OOP\Fuktory\cmake-build-debug\config.txt)");
    w1.execute();
    return 0;
}