#include <stdio.h>
#include <string.h>

int isSubString(char* s1, char* s2){
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if(len1 != len2) return 0;
    for(int i = 0; i < len1; i++){
        if(s1[i] != s2[i]) return 0;
    }
    return 1;
}

void subString(const char *src, int start, int end, char *result) {
    int length = strlen(src);

    int j = 0;
    for (int i = start; i <= end; i++) {
        result[j++] = src[i];
    }
    result[j] = '\0';
}

int main(){
    char src[20];
    char tar[20];
    fgets(src, sizeof src, stdin);
    fgets(tar, sizeof tar, stdin);

    int len1 = strlen(src);
    int len2 = strlen(tar);

    //for '\n' by 'fgets()'
    src[--len1] = '\0';
    tar[--len2] = '\0';

    int index = -1;

    for(int i = 0; i <= len1-len2; i++){
        char nowString[20];
        subString(src, i, i+len2-1, nowString);
        if(isSubString(nowString, tar)) index = i+1;
    }

    if(index == -1) printf("No!");
    else printf("%d", index);
}