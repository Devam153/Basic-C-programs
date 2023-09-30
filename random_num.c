#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int num1 =(rand() % 6) + 1; //will generate num b/w 1  and 6
    int num2 =(rand() % 6) + 1;
    int num3 =(rand() % 6) + 1;

    printf("%d", num1);
    printf("\n%d", num2);
    printf("\n%d", num3);

}