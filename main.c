#include <stdio.h>
#include "isort.c"

#define len 50
#define length 49


int main(){
    int num = len;
    int arr[len] = {0};
    for (size_t i = 0; i < len; i++){
        scanf("%d", arr + i);
    }
    void insertion_sort(arr, num);
    for (size_t i = 0; i < len; i++){
        if (i == length){
            printf("%d\n", *(arr+i)); 
        }
        else{
            printf("%d,", *(arr+i));
        }
    }
    return 0;
}