#include<stdio.h>

int is_leap_year(int year);

int main(int argc, char const *argv[])
{
    /*
    int user_input_year, user_input_month, user_input_day;
    int sum_days, i;

    printf("输入某年某月某日(用空格隔开)：");
    //scanf("%d %d %d", &user_input_year, &user_input_month, &user_input_day);
    scanf("%d", &user_input_year);

    if (user_input_year % 4 == 0 && user_input_year % 100 != 0 || user_input_year % 400 == 0)
    {
        user_input_year = 366;
    }else
    {
        user_input_year = 365; 
    }
    
    printf("你输入年份有%d天\n", user_input_year);
    */

    int year, month, day;
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = 0;

    printf("输入某年某月某日(用空格隔开)：");
    scanf("%d %d %d", &year, &month, &day);

    if (is_leap_year(year))//如果接受到is_leap_year返回的值是1则执行days_in_month[1] = 29;，否则将往下继续执行
    {
        days_in_month[1] = 29; //leap year 闰年
    }
    
    //计算从1月1日到输入日期的天数
    for (int i = 0; i < month - 1; i++)
    {
        total_days += days_in_month[i];
    }
    total_days += day;

    printf("%d年%d月%d日是该年的第%d天\n", year, month, day,total_days);

    return 0;
}

int is_leap_year(int year)//判断闰年，能被4整除且不能被100整除或者能被400整除的年份是闰年
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        return 1;
    }else
    {
        return 0;
    }
}
