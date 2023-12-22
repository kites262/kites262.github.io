#include <stdio.h>

int fun(int n){
    if(n == 1) return 2;
    if(n == 2) return 3;
    return (n-1)*(n-1)+3*(n-2)+1;
}

int main(){
    int m, k;
    scanf("%d %d", &m, &k);

    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    for(int i = 1; i <= k; i++){
        int a = fun(i);
        if(a%m == 0) count0++;
        else if(a%m == 1) count1++;
        else count2++;
    }

    printf("%d %d %d", count0, count1, count2);
}