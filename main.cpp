#include <iostream>
#include "HeapSort.h"
#include "InsertionSort.h"
#include <vector>


int main() {


    std::vector<int> IS={12,3,5,6,7,8,9,22};
    insertionSort(IS);
    std::cout<<" InsertionSort: ";
    for (auto it:IS){
        std::cout<<it<<"\n";
    }
    std::cout<<"heapsort: "
    std::vector HP = {1,5,7,2,8};
    heapsort(HP, HP.size());
    for(auto it : HP)
        std::cout << it << "\n";





    return 0;
}
