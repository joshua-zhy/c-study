#include <stdio.h>

  struct Student {
    int id;
    int age;
    char * name;
}  s = {1,18,"hhh"};   //也可以直接在花括号后面写上变量名称（多个用逗号隔开），声明一个全局变量


int main() {
  struct Student s1 = {1,18,"hhh"};
//   struct Student s2 = {1,.name="hellp"};//


  printf("id = %d, age = %d, name = %s", s1.id, s1.age, s1.name);  //结构体变量.数据名称 (这里.也是一种运算符) 就可以访问结构体中存放的对应的数据了
    
}