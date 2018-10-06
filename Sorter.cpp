//
// Created by wikoj on 04.10.2018.
//

#include "Sorter.h"
#include <SFML/System.hpp>

Sorter::Sorter(int size, int maxNum) {

    this->maximumNumber = maxNum;
    this->arraySize = size;
    this->unsortedArray = new int[size];

    this->generateArray();

}
Sorter::Sorter(int size) : Sorter(size, size+20) {}


void Sorter::generateArray(){
    for(int i = 0; i < this->arraySize; i++){
        this->unsortedArray[i] = rand()%this->maximumNumber;
        //std::cout << this->unsortedArray[i] << std::endl;
    }
}

void Sorter::bubbleSort() {

    //int *array = this->unsortedArray;

    bool sorted;

    do{
        sorted = true;
        for(int i = 1; i < this->arraySize; i++){

            if(unsortedArray[i-1] > unsortedArray[i]){
                this->swapElems(i-1, i);
                sorted = false;
            }

            //sf::sleep(sf::microseconds(5));

        }

    }while(!sorted);

}
void Sorter::selectionSort() {

    for(int i = 0; i < arraySize; i++){
        int min = i;
        for(int j = i+1; j < arraySize; j++){
            if(unsortedArray[j] < unsortedArray[min]){
                min = j;
            }
        }

        swapElems(min, i);
        //sf::sleep(sf::milliseconds(10));
    }

}

void Sorter::swapElems(int id1, int id2){

    int tmp = unsortedArray[id1];
    unsortedArray[id1] = unsortedArray[id2];
    unsortedArray[id2] = tmp;

}
int Sorter::getArraySize() {
    return this->arraySize;
}
int Sorter::getMaximumNumber() {
    return this->maximumNumber;
}
int * Sorter::getArray() {
    return this->unsortedArray;
}