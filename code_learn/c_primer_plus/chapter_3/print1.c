#include<stdio.h>

int main(int argc, char const *argv[])
{
    int ten = 10;
    int two = 2;

    printf("Doing it right: ");
    printf("%d minus %d is %d\n", ten, 2, ten-two);
    printf("Doing it worng: ");
    printf("%d minus %d is %d\n", ten, 2, two);

    return 0;
}
