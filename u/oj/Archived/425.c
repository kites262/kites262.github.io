#include <stdio.h>

int main(){
    int user;
    scanf("%d", &user);
    
    int s[51] = {0, 1, 1, 2, };
    for(int i = 4; i < 51; i++){
        s[i] = s[i-1]+s[i-3];
    }

    printf("%d", s[user]);

    return 0;
}