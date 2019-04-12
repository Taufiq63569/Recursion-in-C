#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int a=fact(n);
    printf("Factorial of  %d is: %d\n",n,a);
    return 0;
}
int fact(int n){
    if(n<2) return 1;
    else
        return (n)*fact(n-1);
}
