#include <stdio.h>
#include <string.h>

void subString(const char *src, int start, int end, char *result) {
    int length = strlen(src);

    int j = 0;
    for (int i = start; i <= end; i++) {
        result[j++] = src[i];
    }
    result[j] = '\0';
}

int compareStr(char* s1, char* s2){
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    int flag = 1;
    for(int i = 0; i < len1 && i < len2; i++){
        if(s1[i] != s2[i]){
            flag = 0;
            break;
        }
    }

    return flag;
}

int main(){
    char tar[4];
    char src[51];

    scanf("%s", tar);
    scanf("%s", src);

    int tarLen = strlen(tar);
    int srcLen = strlen(src);

    int repeat = 0;
    for(int i = 0; i <= srcLen-tarLen; i++){
        char sub[4];
        subString(src, i, i+tarLen-1, sub);

        if(compareStr(tar, sub)) repeat++;
    }

    printf("%d", repeat);
}