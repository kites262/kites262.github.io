#include <stdio.h>

void sort(int* a, int count){
    for(int i = 0; i < count; i++){
        for(int j = 0; j < count-1-i; j++){
            if(a[j]>a[j+1]){
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
    
    int a[100];
    for(int i = 0; i < user; i++){
        scanf("%d", &a[i]);
    }

    sort(a, user);

    int count = 1;
    for(int i = 0; i < user; i++){
        if(a[i] == a[i+1]) count++;
        else{
            printf("%d:%d\n", a[i], count);
            count = 1;
        }
    }

    return 0;
}