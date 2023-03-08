#include<stdio.h>
int main()
{
    int a=100;
    if (a == 20)
    {
        printf("value of a is 10\n");
    }
    else if( a == 30)
    {
        printf("value of a is 30\n");   
    }
    else{
        printf("None of the values is matching \n");
    }
    
    printf("Exact value of a is : %d\n", a);
    
    return 0;
}