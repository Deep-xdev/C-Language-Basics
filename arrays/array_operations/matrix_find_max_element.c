#include<stdio.h>
#include<limits.h>

int main(){
int arr[3][3]={23,45,67,87,65,4,3,23,4};
int max=arr[0][0];
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(max<arr[i][j]) {
            max=arr[i][j];
            printf("The index is %d%d",i,j);
    }
}
}
return 0;
}