#include <stdio.h>



int main() {
    int arr [6] = {3,8,77,65,43,1};
       
     int i,j,tmp;

    int len = sizeof(arr) / sizeof(arr[0]);
    for (i = 0;i < len;i++) {
        printf("%d  ",arr[i]);
    }  



    //bubble sort
    for (i = 0;i < len;i++) {
        for (j = 0;j < len - i-1;j++) {
            if (arr[j] > arr[j+1]) {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    } 

    printf("\n");

    for (i = 0;i < len;i++) {
        printf("%d  ",arr[i]);
    }  

}