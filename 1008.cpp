#include<iostream>
#include <cstdlib>
#include<iomanip>
using namespace std;
int main ()
{
    int num,hrs;
    float amnt,slr;
    cin >>num;
    cin >>hrs;
    cin >>amnt;
    slr=hrs*amnt;
    cout << "NUMBER = "<< num<<endl;
    cout << "SALARY = U$ "<< fixed<< setprecision(2) <<slr<<endl;




    return 0;
}





