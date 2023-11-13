#include <stdio.h>

/**
 * Compare T37
*/
int compare(int a, int b){
    if(a%2 == 0 && b%2 == 1) return 1;
    if(a%2 == 1 && b%2 == 0) return 0;
    return (a > b) ? 1 : 0;
}

/**
 * 排序函数，由大到小排序
 * 用到的compare函数因题而异
*/
void sort(int* a, int count){
    for(int i = 0; i < count-1; i++){
        for(int j = 0; j < count-1-i; j++){

            //compare & swap
            if(compare(a[j], a[j+1])){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main(){
    int user;
    scanf("%d", &user);
    
    int u[100];
    for(int i = 0; i < user; i++){
        scanf("%d", &u[i]);
    }

    sort(u, user);

    for(int i = user-1; i >= 0; i--){
        printf("%d ", u[i]);
    }

    return 0;
}