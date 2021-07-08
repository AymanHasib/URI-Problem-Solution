#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    float A,B,C,MEDIA;
    do {
        cin >>A;
        cin >>B;
        cin >>C;
    }
    while (A<0||A>10||B<0||B>10||C<0||C>10);
    MEDIA=((A*2)+(B*3)+(C*5))/(2+3+5);
    cout << "MEDIA = "<< fixed<<setprecision(1)<<MEDIA<<endl;
    return 0;
}




