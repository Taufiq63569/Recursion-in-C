#include <stdio.h>
int main()
{
    int a[100], i, n;
    printf("Enter the number of element: ");
    scanf("%d", &n);
    printf("\n\nElements: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
     printf("\n\nOnly even members from all elements: ");
    even(0, 0, &n, a);
    for(i=0; i<n; i++){
            printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}

void even(int i, int j, int *n, int a[])
{
    if(i==*n)
    {
        *n = j;
        return;
    }
    if(a[i]%2==0) a[j++] = a[i];
    even(i+1, j, n, a);
}
