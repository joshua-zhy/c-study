#include <stdio.h>

int main() {
    int a = 20;
    int * p = &a;   //指向普通变量的指针
    //因为现在要指向一个int *类型的变量，所以类型为int* 再加一个*
    int ** pp = &p;   //指向指针的指针（二级指针）
    int *** ppp = &pp;   //指向指针的指针的指针（三级指针）



    printf("%d",**pp);
}   