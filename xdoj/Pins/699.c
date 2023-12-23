#include <stdio.h>
#define MAXCOUNT 30

int main(){
    int count, chief;
    int a[MAXCOUNT];
    scanf("%d %d", &count, &chief);
    for(int i = 0; i < count; i++) scanf("%d", &a[i]);
    
    int sum = 0;
    for(int i = 0; i < count; i++) sum += a[i];

    int chiefScore = a[chief-1];
    int validCount = count;

    int max = a[0];
    int min = a[0];
    for(int i = 0; i < count; i++){
        if(a[i] > max) max = a[i];
        else if(a[i] < min) min = a[i];
    }

    if(chiefScore != max){
        sum -= max;
        validCount--;
    }
    if(chiefScore != min){
        sum -= min;
        validCount--;
    }

/*     for(int i = 0; i < count; i++){
        if(a[i] == max && a[i] != chiefScore){
            sum -= max;
            validCount--;
        }else if(a[i] == min && a[i] != chiefScore){
            sum -= min;
            validCount--;
        }
    } */

    double average = (double) sum / validCount;
    printf("%.2f", average);
}
