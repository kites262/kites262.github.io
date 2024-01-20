//没活可以咬打火机
#include <stdio.h>

#define MAXCOUNT 101

void swap(int* a, int* b){
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

void sortWithIndex(int* array, int* index, int count){
    for(int i = 0; i < count-1; i++){
        for(int j = 0; j < count-1-i; j++){
            if(array[j] > array[j+1]){
                swap(&array[j], &array[j+1]);
                swap(&index[j], &index[j+1]);
            }
        }
    }
}

int main(){
    int count;
    int array[MAXCOUNT];
    scanf("%d", &count);
    for(int i = 0; i < count; i++) scanf("%d", &array[i]);
    
    int index[MAXCOUNT];
    for(int i = 0; i < count; i++) index[i] = i+1;

    sortWithIndex(array, index, count);

    int deltaMax = array[1] - array[0];
    int deltaMin = array[1] - array[0];

    for(int i = 2; i < count; i++){
        int delta = array[i]-array[i-1];
        if(delta > deltaMax){
            deltaMax = delta;
        }else if(delta < deltaMin){
            deltaMin = delta;
        }
    }

    if(deltaMax == deltaMin){
        for(int i = 0; i < count; i++) printf("%d ", index[i]);
    }else{
        printf("%d %d", deltaMax, deltaMin);
    }
}