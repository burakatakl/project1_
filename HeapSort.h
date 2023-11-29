
#ifndef PROJECT1__HEAPSORT_H
#define PROJECT1__HEAPSORT_H

#include <iostream>
#include <vector>

void heapify(std::vector<int> &arr, int a, int i) {// in here my funtion used the rearrenge an array into the maxheap
    int leftside = 2 * i + 1;                       //"a" show that violation of vector,  i show that indicate of the vector

    int rightside = 2 * i + 2;
    int largest = i;
    if (leftside < a && arr[leftside] > arr[largest])
        largest = leftside;
    if (rightside < a && arr[rightside] > arr[largest])
        largest = rightside;
    if (largest != i) {
        std::swap(arr[i], arr[largest]);
        heapify(arr, a, largest);
    }
}

void buildingheap(std::vector<int> &arr, int a) {// here in my function starting from half of vector so vector gains the maxheap
    for (int i = (a / 2) - 1; i >= 0; i--)
        heapify(arr, a, i);
}

void heapsort(std::vector<int> &arr, int a) {// here in my funtion perfrom the their jon sorting
                                            // first vector organized the max heap a buildingheap funtion these are in the loob
                                            // this process is contunies until the vector is sorted
    buildingheap(arr, a);

    for (int i = a / 2 - 1; i >= 0; i--)
        heapify(arr, a, i);


    for (int i = a - 1; i >= 0; i--) {
        std::swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }

}


#endif
