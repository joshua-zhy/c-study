#include <stdio.h>

int main() {
    int a = 1,b = 2,c = 3;
    int * arr[] = {&a,&b,&c};

    // for (int i = 0;i < 3; i++) {        
    //     printf("%d\n",*arr[i]);
    // } 

    int ** pp = arr;
    printf("%d\n",**pp);
    printf("%d\n",**(pp+1));
    printf("%d\n",**(pp+2));
}