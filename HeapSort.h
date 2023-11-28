
#ifndef PROJECT1__HEAPSORT_H
#define PROJECT1__HEAPSORT_H

#include <iostream>
#include <vector>

void heapify(std::vector<int> &arr, int a, int i) {
    int leftside = 2 * i + 1;
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

void buildingheap(std::vector<int> &arr, int a) {
    for (int i = (a / 2) - 1; i >= 0; i--)
        heapify(arr, a, i);
}

void heapsort(std::vector<int> &arr, int a) {

    buildingheap(arr, a);

    for (int i = a / 2 - 1; i >= 0; i--)
        heapify(arr, a, i);


    for (int i = a - 1; i >= 0; i--) {
        std::swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }

}


#endif //PROJECT1__HEAPSORT_H
