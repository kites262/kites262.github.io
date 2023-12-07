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

int len2(char *str){
    int r = 0;
    int index = 0;
    while (str[index] != '\0') {
        if((str[index] >= '0' && str[index] <= '9')
        )r++;
        index++;
    }
    return r;
}

int main(){
    char str[64];
    scanf("%s", str);

    printf("%d", len1(str));
    printf(",");
    printf("%d", len2(str));

    return 0;
}