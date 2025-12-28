#include <stdio.h>

void function()
{
    return;
}
int main()
{
    int n, m;
    
    printf("Enter number of rows \n");
    
    scanf("%d", &n);
    
    printf("Enter number of columns \n");
    
    scanf("%d", &m);
    
    int arr[n][m];
    
    int brr[n][m];
    
    int res[n][m];
    
    printf("Enter the values of array 1 :\n");
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter the value of array 2: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &brr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            res[i][j] = arr[i][j] + brr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}