#include <stdio.h>
#include <string.h>
#include <ctype.h>

char encode(char src){
    if(islower(src)){
        if(src >= 'n'){
            src = src - 13;
        }else{
            src = src + 13;
        }
    }else if(isupper(src)){
        if(src >= 'N'){
            src = src - 13;
        }else{
            src = src + 13;
        }
    }

    return src;
}

int main(){
    char str[60];
    fgets(str, sizeof(str), stdin);
    
    int len = strlen(str);
    for(int i = 0; i < len; i++){
        str[i] = encode(str[i]);
    }

    puts(str);
}