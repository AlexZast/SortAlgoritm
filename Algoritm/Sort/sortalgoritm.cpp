#include "sortalgoritm.h"
#include <vector>

SortAlgoritm::SortAlgoritm()
{
}
void SortAlgoritm::BubleSort(std::vector<int> &a){
    int ln = a.size();
    int flag = 1;
    while (flag == 1){
        flag = 0;
        for(int i=0; i < ln-1; ++i){
            if (a[i]>a[i+1]){
                std::swap(a[i], a[i+1]);
                flag = 1;
            }
        }
    }
}
