#include <stdio.h>
#include <string.h>

int main(){
    char s1[20];
    char s2[20];
    int index;
    scanf("%s %s %d", s1, s2, &index);

    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for(int i = 0; i < len1+1; i++){
        if(i == index) printf("%s", s2);
        putchar(s1[i]);
    }
}