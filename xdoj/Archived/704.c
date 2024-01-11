#include <stdio.h>
#include <string.h>

int hex(char c){
    int bin = -1;
    if(c >= '0' && c <= '9') bin = c - '0';
    else switch (c){
    case 'A':
    case 'a':
        bin = 10;
        break;
    case 'B':
    case 'b':
        bin = 11;
        break;
    case 'C':
    case 'c':
        bin = 12;
        break;
    case 'D':
    case 'd':
        bin = 13;
        break;
    case 'E':
    case 'e':
        bin = 14;
        break;
    case 'F':
    case 'f':
        bin = 15;
        break;
    }

    return bin;
}

int main(){
    char str[50];
    scanf("%s", str);

    int len = strlen(str);
    int sum = 0;
    int flag = 0;
    for(int i = 0; i < len; i++){
        if(hex(str[i]) != -1){
            sum += hex(str[i]);
            flag = 1;
        }
    }

    if(flag == 1){
        printf("%d", sum);
    }else{
        printf("NO");
    }
}