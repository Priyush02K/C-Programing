// Online C compiler to run C program online
//print the sum of n nature number and  print then in  reverse
#include <stdio.h>
int main()
{
    int n ;
    printf("enter the Number  : ");
    scanf("%d",&n);

    int sum = 0;
    for (int  i = 1, j=n; i<=n  && j>=1;i++,j--)
    {
        sum =sum +i;
        printf("%d\n",j);

    }
    
    printf("Sum is %d \n",sum);

    return 0;

}