#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter number of inputs :");
    scanf("%d",&n);
    int* ptr =(int*) malloc(n*sizeof(int)); //  In malloc only 1 argument is required for allocating memory. It is slighty faster than calloc as is allocates the memory as it it even if there is garbage values stored in it 
    int* p=ptr;
    for(int i=0;i<n;i++){ // 
        scanf("%d",&*(ptr+i));
    }
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    
    free(ptr);
    return 0;

}