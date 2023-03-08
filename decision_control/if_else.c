#include<stdio.h>
int main()
{
 int age;
 printf("Enter the age : ");
 scanf("%d",&age);
 
 if (age>18)
 {
    printf("Yes! You Adult \n");
    printf("Yes! You can Vote  \n");
    printf("Yes! You can Drive \n");
 }
 else
 {
    printf("Your Not Adult");
 }
 


 return 0;
}