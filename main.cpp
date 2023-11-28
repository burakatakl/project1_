#include <iostream>
#include "HeapSort.h"
#include "InsertionSort.h"
#include <vector>
#include "quicksort.h"
#include "radixSort.h"
#include <chrono>
#include <random>

int main() {
    std::random_device rd;
    std::mt19937 g(rd());
    std::vector<int> testMyVectors;
    for (int i=0;i<10;i++){
        testMyVectors.push_back(g()%100);
    }

    std::vector<int> testInsertionSort= testMyVectors;
    auto startInsertionSort = std::chrono::steady_clock::now();
    insertionSort(testInsertionSort);
    auto endInsertionSort=std::chrono::steady_clock::now();
    std::chrono::duration<double> durationInsertionSort=endInsertionSort-startInsertionSort;
    std::cout<<"InsertionSort time is: "<<durationInsertionSort.count()<<std::endl;
    std::cout<<"InsertionSort: ";
    for(auto IS:testInsertionSort)
        std::cout<<IS<<" ";
    std::cout<<std::endl;


    std::vector<int> testHeapSort=testMyVectors;
    auto startHeapSort=std::chrono::steady_clock::now();
    heapsort(testHeapSort,testHeapSort.size());
    auto endHeapSort=std::chrono::steady_clock::now();
    std::chrono::duration<double>durationHeapSort=endHeapSort-startHeapSort;
    std::cout<<"HeapSort time is: "<<durationHeapSort.count()<<std::endl;
    std::cout<<"heapsort: ";
    heapsort(testMyVectors, testMyVectors.size());
    for(auto it : testMyVectors)
        std::cout << it << " ";
    std::cout<<std::endl;


    std::vector<int>testQuickSort=testMyVectors;
    auto startQuickSort=std::chrono::steady_clock::now();
    quickSort(testQuickSort,0,testQuickSort.size()-1);
    auto endQuicSort=std::chrono::steady_clock::now();
    std::chrono::duration<double>durationQuicksort=endHeapSort-startHeapSort;
    std::cout<<"QuickSort time is: "<<durationQuicksort.count()<<std::endl;
    int size=testMyVectors.size();
    quickSort(testMyVectors,0,testQuickSort.size()-1);
    std::cout<<"QuickSort:";
    for(auto it:testMyVectors)
        std::cout<<it<<" ";
    std::cout<<std::endl;


    std::vector<int>testRadixSort=testMyVectors;
    auto startRadixSort=std::chrono::steady_clock::now();
    radixSort(testRadixSort);
    auto endRadixSort=std::chrono::steady_clock::now();
    std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long int, std::ratio<1, 1000000000>>> durationRadixSort= endRadixSort=startRadixSort;//in this comment my complair make it is self
    std::cout<<"RadixSort time is: "<<durationQuicksort.count()<<std::endl;
    radixSort(testMyVectors);
    std::cout<<"RadixSort: ";
    for( auto it:testMyVectors){
        std::cout<<it<<" ";
    }


    return 0;
}
