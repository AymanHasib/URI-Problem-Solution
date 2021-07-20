#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    int speed,time;
    float fuel;
    cin >>time;
    cin >>speed;
    fuel= (float) (time*speed)/12;
    cout << fixed << setprecision(3) << fuel << endl;
    return 0;
}






