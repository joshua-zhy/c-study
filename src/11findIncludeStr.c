#include<stdio.h>
#include<string.h>

/*
    str1 = "abcdabbc"
    str2 = "cda"
*/

int main() {
    char str1[64];
    char str2[64];

    gets(str1);
    gets(str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);
                
    _Bool flag = 0;

    int p1 = 0,p2 = 0;

    while (p1 < len1 && p2 < len2){
        if (str1[p1] == str2[p2]) {
            p1++;
            p2++;
        }
        if (p2 == len2) {
            flag = 1;
        }
    }

    if (flag) {
        printf("%s include %s\n",str2,str1);
    }else {
        printf("%s not include %s\n",str2,str1);
    }
}
