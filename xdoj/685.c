#include <stdio.h>
#include <string.h>

void rearrange(char* s){
    int len = strlen(s);
    for(int i = 0; i < len-1; i++){
        for(int j = 0; j < len-1-i; j++){
            if(s[j] > s[j+1]){
                char temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
}

int main(){
    char s[100];
    fgets(s, sizeof(s), stdin);

    rearrange(s);
    int len = strlen(s);
    for(int i = 0; i < len; i++){
        if(s[i] != '*'){
            printf("%c", s[i]);
        }
    }
}