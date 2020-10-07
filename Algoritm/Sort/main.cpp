#include "randomarraygenerator.h"
#include "sortalgoritm.h"
#include <ctime>
#include <iostream>
#include <vector>

using namespace std;
//using namespace randomarraygenerator;

int main()
{
    vector<int> a;
    RandomArrayGenerator::arrayGenerate(10000);
    RandomArrayGenerator::arrayRead(a, 10000);
    cout << endl << endl;
    float start = clock();
    SortAlgoritm::BubleSort(a);
    float stop = clock();
    cout <<(stop-start) << endl;
   //RandomArrayGenerator::printArray(a);
    cout << endl<< "end";



    //cout << "Hello World!" << endl;
    return 0;
}

