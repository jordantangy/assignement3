#include <stdio.h>
#define LINE 256

int main(){

    char c[] = "Helloo";
    func(c);
    
    
    
    
}

void func(char s[]){

     int size = sizeof(s);
     printf("the size is %d", size );
     
}