#include <stdio.h>

void swap(int* a,int* b) {
    int tmp = *a;//取值
    *a = *b;
    *b = tmp;
}


int main() {
    int a = 10,b = 20;
    printf("a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("a=%d b=%d\n",a,b);


    int c = 2;
    int* p = &c;

    printf("%p\n",p);
    printf("%d\n",*p);
}