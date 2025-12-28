#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the number of integers:\n");
    scanf("%d",&n);
    int* ptr=(int*) calloc(n,4); // In calloc the number of inputs and size of each container is provided to make allocate space in memory for usage and gives clean memory by initializing all values to 0;
    for(int i=0;i<n;i++){  // In short two arguments are required for calloc memory allocation 
        scanf("%d",ptr+i);
    } // It is slightly slower as compared to malloc cuz it clears the memory 
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    free(ptr); // Important to clear the memory so that memory can be usuable elsewhere !

    return 0;
}