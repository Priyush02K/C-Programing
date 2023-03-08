#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age :");
    scanf("%d",&age);

    if (age < 12)
    {
       printf("You child");
    }
    else if (age < 18)
    {
       printf("You teenager");
    }
    else{
        printf("You adult");
    }
    return 0;
    
}