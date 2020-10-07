#ifndef _RANDOMARRAYGENERATOR_H_
#define _RANDOMARRAYGENERATOR_H_
#include <vector>

//namespace randomarraygenerator{
class RandomArrayGenerator
{
public:
    RandomArrayGenerator();
    static void arrayGenerate(int length);
    static void arrayRead(std::vector<int> &a, int length);
    static void printArray(std::vector<int> &a);
};
//}
#endif // _RANDOMARRAYGENERATOR_H_
