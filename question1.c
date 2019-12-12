#include <stdio.h>


int main(){


    int a[] = {1,2,3,4,5,6,7,8,9,10};
    
    int i = 5;
    int* arr = a;

    shift_element(arr,i);
    for (int j = 0; j < 10; j++)
    {
        printf("num at place %d is %d",j,a[j]);
        printf("\n");
    }

}


shift_element(int* arr, int i){

    int temp = *(arr+i);
    
    for (int k = i ; k>0 ; k--){

        *(arr+k) = *(arr+k-1);
    }
    *(arr) = temp;
}

insertion_sort(int* arr , int len){


}