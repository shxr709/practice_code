#include<stdio.h>

int main(int argc, char const *argv[])
{
    int toes = 10;
    int twice_toes, squared_toes;

    twice_toes = toes*2;
    squared_toes = toes*toes;
    
    printf("toes = %d, toes twice = %d, toes squared = %d\n", toes, twice_toes, squared_toes);

    return 0;
}
