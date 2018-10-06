#include <iostream>
#include "ProgramWindow.h"

int main() {

    ProgramWindow window;

    while (window.isOpen()){

        window.processEvents();
        window.displayFrame();

    }


    return 0;
}