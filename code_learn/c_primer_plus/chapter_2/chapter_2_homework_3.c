#include<stdio.h>

int main(int argc, char const *argv[])
{
    int my_age_years, my_age_days;
    
    printf("输入您的年龄：");
    scanf("%d", &my_age_years);

    my_age_days = my_age_years*365; //把年龄转换为天数，忽略闰年

    printf("您的年龄转换成天数为：%d 天\n", my_age_days);
    
    return 0;
}
