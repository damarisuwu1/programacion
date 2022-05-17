#include<stdio.h>


int main(){
    int n1,n2, sum = 0, subs = 0, mult = 0, div=0;

    printf("enter the 2 numbers: ");
    scanf("%i %i",&n1,&n2);
    
    sum = n1 + n2;
    subs = n1 - n2;
    mult = n1 * n2;
    div = n1 / n2;

    printf("the sum is: %i\n",sum);
    printf("the substraction is: %i\n",subs);
    printf("the multiplication is: %i\n",mult);
    printf("the divide is: %i\n",div);

    return 0;
}
