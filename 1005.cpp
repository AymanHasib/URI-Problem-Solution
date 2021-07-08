#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    float A,B,MEDIA;
    do {
        cin >>A;
        cin >>B;
    }
    while (A<0||A>10||B<0||B>10);
    MEDIA=((A*3.5)+(B*7.5))/(3.5+7.5);
    cout << "MEDIA = "<< fixed<<setprecision(5)<<MEDIA<<endl;
    return 0;
}



