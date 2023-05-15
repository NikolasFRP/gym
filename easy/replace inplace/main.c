//
// Created by nikolay on 14/05/23.
//

#include <stdio.h>

void inputStr(char* str, int len);
void replaceInStr(char* str,char template, char target);

int main(){
    int n = 200;
    char str[200] = { '\0' };

    inputStr(str, n);
    replaceInStr(str,' ','%');
    printf("%s", str);

    return 0;
}



void replaceInStr(char* str, char template, char target){
    for(int i = 0; str[i]!='\0'; ++i){
        if (str[i] == template)
            str[i] = target;
    }
}

void inputStr(char *str, int len){
    len = len-1;
    for (int i = 0; i < len; ++i) {
        char temp;
        scanf("%c", &temp);
        if (temp != '\n')
            str[i] = temp;
        else
            break;
    }
//    str[i+1] = '\0';
}