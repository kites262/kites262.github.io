#include <stdio.h>

/**
 * mode:
 * 1 -> A != a
 * 0 -> A == a
*/
int check(char a, char b, int mode){
    if(a == b) return 1;
    if(mode == 0){
        if(a - b == 32 || b - a == 32) return 1;
        else return 0;
    }
    return 0;
}

int main(){
    char tar;
    int mode;
    scanf("%c %d\n", &tar, &mode);

    char user[64];
    scanf("%[^\n]", user);

    int count = 0;
    for(int i = 0; user[i] != '\0'; i++){
        if(check(tar, user[i], mode)) count++;
    }

    printf("%d", count);
}