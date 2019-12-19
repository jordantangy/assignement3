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
    int str1Len = getword(str1);
    int str2Len = getword(str2);
    if(str1Len < str2Len){
        return 0;
    }
    int dif = str1Len - str2Len;
    int flag = 0;
    for (size_t i = 0; i <= dif ; i++){
        if (*str1 == *str2){
            char * str1p = str1 + 1;
            char * str2p = str2 + 1;
            for (size_t j = 1; j < str2Len; j++){
                if (*str1p == *str2p){
                    flag = 1;
                    str1p++;
                    str2p++;
                }
                else{
                    flag = 0;
                    break;
                }
            }
        }
        if (flag){
            return flag;
        }
        str1++;
    }
    return flag;
}


int similar (char *s, char *t, int n){
    int sLen = getword(s);
    int tLen = getword(t);
    int counter = 0;
    for (size_t i = 0; i <= sLen &&  i <= tLen; i++) {
        if(*s == *t){
            s++;
            t++;
        }
        else{
            s++;
        }
    }
    if (counter > n){
        return 0;
    }
    return 1;
}


void print_lines(char * str){

}