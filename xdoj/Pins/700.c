#include <stdio.h>

int main(){
    int sumOdd = 0;
    int sumEven = 0;

    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i%2==0) sumEven += i;
        else sumOdd += i;
    }

    printf("%d %d", sumOdd, sumEven);
}