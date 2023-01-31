#include<stdio.h>

int main() {
    
    int a = 20;
    int b =10;
    int c = a + b;
    printf("%d\n",c);

    
    double d = 0.5;
    float e = 2.5f;
    //注意直接写2.5默认表示的是一个double类型的值，我们需要再后面加一个f或是F表示是flaot类型值
     printf("d = %f, e = %f\n", d, e); 


    //char

    char f = 'A'; //65
//字符需要使用单引号囊括，且只能有一个字符，不能写成'AA'，这就不是单个字符了
//注意这里的A代表的是A这个字符，对应的ASCII码是65，实际上c存储的是65这个数字
    printf("f=%d\n",f);//65
    printf("f=%c\n",f);//A

    char g = 21;

    printf("f=%c\n",g);//f=    



    int a1,b1,c1,d1;
    printf("%d,%d,%d,%d\n",a1,b1,c1,d1);


    unsigned int a2 = 21;
    printf("%u\n",a2);



}