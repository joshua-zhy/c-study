#include <stdio.h>

enum status {low = 1, middle = 2, high = 3};

int main() {
    enum status a = low;   //和之前一样，直接定义即可，类型为enum + 枚举名称，后面是变量名称，值可以直接写对应的枚举
    printf("%d", a);
}   