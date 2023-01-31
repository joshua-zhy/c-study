#include <stdio.h>

int main() {
    double a = 3.1415926;
    int b = a;
    printf("%d\n",b);//3

    int a1 = 10 ,b2 = 3;
    double res = a1 / b2; //int / int = int     

    printf("%f\n",res);

    double a2 = 2.43433333333333333;
    int a3 = (int)a2;


    printf("%d\n",a3);//2

}