#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    float A,B,C,tri,cir,tra,sqa,rec;
    cin >> A >> B >>C;
    tri= (A*C/2);
    cir= (3.14159*C*C);
    tra= ((A+B)/2)*C;
    sqa= (B*B);
    rec= (A*B);
    printf("TRIANGULO: %.3f\n", tri);
    printf("CIRCULO: %.3f\n", cir);
    printf("TRAPEZIO: %.3f\n", tra);
    printf("QUADRADO: %.3f\n", sqa);
    printf("RETANGULO: %.3f\n", rec);
    return 0;
}
