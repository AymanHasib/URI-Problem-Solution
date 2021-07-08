#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    int pc1,pc2,pu1,pu2;
    float am1,am2,total;
    cin >>pc1>>pu1>>am1;
    cin >>pc2>>pu2>>am2;
    total=(pu1*am1)+(pu2*am2);
    cout << "VALOR A PAGAR: R$ "<<fixed << setprecision(2) << total <<endl;


    return 0;
}


