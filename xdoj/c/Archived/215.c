#include <stdio.h>


/**
 * Get length
*/
int len(char *str){
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

/**
 * print but reverse
*/
void reverse(char *str){
    int i = len(str) - 1;
    while(i >= 0){
        printf("%c", str[i]);
        i--;
    }
}

int main(){
    char str[64];
    scanf("%s", str);

    reverse(str);
}