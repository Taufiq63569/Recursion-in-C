#include<stdio.h>
int main(){
    int a[100], n,i;
    printf("Enter the number of element: ");
    scanf("%d", &n);
     printf("\n\nBefore reverse: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }


     printf("\n\n");

    printf("After reverse: ");
 reverse(0, n, a);
    printf("\n");
    return 0;

}

void reverse(int i, int n, int a[]){
    if (i<n){
        reverse(i+1, n, a);
        printf("%d ", a[i]);
    }
}
