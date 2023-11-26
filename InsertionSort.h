//
// Created by BURAK on 18/11/2023.

#ifndef PROJECT1__INSERTIONSORT_H
#define PROJECT1__INSERTIONSORT_H

#include <iostream>
#include <vector>


void insertionSort(std::vector<int> &arr  ){
    int elements;
    int before;

    for(size_t i=1;i<arr.size(); i++ ){
        elements = arr[i];
        before = i-1;

        while(before>= 0 && arr[before]>elements){
            arr[before+1]=arr[before]; // I shift elements to the right
            before--; // i move the elements previous on the  left
        }
        arr[before+1]=elements; // place the current element in its correct sorted position
    }
}




#endif //PROJECT1__INSERTIONSORT_H
