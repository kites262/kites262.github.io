#include <stdio.h>

void del(char* str, char* tar){
    int i = 0;
    int j = 0;
    while(str[i] != '\0'){
        if(i%2 == 0){
            tar[j] = str[i];
            tar++;
        }
        i++;
    }
    tar[j] = '\0';    
}

int main(){
    char user[64];
    char r[64];
    scanf("%s", user);

    del(user, r);
    printf("%s", r);
}