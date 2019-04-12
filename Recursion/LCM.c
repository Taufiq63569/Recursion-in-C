#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d%d",&a, &b);
    int c=lcm(a,b,1);
    printf("LCM of %d %d is %d\n",a,b,c);
    return 0;
}

int lcm(int a, int b, int m){
    if (a*m%b==0) return a*m;
    return lcm(a, b, m+1);
}
