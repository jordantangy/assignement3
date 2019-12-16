#include <stdio.h>
#include "isort.c"

#define len 50


int main(){
    int arr[len] = {0};
    int temp = 0;
    printf("enter a number: ");
    scanf("%d", arr);
    for (size_t i = 0; i < len; i++){
        scanf("%d", arr + i);
    }
    for (size_t i = 0; i < len; i++){
        printf("%d, ", *(arr+i));
    }
    return 0;
}