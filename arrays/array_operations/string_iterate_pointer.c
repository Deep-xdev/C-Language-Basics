#include<stdio.h>
#include<string.h>
int main(){
    char str[20]="Deepanshu";
    char *ptr=str;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    printf("\n");
    return 0;
}