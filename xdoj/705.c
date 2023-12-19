#include <stdio.h>

int main(){
    int len;
    int a[64];

    int foldCount;
    int originLenPower;
    scanf("%d %d", &originLenPower, &foldCount);

    //Calculate the value of `len` from `originLenPower`
    len = 1;
    for(int i = 0; i < originLenPower; i++){
        len *= 2;
    }

    //sser input part
    for(int i = 0; i < len; i++){
        scanf("%d", &a[i]);
    }

    //Control the count of fold by `foldCount`
    for(int i = 0; i < foldCount; i++){
        //A Fold
        for(int index = 0; index < len/2; index++){
            a[index] = a[index] + a[len-1 - index];
        }
        len /= 2;
    }

    for(int i = 0; i < len; i++){
        printf("%d ", a[i]);
    }
}