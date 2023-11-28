#ifndef PROJECT1__MYHYBRIDSORT_H
#define PROJECT1__MYHYBRIDSORT_H
#include <iostream>
#include <vector>
#include "radixSort.h"
#include "InsertionSort.h"

void myHybridSort(std::vector<int>&rd,int value ){
    if(rd.size()<value){
        insertionSort(rd);


    }
    else{

        quickSort(rd,0,rd.size()-1);

    }

}



#endif //PROJECT1__MYHYBRIDSORT_H
