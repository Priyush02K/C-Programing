// Print Simple interst for set 03
#include <stdio.h>
int main(){

    int p,n,count ;
    float r,si;

    for (count=1;count<=3;count= count+1)
    {
        printf("Enter vaule of p ,n,and r: ");
        scanf("%d %d %f",&p,&n,&r);

        si=p*n*r/100;
        printf("Simple Interst =Rs.%f",si);
    }
    return 0;
}