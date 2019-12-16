#include <stdio.h>
#include "isort.c"

#define len 50


int main(){
    int arr[len] = {0};
    int temp = 0;
    printf("enter a number: ");
    scanf("%d", &temp);
    printf("%d", temp);
    printf("%d", temp+1);
    return 0;
}