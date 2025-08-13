#include<stdio.h>

void smile(void);

int main(int argc, char const *argv[])
{
   for (int i = 3; i > 0; i--)          //外层for循环控制打总体打印几次，内层for循环控制每次打印几个
   {
        for (int j = 0; j < i; j++)    
        {
            smile();
        }
        printf("\n");
   }
   
    
    return 0;
}

void smile(void)
{
    printf("Smile!");
}
