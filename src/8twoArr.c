#include <stdio.h>

int  main() {
    int arr [3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int len1 = sizeof(arr)/sizeof(arr[0]); 
    int i,j;
    for (i = 0;i < len1;i++) {
        int len2 = sizeof(arr[0])/sizeof(arr[0][0]); 
        for (j = 0; j < len2;j++) {
            printf("%d  ",arr[i][j]);
        } 
        printf("\n");
    }
}