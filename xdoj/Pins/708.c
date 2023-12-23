#include <stdio.h>

int f(int n){
    return 3*(n-1)*(n-1)+2*(n-1)+1;
}

int main(){
    int sumOdd = 0;
    int sumEven = 0;

    int count;
    scanf("%d", &count);

    for(int i = 1, calced = 0; calced < count; i++){
        if(f(i) > 100 && f(i) % 2 == 0){
            sumEven += f(i);
            calced++;
        }
    }

    for(int i = 1, calced = 0; calced < count-1; i++){
        if(f(i) > 100 && f(i) % 2 == 1){
            sumOdd += f(i);
            calced++;
        }
    }

    printf("%d %d", sumEven, sumOdd);
}