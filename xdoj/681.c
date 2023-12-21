#include <stdio.h>

int main(){
    const int key1 = 3, key2 = 5, key3 = 7;

    int len;
    int a[30];
    scanf("%d", &len);
    for(int i = 0; i < len; i++){
        scanf("%d", &a[i]);
    }

    int count = 0;
    for(int i = 2; i < len; i++){
        if(a[i-2] == key1 && a[i-1] == key2 && a[i] == key3){
            count++;
        }
    }

    printf("%d", count);
}