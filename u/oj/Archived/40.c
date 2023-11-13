#include <stdio.h>

void sort(int* a, int count){
    for(int i = 0; i < count-1; i ++){
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

    int d = a[1] - a[0];
    int hasD = 1;
    for(int i = 2; i < user; i++){
        if(d != a[i] - a[i-1]){
            hasD = 0;
        }
    }

    if(hasD) printf("%d", d);
    else printf("no");

    return 0;
}