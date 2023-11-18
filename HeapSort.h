//
// Created by BURAK on 18/11/2023.
#ifndef PROJECT1__HEAPSORT_H
#define PROJECT1__HEAPSORT_H
#include <iostream>
#include <vector>
void swap(std::vector<int>&arr,int i,int j ){
    int elemnt = arr[i];
    arr[i] = arr[j];
    arr[j]= elemnt;
}

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

void buildingheap (std::vector<int>&arr,int a){
    for (int i= (a/2)-1;i>=0;i--)
        heapify(arr,a,i);
}
void heapsort(std::vector<int>&arr, int a){

    buildingheap(arr, a);
    for ( int i =a-1; i>+0; i--){
        swap(arr,0,i);
        heapify(arr,i,0);

    }

}


#endif //PROJECT1__HEAPSORT_H
