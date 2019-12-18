#include <stdio.h>
#define LINE 256
#define WORD 30


int getline(char s[]){
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
if (getword(str2) > getword(str1)){
    return 0;
}
    while (*str2 != '\n' && *str2 != '\t' && *str2 != ' ') {
        int flag = 0;
        while (*str1 != '\n' && *str1 != '\t' && *str1 != ' ') {
            if (*str2 == *str1){
                str1++;
                str2++;
                flag = 1;
                break;
            }
            str1++;
        }
        if (flag == 0){
            return flag;
        }
    }
    return 1;
}