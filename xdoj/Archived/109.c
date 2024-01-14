#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void* a, const void* b){
    return *(char*)a - *(char*)b;
}

int main(){
    char s1[100], s2[100];
    int len1 = 0, len2 = 0;

    char str[100];
    scanf("%s", str);
    int len = strlen(str);

    for(int i = 1; i < len; i++){
        if(str[i] > str[0]){
            s1[len1++] = str[i];
        }else{
            s2[len2++] = str[i];
        }
    }
    s1[len1] = '\0';
    s2[len2] = '\0';

    qsort(s2, len2, sizeof(char), cmp);

    printf("%s%c%s\n", s1, str[0], s2);
}