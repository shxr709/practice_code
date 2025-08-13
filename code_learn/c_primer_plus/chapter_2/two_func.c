//一个文件中包含两个函数

#include<stdio.h>

void butler (void); // ANSI/ISO c函数原型

int main(int argc, char const *argv[])
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable DVDs.\n");

    return 0;
}

void butler(void)   //定义函数开始
{
    printf("You rang, sir?\n");
}