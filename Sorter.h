//
// Created by wikoj on 04.10.2018.
//

#include <iostream>

#ifndef VISUALSORTER_SORTER_H
#define VISUALSORTER_SORTER_H


class Sorter {

private:
    int *unsortedArray;
    int arraySize;
    int maximumNumber;

    void swapElems(int, int);

public:
    Sorter(int, int);
    Sorter(int);
    int getArraySize();
    int getMaximumNumber();
    int * getArray();
    void generateArray();
    void bubbleSort();
    void selectionSort();
};

#endif //VISUALSORTER_SORTER_H
