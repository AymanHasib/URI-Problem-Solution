#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    double R,VOLUME;
    cin >>R;
    VOLUME=(4.0/3)*3.14159*(R*R*R);
    cout << "VOLUME = "<< fixed<<setprecision(3)<<VOLUME<<endl;
    return 0;
}


