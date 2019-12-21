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
    int counter = 0;
    for (size_t i = 0; i <= sLen; i++) {
        if(*s == *t){
            s++;
            t++;
        }
        else{
            counter++;
            s++;
        }
    }
    if (counter > n){
        return 0;
    }
    return 1;
}


void print_lines(char * str){
    char txt[LINE] = {0};
    char *txtP = txt;
    int toContinue = 1;
    while(toContinue){
        while(1){
            scanf("%c",txtP);
            if (*txtP == '\n') {
                txtP = txt;
                break;
            }
            txtP++;
        }
        if(*(txt + 1)== '\0'){
            toContinue = 0;
            break;
        }
        while (*txtP != '\n'){
            int wordLength = getword(txtP);
            char word [WORD] = {0};
            char *wordP = word;
            for (size_t i = 0; i < wordLength; i++) {
                *wordP = *txtP;
                wordP++;
                txtP++;
            }
            *wordP = ' ';
            wordP = word;
            if (*txtP == ' ' || *txtP == '\t')
            txtP++;
            if (substring(word,str)){
                printf("%s", txt);
                txtP = txt;
                break;
            }
        }
        txtP = txt;
        int i = 0;
        while(i > LINE){
            *(txt + i) = '\0';
        }
    }
}


void print_similar_words(char * str){
    char txt[LINE] = {0};
    char *txtP = txt;
    int toContinue = 1;
    while(toContinue){
        while(1){
            scanf("%c",txtP);
            if (*txtP == '\n') {
                *(txtP + 1) = '\n';
                txtP = txt;
                break;
            }
            txtP++;
        }
        while (*txtP != '\n'){
            int wordLength = getword(txtP)+1;
            char word [WORD] = {0};
            char *wordP = word;
            for (size_t i = 0; i < wordLength; i++) {
                *wordP = *txtP;
                wordP++;
                txtP++;
            }
            wordP = word;
            if (similar(word,str,1)){
                printf("%s", word);
            }
        }
        for (size_t i = 0; i < LINE; i++) {
            if (*txtP == '\n') {
                break;
            }
            if (*txtP == '\0'){
                toContinue = 0;
                break;
            }
            txtP++;
        }
        txtP = txt;
    }
}


int main(int argc, char const *argv[]) {
    print_lines("cat\n");
    return 0;
}
