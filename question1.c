#include <stdio.h>
#define size 50


int main(){


    int a[] = {2,1,0};
    
    int i = 2;
    int* arr = a;

    insertion_sort(arr,i);
    for (int j = 0; j < 3; j++)
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


insertion_sort (int* arr , int len){

    for (int i = 0 , j = 1 ; i < len && j<len ; i++ , j++)
    {
        
        if (*(arr+i) > *(arr+j)){
            int temp = *(arr+j);
            *(arr+j) = *(arr+i);
            *(arr+i) = temp;
            for(int k = 0 ; k< i ; k++){
                shift_element(arr,i);

            }
        }


    }
    


}

