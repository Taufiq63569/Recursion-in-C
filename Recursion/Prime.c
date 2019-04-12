#include<stdio.h>
int main()
{

    int n;
    printf("Enter a number: ");
   while( scanf("%d",&n)==1)
   {


    int a=prime(2, (int)sqrt(n), n);
    if (a==1)
        printf("The number is prime\n");
    else
        printf("The number is not prime\n");
   }
    return 0;
}

int prime(int i, int r, int n){
    if (n<2) return 0;
    if (i>r) return 1;
    if (n%i==0
) return 0;
    return prime(i+1, r, n);
}
