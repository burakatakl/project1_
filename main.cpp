#include <iostream>
#include "HeapSort.h"
#include "InsertionSort.h"
#include <vector>
#include "quicksort.h"
#include "radixSort.h"
#include <chrono>

int main() {


    std::vector<int> testMyVectors={1,2,26,77,22,6,89,10,22,31};

    std::vector<int> testInsertionSort= testMyVectors;
    auto startInsertionSort = std::chrono::steady_clock::now();
    insertionSort(testInsertionSort);
    auto endInsertionSort=std::chrono::steady_clock::now();
    std::chrono::duration<double> durationInsertionSort=endInsertionSort-startInsertionSort;
    std::cout<<"InsertionSort time is: "<<durationInsertionSort.count()<<std::endl;
    std::cout<<" InsertionSort: ";
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


    std::vector<int> QS={22,11,55,12,1,3,4,88};
    int size=QS.size();
    quickSort(QS,0,size-1);
    std::cout<<"QuickSort:"<<std::endl;
    for(auto it:QS)
        std::cout<<it<<" ";
    std::cout<<std::endl;


    std::vector<int> RS={11,33,22,1,4,5,6,26};
    radixSort(RS);
    std::cout<<"RadixSort: "<<std::endl;
    for( auto it:RS){
        std::cout<<it<<" ";
    }


    return 0;
}
