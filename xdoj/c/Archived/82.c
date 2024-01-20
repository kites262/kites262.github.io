#include <stdio.h>

int main(){
    char pw[51];
    //这题的测试用例里有空格存在，所以用fgets
    fgets(pw, 50, stdin);

    int len = 0;
    while(pw[len] != '\n') len++;

    int score = 0;

    //#1
    if(len != 0) score++;

    //#2
    if(len > 8) score++;

    //#3
    int hasDigit = 0, hasAlphaH = 0,hasAlphaL = 0, hasSymbol = 0;
    for(int i = 0; i < len; i++){
        char c = pw[i];
        if(c >= '0' && c <= '9') hasDigit = 1;
        else if(c >= 'A' && c <= 'Z') hasAlphaH = 1;
        else if(c >= 'a' && c <= 'z') hasAlphaL = 1;
        else hasSymbol = 1;
    }

    int index = hasDigit + hasAlphaH + hasAlphaL + hasSymbol;
    if(index == 2) score += 1;
    else if(index == 3) score += 2;
    else if(index == 4) score += 3;

    printf("%d", score);
}