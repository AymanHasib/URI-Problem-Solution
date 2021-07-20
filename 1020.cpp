#include<iostream>
using namespace std;
void calculate(int a){
    cout << a/365 << " ano(s)" << endl;
    int c=a%365;
    cout << c/30 << " mes(es)" << endl;
    cout << c%30 << " dia(s)" << endl;
}
int main(){
    int a;
    cin >> a;
    calculate(a);
}
