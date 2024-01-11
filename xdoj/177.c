#include <stdio.h>
#include <string.h>
#define MAXLEN 100

int main(){
    char str[MAXLEN];
    int len;
    scanf("%[^\n]", str);
    len = strlen(str);
    
    int sum = 0;
    for(int i = 0; i < len; i++){
        sum += str[i];
    }

    printf("%d", sum%0x100);
}
