//
// Created by wikoj on 04.10.2018.
//

#include "ProgramWindow.h"
#include <thread>
#include <cmath>

ProgramWindow::ProgramWindow()
    : sf::RenderWindow(sf::VideoMode(800,600), "Visual sorter"),
    sorter(25000, 600),
    sortingThread(&Sorter::bubbleSort, &sorter){}

void ProgramWindow::processEvents() {

    sf::Event event;


    while(this->pollEvent(event)){

        if(event.type == sf::Event::Closed){
            this->sortingThread.terminate();
            this->close();
        }
        else if(event.type == sf::Event::KeyPressed){
            //std::cout << event.key.code << std::endl;
            //s - 18
            //r - 17
            switch (event.key.code){
                case 17:
                    this->sorter.generateArray();
                    break;
                case 18:
                    this->sortingThread.launch();
                    break;
            }

            if(event.key.code == 17){

            }

        }

    }

}

void ProgramWindow::displayFrame() {

    this->clear(sf::Color::Black);

    float height = (float)this->getSize().y;
    float heightMult = (float)height/this->sorter.getMaximumNumber();
    float widthMult = (float)this->getSize().x/this->sorter.getArraySize();


    int arraySize = this->sorter.getArraySize();
    int *array = this->sorter.getArray();

    for(int i = 0; i < arraySize; i++){
        sf::RectangleShape rect(sf::Vector2f(widthMult, heightMult*array[i]));
        rect.setFillColor(sf::Color::White);
        rect.setPosition(i*widthMult, height-heightMult*array[i]);
        this->draw(rect);
    }

    this->display();

}
