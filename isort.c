#include <stdio.h>

#define len 50
#define length 49


void shift_element(int* arr, int i){
    int temp = *(arr+i);
    for (int k = i ; k>0 ; k--){
        *(arr+k) = *(arr+k-1);
    }
    *(arr) = temp;
}


void insertion_sort (int* arr , int arrLen){
    for (int i = 0; i < arrLen-1; i++){
        if(*(arr+i) > *(arr+i+1)){
            shift_element(arr, i+1);
        }
        for(int j = 0 ; j < i ; j++){
            if(*(arr+j) > *(arr+j+1)){
                int temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
        }
    }
}


int main(){
    int num = len;
    int arr[len] = {0};
    for (int i = 0; i < len; i++){
        scanf("%d", arr + i);
    }
    insertion_sort(arr, num);
    for (int i = 0; i < len; i++){
        if (i == length){
            printf("%d", *(arr+i)); 
        }
        else{
            printf("%d,", *(arr+i));
        }
    }
    return 0;
}