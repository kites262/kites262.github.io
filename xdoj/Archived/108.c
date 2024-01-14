#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPrime(int n){
    if(n == 1) return 0;
    for(int i = 2; i <= n/2; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int getMaxFactor(int n){
    if(isPrime(n)) return n;

    for(int i = n - 1; i > 1; i--){
        if(n % i == 0){
            return i;
        }
    }
    return 1;
}

int main(){
    char str[100];
    scanf("%[^\n]", str);
    int lenS = strlen(str);

    char result[100];
    int lenR = 0;
    for(int i = 0; i < lenS; i++){
        if(isdigit(str[i])){
            result[lenR++] = str[i];
        }
    }
    result[lenR] = '\0';

    int num = 0;
    for(int i = 0; i < lenR; i++){
        num = num * 10 + (result[i] - '0');
    }

    if(getMaxFactor(num) == 1) printf("0");
    else printf("%d", getMaxFactor(num));
}