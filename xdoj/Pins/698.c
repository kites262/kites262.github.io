#include <stdio.h>
#define MAXCOUNT 100

/**
 * Append 'n' into 'array' per digit
 * 'n' is less than 99
*/
void appendByDigit(int* array, int* len, int n){
    if(n >= 10){
        array[*len] = n / 10;
        (*len)++;
        array[*len] = n % 10;
        (*len)++;
    }else{
        array[*len] = n;
        (*len)++;
    }
}

int main(){
    int a[MAXCOUNT];
    int len;

    int a1, a2, n;
    scanf("%d %d %d", &a1, &a2, &n);
    
    a[0] = a1;
    a[1] = a2;
    len = 2;

    for(int i = 1; i < n; i++){
        int muti = a[i-1] * a[i];
        appendByDigit(a, &len, muti);
    }

    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}