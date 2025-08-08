#include<stdio.h>

void jolly(void);
void deny(void);

int main(int argc, char const *argv[])
{
    //void jolly();
    //void deny();  不要用void deny();，要用deny();直接调用
    jolly();
    deny();
    
    return 0;
}

void jolly(void)
{
    for (int i = 0; i < 3; i++)
    {
        printf("For he`s a jolly good fellow!\n");    //因为他是个快乐的人!
    }
}

void deny(void)
{
    printf("Which nobody can deny!\n");   //这是无人可以否认的!
}