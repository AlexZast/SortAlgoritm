#include "randomarraygenerator.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <vector>
//namespace randomarraygenerator{

void RandomArrayGenerator::arrayGenerate(int length){
    // Открытие файла
    std::ofstream r_arr;
    std::string name = "array_int_";
    name += std::to_string(length);
    r_arr.open(name);
    if (!r_arr.is_open())
    {
        std::cerr << "Error file open.";
        exit(1);
    }
    srand(time(0));
    for (int i = 0; i<length; ++i){
        int r = rand();
        r_arr.write((char*)&r, sizeof(int));
    }
    r_arr.close();
}
void RandomArrayGenerator::arrayRead(std::vector<int> &a,int length){
    std::ifstream fin;
    std::string name="array_int_";
    name += std::to_string(length);
    fin.open(name);
    if (!fin.is_open())
    {
       std:: cerr << "Error opening file";
        exit(2);
    }
    int r;
    for (int i = 0; i < length; ++i)
    {
        fin.read((char*)&r, sizeof(int));
        a.push_back(r);
       // std::cout << r << " | ";
    }

}
void RandomArrayGenerator::printArray(std::vector<int> &a){
    int ln = a.size();
        for(int i=0; i < ln; ++i){
            std::cout << a[i] << " | ";
        }
//}
};
