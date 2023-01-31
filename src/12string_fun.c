#include <stdio.h>

int main() {
    char str[10];

    scanf("%s",str);//不是数组类型的加 & str 本质是 char 数组不需要加

    printf("%s",str);
}