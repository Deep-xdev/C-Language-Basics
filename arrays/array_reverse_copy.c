#include<stdio.h>

void function(){
    return;
}
int main(){

     int n;

    printf("Enter : ");

    scanf("%d",&n);

    int arr[n],rev[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        rev[n-i-1]=arr[i];
    }
    
    for(int i=0;i<n;i++){
        printf(" original %d\n",arr[i]);
        printf(" rev %d\n",rev[i]);
    }
    return 0;
}