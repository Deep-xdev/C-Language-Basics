#include <stdio.h>

void function()
{
    return;
}
int main()
{
    int n,sum=0;
    printf("Enter size of array: ");

    scanf("%d", &n);

    int Arr[n];
    for (int i = 0; i < n; i++){
        printf("Enter number %d",i+1);
        scanf("%d",&Arr[i]);
        sum+=Arr[i];
    }
    printf("%d",sum);

        return 0;
}