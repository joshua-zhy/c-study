#include <stdio.h>

int fibo(int num) {
    if (num  < 1) {
        printf("%d num must more than 1");
    }
    if (num == 1 || num == 2) {
        return 1;
    }    

    return fibo(num-1) + fibo(num-2);  
}


int main() {
    printf("%d",fibo(10));
}