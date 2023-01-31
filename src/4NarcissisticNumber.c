#include <stdio.h>



int main()
{
    int num;
    for (num = 100; num < 1000; num++) {
        int l = num / 100;
        int mid = num % 100 / 10;
        int r = num % 10;

        if (l * l * l + mid * mid * mid + r * r * r == num){
            printf("%d is a narcissistic number\n", num);
        }
    }
}