#include <stdio.h>
#define MAXCOUNT 100

int trend(int* n){
    return (*(n+1) - *n > 0) ? 1 : -1;
}

int main(){
    int count = 0;
    int user[MAXCOUNT];
    int result = 0;

    // init user[]
    for(int i = 0; i <= MAXCOUNT; i++){
        user[i] = 0;
    }

    // input user
    scanf("%d", &count);
    for(int i = 0; i < count; i++){
        scanf("%d", &user[i]);
    }

    // get
    for(int i = 1; i < count-1; i++){
        if(trend(&user[i-1]) != trend(&user[i])) result++;
    }

    printf("%d", result);
}