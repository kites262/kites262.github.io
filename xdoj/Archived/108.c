#include <stdio.h>

/**
 * parse the number from a string
 * return that number
*/
int parseNumber(char* str){
    int a[10];
    a[0] = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(
            str[i] >= '0' && str[i] <= '9'
        ){
            a[a[0]+1] = str[i] - 48;
            a[0]++;
        }
    }
//
    int num = 0;
    for(int i = 1; i <= a[0]; i++){
        int zeros = a[0] - i;
        for(int j = zeros; j > 0; j--){
            a[i] *= 10;
        }
        num += a[i];
    }

    return num;
}

int isPrime(int n){
    int flag = (n == 1 ? 0 : 1);
    for(int i = 2; i <= n/2; i++){
        if(n%i == 0){
            flag = 0;
            break;
        }
    }

    return flag;
}

int getMaxFactor(int num){
    int max;

    if(isPrime(num)) max = num;
    else for(int i = num-1; i > 1; i--){
        if(num % i == 0){
            max = i;
            break;
        }
    }

    return max;
}

int main(){
    char str[100];
    scanf("%s", str);
    printf("%d", getMaxFactor(parseNumber(str)));
}
