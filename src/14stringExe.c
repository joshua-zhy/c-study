#include <stdio.h> 
#include <stdlib.h>  
#include<string.h>

int main() {
    char str[20];

    gets(str);

    int len =strlen(str);
    int left = 0,right = len -1;

    _Bool flag = 1;
    
    while (left <= right) {
        if (str[left] != str[right]) {
            flag = 0;
            break;
        }
        left++;
        right--;    

    }
    if (flag) {
        printf("%s is right",str);
    }else {
        printf("%s is false",str);
    }

    
    
    







}