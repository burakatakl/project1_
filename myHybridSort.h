#ifndef PROJECT1__MYHYBRIDSORT_H
#define PROJECT1__MYHYBRIDSORT_H
#include <iostream>
#include <vector>
#include "radixSort.h"
#include "InsertionSort.h"
#include "HeapSort.h"
void myHybridSort(std::vector<int>&rd,int value ){
    if(rd.size()<value){
        insertionSort(rd);// when the array size is small insertion sort will work
    }
    else{

        heapsort(rd,rd.size()); // when the bigger heapsort will work
    }
}
//thats why in this hybrid sort function is the best one is always fastes one


#endif //PROJECT1__MYHYBRIDSORT_H
