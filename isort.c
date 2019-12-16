#include <stdio.h>
#define size 50


int main(){


    int a[] = {5,2,45,30,3,8,6};
    
    int i = 2;
    int* arr = a;

    insertion_sort(arr,7);
    for (int j = 0; j < 7; j++)
    {
        printf("num at place %d is %d",j,a[j]);
        printf("\n");
    }

}


void shift_element(int* arr, int i){
    int temp = *(arr+i);
    for (int k = i ; k>0 ; k--){
        *(arr+k) = *(arr+k-1);
    }
    *(arr) = temp;
}


void insertion_sort (int* arr , int len){
    for (size_t i = 0; i < len-1; i++) {
        if (*(arr+i) > *(arr+i+1)){
            int* temp = arr+i;
            int toMove = 1;
            for (int j = i-1; j >= 0; j--){
                if (*(arr+j) > *(arr+i+1)){
                   toMove++;
                   temp--;
                }
                else{
                    shift_element(temp, toMove);
                }
            }
            if (temp == arr){
                shift_element(temp, toMove);
            }
        }
    }
}

