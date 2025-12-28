#include<stdio.h>

int main(){
    int a;
     int n[10];
     for(int i=0;i<10;i++){
         printf("Enter marks of student %d: ",i+1);
         scanf("%d",&n[i]);
     }
     for(int i =0;i<10;i++){
        if(n[i]<35){
            printf("Array Index :%d \n",i);
         }
     }



    
    return 0;
}