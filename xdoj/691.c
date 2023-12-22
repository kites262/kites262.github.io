#include <stdio.h>

#define MAXCOUNT 30

int main(){
    int count;
    int a[MAXCOUNT];
    scanf("%d", &count);
    for(int i = 0; i < count; i++) scanf("%d", &a[i]);

    int d = count/2 + count%2;
    for(int i = 0; i < count/2; i++){
        int j = d + i;
        //swap i & count-1-i
        a[i] ^= a[j];
        a[j] ^= a[i];
        a[i] ^= a[j];
    }

    for(int i = 0; i < count; i++){
        printf("%d ", a[i]);
    }
}