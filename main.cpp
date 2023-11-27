#include <iostream>
#include "HeapSort.h"
#include "InsertionSort.h"
#include <vector>
#include "quicksort.h"


int main() {


    std::vector<int> IS={12,3,5,6,7,8,9,22};
    insertionSort(IS);
    std::cout<<" InsertionSort: "<<std::endl;
    for (auto it:IS) {
        std::cout << it << " ";
        std::cout << std::endl;
    }
    std::cout<<"heapsort: "<<std::endl;
    std::vector HP = {1,5,7,2,8};
    heapsort(HP, HP.size());
    for(auto it : HP)
        std::cout << it << " ";
    std::cout<<std::endl;


    std::vector<int> QS={22,11,55,12,1,3,4,88};
    int size=QS.size();
    quickSort(QS,0,size-1);
    std::cout<<"QuickSort:"<<std::endl;
    for(auto it:QS){
        std::cout<<it<<" ";
    }






    return 0;
}
