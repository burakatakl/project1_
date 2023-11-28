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
    std::random_device rd;//here i can create random number and i putted name rd
    std::mt19937 g(rd());//it is the varian of the Mersen twister algorithm
    std::vector<int> testMyVectors;// here all random number will inside in testMvectors vecktor
    const int a=10;// we can cahnge in here how many element
    for (int i=0;i<a;i++){
        testMyVectors.push_back(g()%100);// random numbers (0 to 99)
    }
    std::shuffle(testMyVectors.begin(),testMyVectors.end(),g);// here in this function i can write how many element in my random array because of "g"i can take random numbers

    //insertionsort
    std::vector<int> testInsertionSort= testMyVectors;//here i copied the testvector insertionvector
    auto startInsertionSort = std::chrono::steady_clock::now();// here in this functiun save the start time
    insertionSort(testInsertionSort);//i called insertion function here
    auto endInsertionSort=std::chrono::steady_clock::now();// in this functiun ended the time line
    std::chrono::duration<double> durationInsertionSort=endInsertionSort-startInsertionSort;// here sorting time was calculate as the diffrence between start and end
    std::cout<<"InsertionSort time is: "<<durationInsertionSort.count()<<std::endl;// we can see in here calculation result
    std::cout<<"InsertionSort: ";
    for(auto IS:testInsertionSort)
        std::cout<<IS<<" ";// here we can see the result of insertionsort
    std::cout<<std::endl;

    //i used same things for the other sorting algortims too

    //heapsort
    std::vector<int> testHeapSort=testMyVectors;
    auto startHeapSort=std::chrono::steady_clock::now();
    heapsort(testHeapSort,testHeapSort.size());// i called heapsort function here
    auto endHeapSort=std::chrono::steady_clock::now();
    std::chrono::duration<double>durationHeapSort=endHeapSort-startHeapSort;
    std::cout<<"HeapSort time is: "<<durationHeapSort.count()<<std::endl;
    std::cout<<"heapsort: ";
    heapsort(testMyVectors, testMyVectors.size());
    for(auto it : testMyVectors)
        std::cout << it << " ";
    std::cout<<std::endl;

    //quıcksort
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

    //radixsort
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

    //hybridsort
    std::vector<int>testMyHybridSort=testMyVectors;
    auto startHybridSort=std::chrono::steady_clock::now();
    myHybridSort(testMyHybridSort,30); // i can changed here to array size here
    auto endHybridSort=std::chrono::steady_clock::now();
    std::chrono::duration<double>durationHybridSort=endHybridSort-startHybridSort;
    std::cout<<"HybridSort time is: "<<durationHybridSort.count()<<std::endl;
    std::cout<<"HybridSort: ";
    for(auto it: testMyHybridSort)
        std::cout<<it<<" ";



    return 0;
}

