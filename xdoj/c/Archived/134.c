#include <stdio.h>

void sort(int* a, int count){
    for(int i = 0; i < count-1; i++){
        for(int j = 0; j < count-1-i; j++){

            //compare & swap
            if(a[j] < a[j+1]){
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
    
    int a[10];
    int len;
    for(len = 0; user > 0; len++){
        a[len] = user%10;
        user /= 10;
    }

    sort(a, len);

    for(int i = 0; i < len; i++){
        printf("%d ", a[i]);
    }

    return 0;
}