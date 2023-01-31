#include <stdio.h>

union Object {
    int a;
    char b;
    float c;
};

int main() {
    union Object object;
    object.a = 66;   //先给a赋值66
    printf("%d", object.b);   //访问b
}
