#ifndef PROJECT1__RADIXSORT_H
#define PROJECT1__RADIXSORT_H
#include <iostream>
#include <vector>

void radixSort(std::vector<int>&arr){
    int maxElement=*std::max_element(arr.begin(),arr.end());// here i am find maxuim element

    for(int tt=1; maxElement/tt>0; tt*=10){
        int x =arr.size();
        std::vector<int> output(x),count(10,0);
        for(int i=0; i<x; i++)
            count[(arr[i]/tt)%10]++; //here i am counting for every elements, elements
        for(int i=1; i<10;i++)
            count[i]+=count[i-1];// i am update count lines
        for(int i=x-1;i>=0;i--){
            output[count[(arr[i]/tt)%10]-1]=arr[i];
            count[(arr[i]/tt)%10]--; // i create output string
        }


    }

}


#endif //PROJECT1__RADIXSORT_H
