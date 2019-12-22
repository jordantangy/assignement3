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


//word,str


int similar (char *s, char *t, int n){
    int sLen = getword(s);
    int tLen = getword(t);
    if (sLen < tLen){
        return 0;
    }
    int counter = 0;
    size_t i = 1;
    for (; i <= sLen; i++) {
        if(*t == ' ' || *t == '\n' || *t == '\t'){
            break;
        }
        if(*s == *t){
            s++;
            t++;
        }
        else{
            counter++;
            s++;
        }
    }
    if (i <= sLen){
        counter = counter + sLen - i + 1;
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
    int flag;
    while(toContinue){
        while(1){
            flag = scanf("%c",txtP);
            if(flag == EOF) {
                toContinue = 0;
                break;
            }
            if (*txtP == '\n') {
                txtP = txt;
                break;
            }
            txtP++;
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
    int flag;
    while(toContinue){
        while(1){
            flag = scanf("%c",txtP);
            if(flag == EOF) {
                toContinue = 0;
                break;
            }
            if (*txtP == '\n') {
                txtP = txt;
                break;
            }
            txtP++;
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
            if (similar(word,str,1)){
                while(*wordP != '\t' && *wordP != '\n' && *wordP != ' '){
                   printf("%c", *wordP);
                    wordP++;
                }
                printf("\n");
            }
        }
        txtP = txt;
        int i = 0;
        while(i > LINE){
            *(txt + i) = '\0';
        }
    }
}


int main() {
    char word[30] = {0};
    char *wordP = word;
    char act[1] = {0};
    while(1){
        scanf("%c", wordP);
        if (*wordP == ' '){
            *wordP = '\n';
            break;
        }
        wordP++;
    }
    scanf("%c", act);
    if (*act == 'a'){
      print_lines(word);
    }
    if (*act == 'b'){
        print_similar_words(word);
    }
    return 0;
}
