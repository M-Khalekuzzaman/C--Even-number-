#include<stdio.h>
int main()
{
    int number,i;
    printf("Enter your given integer :");
    scanf("%d",&number);

    for(i=1;i<=number;i++)
    {
        if(i%2 == 0)
        {
                printf(" %d ",i);
        }

    }
    getch();

}
