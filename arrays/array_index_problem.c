#include <stdio.h>

void function(int a[],int n)
{
    for(int i =0;i<n;i++){
        if(i%2==0) a[i]=a[i]+10;
        else a[i]=a[i]*2;
    }
    printf("Modified Array \n");
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return;
}
int main()
{

    int n;

    printf("Enter number of elements: \n");

    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Elment %d \n", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Original Array \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    function(arr,n);
    return 0;
}