#include<stdio.h>
int main()
{
    int a[100], n, i;
    printf("Enter the number of element: ");
    scanf("%d", &n);
    printf("\n\nEnter elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    print(0, n-1,a);
    printf("\n");
    return 0;
    }

    void print(int i, int j, int a[]){
         if (i<=j){
            printf("%d %d\n", a[i], a[j]);
            print(i+1,j-1,a);
         }
    }
