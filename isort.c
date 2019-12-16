shift_element(int* arr, int i){

    int temp = *(arr+i);
    
    for (int k = i ; k>0 ; k--){

        *(arr+k) = *(arr+k-1);
    }
    *(arr) = temp;
}


insertion_sort (int* arr , int len){

    for (int i = 0; i < len; i++)
    {
        if(*(arr+i) > *(arr+i+1)){
            shift_element(arr, i+1);
        }
        for(int j=0 ; j < i ; j++){
            if(*(arr+j) > *(arr+j+1)){
                int temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
        }
    }
}