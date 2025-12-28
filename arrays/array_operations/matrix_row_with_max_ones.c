#include<stdio.h>
int main(){
    int count =0;
    int arr[3][3]={1,0,1,0,1,0,0,1,1};
    for(int i=0;i<3;i++){
        int max_1=0;
        for(int j=0;j<3;j++){
            if(arr[i][j]==1) max_1++;
        }
        
    }
    printf("%d\n",count);
}