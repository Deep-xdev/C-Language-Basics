#include <stdio.h>

void function()
{
    return;
}
int main()
{
    int count = 0;
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i < 8; i++)
    {
        for (int j = i+1; j < 8; j++)
        {
            if (arr[i] + arr[j] == 12)
            {
                count++;
            }
        }
    }
    printf("%d", count);

    return 0;
}