#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int Arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter number %d: \n", i + 1);
        scanf("%d", &Arr[i]);
    }

    int max = Arr[0];
    int smax = Arr[0];   
    for (int i = 0; i < n; i++) {
        if (Arr[i] > max){
            smax=max;
            max = Arr[i];
        }
        else if(smax<Arr[i])
        {
            smax=Arr[i];
        }
    
    }
    
        

    printf("Max = %d\n", max);
      printf("second Max = %d\n", smax);
    return 0;
}