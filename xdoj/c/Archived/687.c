#include <stdio.h>

#define MAXCOUNT 50

int main(){
    int count;
    int a[MAXCOUNT];
    scanf("%d", &count);
    for(int i = 0; i < count; i++) scanf("%d", &a[i]);
    
    int max, min, sum;
    int maxIndex, minIndex;

    sum = a[0];
    max = a[0];
    maxIndex = 0;
    min = a[0];
    minIndex = 0;
    
    for(int i = 1; i < count; i++){
        sum += a[i];

        if(a[i] > max){
            max = a[i];
            maxIndex = i;
        }

        if(a[i] < min){
            min = a[i];
            minIndex = i;
        }
    }

    printf("%d %d %d %d %d", sum, max, maxIndex+1, min, minIndex+1);
}