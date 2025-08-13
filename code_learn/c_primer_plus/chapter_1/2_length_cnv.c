#include<stdio.h>

int main(int argc, char const *argv[])
{
    float user_input = 0;
    printf("输入您想转换的长度(单位：英寸)：");
    scanf("%f", &user_input);

    printf("转换后的长度为(单位：厘米)：%.2f\n", user_input*2.54);
    
    return 0;
}
