#include <stdio.h>

int main(){
    int count;
    int a[30];

    scanf("%d", &count);
    for(int i = 0; i < count; i++){
        scanf("%d", &a[i]);
    }

    int y[30];

    //Calculate the mid first
    for(int i = 1; i < count-1; i++){
        y[i] = a[i-1]+a[i]+a[i+1];
        y[i] /= 3;
    }
    //Calculate the first 1 and last 1
    y[0] = y[1];
    y[count-1] = y[count-2];

    for (int i = 0; i < count; i++)
    {
        printf("%d ", y[i]);
    }
}