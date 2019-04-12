#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    long a=fib(n);
    printf("%dth fibonacci number is: %d\n",n,a);
    return 0;
}

int fib(int n){
if(n<=2) return 1;
else
    return fib(n-2)+fib(n-1);
}
