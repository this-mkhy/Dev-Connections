#include<stdio.h>
#include<conio.h>
void main()
{
    printf("AND GATE\n");
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
            printf("%d %d %d\n",i,j,(i&&j));
        }
    }
    printf("OR GATE\n");
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
            printf("%d %d %d\n",i,j,(i||j));
        }
    }
    printf("NOT GATE\n");
    for(int i=0;i<=1;i++)
    {
        printf("%d %d\n",i,(!i));
    }
}