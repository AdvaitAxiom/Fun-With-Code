#include<stdio.h>

int main(){
    const int num = 10;
    printf("address %p\n",&num);
    
    int *ptr = (int *)&num;
    *ptr = 20;
    
    printf("num = %d\n", num);
    printf("address %p",&num);

    // https://chatgpt.com/share/67fb6489-7728-8002-9614-19631bfe28e9
    return 0;
}