#include "minConsumerLib.h"
#include <minLib.h>
#include <iostream>

namespace minConsumerLib {
 
    void consumeMinLib() {

        std::cout << "minConsumerLib::consumeMinLib()" << std::endl;
        minLib::ClassWithWarnings cww;
        cww.doSomething();
    }
 
} //namespace minConsumerLib
