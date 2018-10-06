//
// Created by wikoj on 04.10.2018.
//

#ifndef VISUALSORTER_PROGRAMWINDOW_H
#define VISUALSORTER_PROGRAMWINDOW_H

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include "Sorter.h"

class ProgramWindow : public sf::RenderWindow{

private:

    Sorter sorter;
    sf::Thread sortingThread;

public:
    ProgramWindow();
    void processEvents();
    void displayFrame();

};


#endif //VISUALSORTER_PROGRAMWINDOW_H
