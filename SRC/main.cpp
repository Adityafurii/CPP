#include <iostream>
#include<string.h>
#include<vector>

using namespace std;

typedef unsigned char UCHAR;
void countVowConst();
void ex_Set();
void ex_floatingPoint();
void varSizeArray();

int main()
{
    int choice = 0;
    vector<string> vec;
    vec.push_back("1.Count Vowel and Consonants in a String");
    vec.push_back("2.Set example");
    vec.push_back("3.fixed point  8.24 floating number");

    for (int var = 0; var < vec.size(); ++var)
        cout<<vec.at(var)<<endl;

    cout<<"Enter your choice"<<endl;
    cin>>choice;

    switch (choice) {
    case 1:
        countVowConst();
        break;
    case 2:
        ex_Set();
        break;
    case 3:
        ex_floatingPoint();
        break;
    case 4:
        varSizeArray();
        break;
    default:
        cout<<"Invalid Choice";
        break;
    }

    return 0;
}























