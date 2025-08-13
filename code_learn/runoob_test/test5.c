#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x, y, z, temp;

    printf("请输入三个整数：");
    scanf("%d %d %d", &x, &y, &z);

    if (x > y)
    {
        temp = x;
        x = y;
        y = temp; 
    }

    if (x > z)
    {
        temp = z;
        z = x;
        x = temp; 
    }

    if (y > z)
    {
        temp = y;
        y = z;
        z = temp; 
    }

    printf("从小到大排序为：%d %d %d\n", x, y, z);

    return 0;
}
