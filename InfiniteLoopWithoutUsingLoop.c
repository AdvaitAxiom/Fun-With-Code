#include<stdio.h>

int main(){
    goto start;

    start:
    printf("infinite Loop: \n");
    goto start;
}