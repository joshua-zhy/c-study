#include <stdio.h>

int main() {
    int arr[5] = {1,2,3,4,5};

    int i;
    int len = sizeof(arr)/sizeof(arr[0]); 

    for (i = 0; i < len; i++) {
        printf("%d\t",arr[i]);
    }
}