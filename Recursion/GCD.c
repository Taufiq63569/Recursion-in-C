#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    int c=gcd(a , b);
    printf("GCD of %d and %d is: %d\n",a,b,c);
    return 0;
}
int gcd(int a , int b){
    if(b==0) return a;
    gcd(b, a%b);
}
