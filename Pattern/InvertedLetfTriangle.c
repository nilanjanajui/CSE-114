#include<stdio.h>

int main()
{
    int n, col, row;

    printf("How many rows of left triangle?\n");
    scanf("%d", &n);

    for(row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}