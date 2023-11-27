#ifndef PROJECT1__QUICKSORT_H
#define PROJECT1__QUICKSORT_H
#include<iostream>
#include <vector>
//fiest i started to create divide operitor I am gonna crash just one area and its gonna put the right way
int divide(std::vector<int>&arr,int lowest, int highest){
    int middle=arr[highest];
    int i=lowest-1;//index of smaller one
    for(int w=lowest;w<=highest-1;w++){
        if(arr[w]<middle){
            i++;
            std::swap(arr[i],arr[w]);
        }
    }
    std::swap(arr[i+1],arr[highest]);
    return(i+1);
}




#endif //PROJECT1__QUICKSORT_H
