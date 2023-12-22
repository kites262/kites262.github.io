//出题人水平有待提高

#include <stdio.h>

#define MAXCOUNT 30

void sort(int* tar, int count){
    for(int i = 0; i < count-1; i++){
        for(int j = 0; j < count-1-i; j++){
            if(tar[j] > tar[j+1]){
                tar[j] ^= tar[j+1];
                tar[j+1] ^= tar[j];
                tar[j] ^= tar[j+1];
            }
        }
    }
}

int main(){
    int count;
    int a[MAXCOUNT];
    scanf("%d", &count);
    for(int i = 0; i < count; i++) scanf("%d", &a[i]);
    
    scanf("%d", &a[count]);
    count++;

    sort(a, count);

    for(int i = 0; i < count; i++){
        printf("%d ", a[i]);
    }
}