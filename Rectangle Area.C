#include <stdio.h>
#include <stdlib.h>

int r_Area(int a,int b);

int main()
{
    int side;
    int length;
    int sound =7;

    printf("Enter side: ");
    scanf("%d",&side);

    printf(" \n");
    printf("Enter length ");
    scanf("%d",&length);

    int calculation = r_Area(side ,length);
    printf("\nanswer is: %d %c ",calculation,sound);

    return 0;
}

int r_Area(int a,int b)
{
    int result = a * b;
    return result;
}
