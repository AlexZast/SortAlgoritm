#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class RandomArrayGenerator{
public:
    static void arrayGenerate(int lenth){
        cout << lenth << endl;

    }
};

int main()
{

    ofstream fout;
    fout.open("array_int_1000", ofstream::app);

    if (!fout.is_open())
    {
        cerr << "Error file open.";
        exit(1);
    }
    fout << "Some information 2" << endl;
    int i = 800;
    fout << 556;
    fout << i;
    fout.close();

    ifstream fin;
    fin.open("array_int_1000");
    if (!fin.is_open())
    {
        cerr << "Error opening file";
        exit(2);
    }

    RandomArrayGenerator::arrayGenerate(15);


    char ch;
    while(fin.get(ch)){
          cout << ch;
}

    cout << "Hello World!" << endl;
    return 0;
}
