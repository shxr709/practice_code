#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x = 100;

    int y = 1234567800; //测试int的取值范围
    printf("%d\n", y);

    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dec = %d; octal = %#o; hex= %#x\n",x ,x ,x);
    
    return 0;
}


