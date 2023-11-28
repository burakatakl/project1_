#ifndef PROJECT1__MYHYBRIDSORT_H
#define PROJECT1__MYHYBRIDSORT_H
#include <iostream>
#include <vector>
#include "radixSort.h"
#include "quicksort.h"

void myHybridSort(std::vector<int>&arr,int value ){
    if(arr.size()<value){
        radixSort(arr);
    }
    else{
        quickSort(arr,0,arr.size()-1);
    }

}



#endif //PROJECT1__MYHYBRIDSORT_H
