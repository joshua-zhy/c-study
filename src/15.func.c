#include <stdio.h>

void test();//定义函数原型，因为C语言是从上往下的，所以如果要在下面的主函数中使用这个函数，一定要定义到它的上面。


int main() {
    test();
}
void test(){   //函数具体定义，添加一个花括号并在其中编写程序代码，就和我们之前在main中编写一样
    printf("我是测试函数!");
}   