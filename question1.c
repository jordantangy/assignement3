#include <stdio.h>
#define size 50


int main(){


    int a[] = {14,2,54,6};
    
    int i = 2;
    int* arr = a;

    insertion_sort(arr,4);
    for (int j = 0; j < 4; j++)
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

    for (int i = 0 , j =1 ; i < len && j < len ; i++ , j++){

        while(*(arr+j) > *(arr+i)){

            shift_element(arr,j);
             for (int k = 0 ; k < len ; k++)
        {
             if  (*(arr+k) > *(arr+k+1)) 
                    {
						int temp2 = *(arr+k+1);
						*(arr+k+1) = *(arr+k);
						*(arr+k) = temp2;
					}

        }

        }

       
					
    }
    
    
    


}

