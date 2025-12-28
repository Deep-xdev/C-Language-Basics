#include<stdio.h>

void function(int a[]){
    a[0]=10;
    return;
}
int main(){
    int arr[4]={1,2,3,4};
    printf("%d \n",arr[0]);
    function(arr);
    printf("%d \n",arr[0]);
    
    return 0;
}