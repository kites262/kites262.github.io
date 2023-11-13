#include <stdio.h>

int main(){
    int user;
    scanf("%d", &user);
    
    int tar;
    scanf("%d", &tar);

    int a[100];
    for(int i = 0; i < user; i++){
        scanf("%d", &a[i]);
    }

    /**
     * compare & record
    */
    int indexs[100] = {0, };
    for(int i = 0; i < user; i++){
        if(a[i] == tar){
            indexs[0]++;
            indexs[indexs[0]] = i;
        }
    }

    /**
     * make result
    */
    for(int i = 1; i <= indexs[0]; i++){
        printf("%d ", indexs[i]);
    }
    if(indexs[0] == 0) printf("-1");

    return 0;
}