//
// Created by BURAK on 18/11/2023.
#ifndef PROJECT1__HEAPSORT_H
#define PROJECT1__HEAPSORT_H
#include <iostream>
#include <vector>
 void heapify (std::vector<int>&arr, int a, int i){
    int leftside = 2*i+1;
    int rightside= 2*i+2;
    int largest = i;
     if (leftside< a && arr[leftside]>arr[i])
         largest=leftside;
     if(rightside<a && arr[rightside]> arr[i])
         largest=rightside;
     if (largest !=i){
         std::swap(arr[i],arr[largest]);
         heapify (arr, a,largest);
     }
}




#endif //PROJECT1__HEAPSORT_H
