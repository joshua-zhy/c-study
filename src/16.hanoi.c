#include <stdio.h>

void move(char start,char end,int n) {
    printf("plant of %d from %c to %c\n",n,start,end);
}

void hanoi(int n,char a,char b, char c) {
    if (n > 0) {
        hanoi(n-1,'a','c','b');//移动n-1个盘子 从a经过c最后到b
        move(a,c,n)  ;//移动最后一个盘子从a到c
        hanoi(n-1,'b','a','c');
    }
}

int main() {
    hanoi(3,'a','b','c');
}

