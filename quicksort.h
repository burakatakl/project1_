#ifndef PROJECT1__QUICKSORT_H
#define PROJECT1__QUICKSORT_H
#include<iostream>
#include <vector>
//first i started to create divide operitor I am gonna crash just one area and middle one gonna put the right way
int divide(std::vector<int>&arr,int lowest, int highest){
    int middle=arr[highest];
    int i=lowest-1;//index of smaller one
    for(int w=lowest;w<=highest-1;w++){
        if(arr[w]<middle){//if this element is smaller one i am using swap
            i++;
            std::swap(arr[i],arr[w]);
        }
    }
    std::swap(arr[i+1],arr[highest]);
    return(i+1);
}
void quickSort(std::vector<int>&arr, int lowest,int highest){
    if(lowest<highest){
        int middleIndex = divide(arr,lowest,highest);//i am taking to middle index .i am using to divade this vector
        quickSort(arr,lowest,middleIndex-1);//first part
        quickSort(arr,middleIndex+1,highest);// second part
    }
}



#endif //PROJECT1__QUICKSORT_H
