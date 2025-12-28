#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int Arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d: \n", i + 1);
        scanf("%d", &Arr[i]);
    }

    int max = Arr[0];
    for (int i = 1; i < n; i++)
    {
        if (Arr[i] > max)
            max = Arr[i];
    }

    printf("Max = %d\n", max);
    return 0;
}