#include<stdio.h>

//自定义的函数放在主函数前后都可以
int summer(int a, int b) //a,  b是summer函数的形参，用来接受main函数传入的数据
{
    int sum_result = a + b;

    return sum_result;  //将结果返回给主函数
}

int main(int argc, char const *argv[])
{
    int user_input_1, user_input_2; //用户输入的两个数字

    printf("请输入您想要加和的两个数字（用空格隔开）：");
    scanf("%d %d", &user_input_1, &user_input_2);   //从键盘获取用户输入的两个数字
    
    int result; //定义result用来接受自定义函数summer传回来的值
    result = summer(user_input_1, user_input_2);    //把user_input_1, user_input_2传到summer函数中
    printf("结果为：%d\n", result);

    return 0;
}

/*int summer(int a, int b)
{
    int sum_result = a + b;

    return sum_result;
}*/

