#include<stdio.h>
#include<math.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
   int a= sum_poly(0,n,m);

    printf("%d\n",a);
    return 0;
}

int sum_poly(int i, int n, int m){
    if(n==0)return 1;
    if(i<n){
        return (int)pow(m,i)+sum_poly(i+1,n,m);
    }
    return 0;
}
