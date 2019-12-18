#include <stdio.h>
#define LINE 256
#define WORD 30


int Getline(char s[]){
    int counter = 0;
    while (*s != '\n'){
        counter++;
        s++;
    }
    return counter;
}


int getword(char w[]){
    int counter = 0;
    while (*w != '\n' && *w != '\t' && *w != ' '){
        counter++;
        w++;
    }
    return counter;
}


int substring( char * str1, char * str2){
int d_len = strlen(d);
int c_len = strlen(c);

if(c_len > d_len){
    return 5;
}

else {
    char f[c_len];
    int res = 10;
    for (int i = 0; i < d_len ; i++){
        for (int j = 0 , k = i; j < c_len  ; j++ , k++)
            {
                f[j] = d[k];
            }
            res = strcmp(f,c);
            if(res == 0){
                break;
            }
            break;
     } 
}