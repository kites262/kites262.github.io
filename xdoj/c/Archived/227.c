#include <stdio.h>

int len1(char *str){
    int r = 0;
    int index = 0;
    while (str[index] != '\0') {
        if((str[index] >= 'A' && str[index] <= 'Z')
            ||
            (str[index] >= 'a' && str[index] <= 'z')
        )r++;
        index++;
    }
    return r;
}

int main(){
    char s[64];
    scanf("%s", s);

    printf("%d", len1(s));
}