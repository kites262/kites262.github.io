#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * Generally, the frequency of an alpha will not more than 100
 * So we could just write codes to solve `0~9` and `10~99`
 * 
 * But out of my own spirit
 * I turned the frequency we could sove into 100 digits with cache!
*/

char* compress(char*);

int main(){
    char user[100] = "";
    scanf("%s", user);
    
    puts(compress(user));
}

char* compress(char* src){
    int srcLen = strlen(src);

    int comLen = 0;
    char com[100] = "";

    int cacheLen = 0;
    int cacheCount[100];

    int count = 1;
    for(int i = 1; i < srcLen+1; i++){
        //1 - if same
        if(src[i] == src[i-1]){
            count++;
        }else{//2 - or not same, meaning append works started
            char tar = src[i-1];
            //2.1 - if only 1/2 alphas, append directly
            if(count <= 2){
                for(int j = 0; j < count; j++){
                    //set an alpha
                    com[comLen] = tar;
                    comLen++;
                }
            }else{//2.2 - if more alphas, firstly append an alpha, then number
                //set frist alpha
                com[comLen] = tar;
                comLen++;
                //parse `count` to array
                while(count > 0){
                    cacheCount[cacheLen] = count % 10;
                    count /= 10;
                    cacheLen++;
                }
                //append array`count` to str`com`
                while(cacheLen > 0){
                    com[comLen] = cacheCount[cacheLen-1] + '0';
                    comLen++;
                    cacheLen--;
                }
            }
            //2 - reset `count`
            count = 1;
        }
    }

    for(int i = 0; i < comLen; i++){
        src[i] = com[i];
    }
    src[comLen] = '\0';
    return &src[0];
}