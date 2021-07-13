#include<iostream>
#include <cstdlib>
using namespace std;
int main ()
{   int a,b,c,MaiorAB,MaiorBC,MaiorAC;
    cin >>a>>b>>c;
    MaiorAB=(a+b+abs(a-b))/2;
    MaiorBC=(b+c+abs(b-c))/2;
    MaiorAC=(a+c+abs(a-c))/2;
    if (MaiorAB>MaiorBC){
        cout << MaiorAB <<" eh o maior"<<endl;
        }
    else if (MaiorBC>MaiorAC){
        cout << MaiorBC <<" eh o maior"<<endl;
        }
    else {
        cout << MaiorAC <<" eh o maior"<<endl;
        }
    return 0;
}




