#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    if(a > b){
        a ^= b;
        b ^= a;
        a ^= b;
    }

    int count3 = 0;
    int count4 = 0;
    int count5n2 = 0;

    for(int i = a; i <= b; i++){
        if(i%3==0) count3++;
        if(i%4==0) count4++;
        if(i%5==0 && i%2 != 0) count5n2++;
    }

    int max = 0;
    int x[6] = {
        count3%count4,
        count4%count3,
        count4%count5n2,
        count5n2%count4,
        count5n2%count3,
        count3%count5n2,
    };

    for(int i = 1; i < 6; i++){
        if(x[i] > max) max = x[i];
    }

    printf("%d %d %d\n%d", count3, count4, count5n2, max);
}