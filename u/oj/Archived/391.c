#include <stdio.h>

int getFib(int index){
    int r;
    if(index == 1 || index == 2) r = 1;
    else r = getFib(index-1) + getFib(index-2);
    return r;
}

int main(){
    int user;
    scanf("%d", &user);
    
    for(int i = 1; i <= user; i++){
        printf("%d ", getFib(i));
    }

    return 0;
}