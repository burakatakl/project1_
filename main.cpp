#include <iostream>
#include "HeapSort.h"
#include "InsertionSort.h"
#include <vector>
#include "quicksort.h"
#include "radixSort.h"
#include <chrono>
#include <random>
#include "myHybridSort.h"

int main() {
    std::random_device rd;
    std::mt19937 g(rd());
    std::vector<int> testMyVectors;
    const int a=100;
    for (int i=0;i<a;i++){
        testMyVectors.push_back(g()%100);// random numbers (0 to 99)
    }
    std::shuffle(testMyVectors.begin(),testMyVectors.end(),g);


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
    std::chrono::duration<double>durationQuicksort=endQuicSort-startQuickSort;
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
    std::chrono::duration<double>durationRadixSort=endRadixSort-startRadixSort;
    std::cout<<"RadixSort time is: "<<durationRadixSort.count()<<std::endl;
    radixSort(testMyVectors);
    std::cout<<"RadixSort: ";
    for( auto it:testMyVectors)
        std::cout<<it<<" ";
    std::cout<<std::endl;

    std::vector<int>testMyHybridSort=testMyVectors;
    auto startHybridSort=std::chrono::steady_clock::now();
    myHybridSort(testMyHybridSort,30);
    auto endHybridSort=std::chrono::steady_clock::now();
    std::chrono::duration<double>durationHybridSort=endHybridSort-startHybridSort;
    std::cout<<"HybridSort time is: "<<durationHybridSort.count()<<std::endl;
    std::cout<<"HybridSort: ";
    for(auto it: testMyHybridSort)
        std::cout<<it<<" ";



    return 0;
}
