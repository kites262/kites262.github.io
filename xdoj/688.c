#include <stdio.h>

#define MAXCOUNT 1000

void sort(int* array, int count){
    for(int i = 0; i < count-1; i++){
        for(int j = 0; j < count-1-i; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main(){
    int count;
    int a[MAXCOUNT];
    scanf("%d", &count);
    for(int i = 0; i < count; i++) scanf("%d", &a[i]);
    
    sort(a, count);

    int maxRepeat = 0;
    int num = a[0];

    int repeat = 1;
    for(int i = 1; i < count; i++){
        if(a[i] == a[i-1]){
            repeat++;
        }else if(repeat > maxRepeat){
            maxRepeat = repeat;
            num = a[i-1];
            repeat = 1;
        }
    }

    printf("%d",num);
}