#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    int X;
    float Y,total;
    cin >>X;
    cin >>Y;
    total=X/Y;
    cout << fixed << setprecision(3) << total << " km/l" << endl;

    return 0;
}



