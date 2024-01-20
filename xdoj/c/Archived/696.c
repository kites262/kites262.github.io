#include <stdio.h>
#define MAXCOUNT 20
void swap(int* a, int* b){
    if(*a == *b) return;
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

int main(){
    int count;
    int a[MAXCOUNT];
    scanf("%d", &count);
    for(int i = 0; i < count; i++) scanf("%d", &a[i]);
    
    int indexMax = 0, indexMin = 0;

    //Part 1: Find min
    for(int i = 1; i < count; i++){
        if(a[i] < a[indexMin]) indexMin = i;
    }
    swap(&a[0], &a[indexMin]);

    //Part 2: Find max
    for(int i = 1; i < count; i++){
        if(a[i] > a[indexMax]) indexMax = i;
    }
    swap(&a[count-1], &a[indexMax]);

    for(int i = 0; i < count; i++) printf("%d ", a[i]);
}