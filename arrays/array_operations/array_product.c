#include<stdio.h>
int main()
{
    int n,product=1;
    printf("Enter size of array: ");

    scanf("%d", &n);

    int Arr[n];
    for (int i = 0; i < n; i++){
        printf("Enter number %d \n",i+1);
        scanf("%d",&Arr[i]);
        product*=Arr[i];
    }
    printf("%d \n",product);

        return 0;
}