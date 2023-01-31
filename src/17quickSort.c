#include <stdio.h>

void quickSort(int arr[], int left, int right){  //arr是数组，left是起始下标，right是结束下标
    if (left >= right) {
        return;
    }
   
   int base  = left, l = left,r = right;
   
    while (l < r){
        while (l < r && arr[r] >= arr[base]){//右边先判断
            r--;//往右走
        }
        arr[l] = arr[r];

        while (l < r && arr[l] <= arr[base]){//左边
            l++;//往左走
        }
        arr[r] = arr[l];

        //base 的位置 就在 left = right 
        arr[l] = arr[base]; 

    }

    quickSort(arr,left,r-1);
    quickSort(arr,r+1,right);
}

int main() {
    int arr[] = {4, 3, 8, 2, 1, 7, 5, 6, 9, 0};
    int len = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, len-1);  //10个数字下标就是0-9
    for (int i = 0; i < len; ++i) {
        printf("%d ", arr[i]);
    }
}