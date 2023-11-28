#ifndef PROJECT1__MYHYBRIDSORT_H
#define PROJECT1__MYHYBRIDSORT_H
#include <iostream>
#include <vector>
#include "radixSort.h"
#include "InsertionSort.h"
#include "HeapSort.h"
void myHybridSort(std::vector<int>&rd,int value ){
    if(rd.size()<value){
        insertionSort(rd);
    }
    else{

        heapsort(rd,rd.size());
    }
}



#endif //PROJECT1__MYHYBRIDSORT_H
