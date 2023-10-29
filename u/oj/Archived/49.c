#include <stdio.h>

int main(){
    int user, root;
    int hasRoot = 0;

    scanf("%d", &user);

    for(int i = 0; i <= user; i++){
        if(i*i == user){
            hasRoot = 1;
            root = i;
        }
        if(hasRoot) break;
    }

    if(hasRoot) printf("%d", root);
    else printf("no");
}