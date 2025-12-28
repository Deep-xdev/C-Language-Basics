#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter number of inputs :");
    scanf("%d",&n);
    int* ptr =(int*) malloc(n*sizeof(int)); // allocating the memory 


    printf("%p\n",ptr);
    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    ptr=realloc(ptr,100*sizeof(int)); // Reallocating the memory for situations when the allocated memory is too much or not enough !!
    printf("%p",ptr);
    
    free(ptr);
    return 0;

}