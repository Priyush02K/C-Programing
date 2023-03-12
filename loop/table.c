//print the table of anumber input  user .625

#include <stdio.h>
int main()
{
    int n;
    printf("Entre the Number :");
    scanf("%d",&n);

    for (int i = 0; i <=10; i++)
    {
        printf("%d\n",n*i);
    }
    
    return 0;
}