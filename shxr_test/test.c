#include<stdio.h>
#include<unistd.h>  //sleep函数头文件

int main(int argc, char const *argv[])
{
    //printf("Hello, World!!!\n");
    
    //printf("Hello!!\007\7\7\n");
    //printf("\007");
    for (int i = 0; i < 3; i++)
    {
        printf("Hello!!\007\7\7\n");
        sleep(3);   //unsigned int sleep(unsigned int seconds); 参数seconds表示线程需要暂停的秒数
    }                  
    
    /*char user_input;

    printf("请输入文字（汉字）：");
    scanf("%c", &user_input);

    printf("您输入的是：%c\n", user_input);
    */
    return 0;
}
