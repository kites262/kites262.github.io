#include <stdio.h>

void printFactorial(int n);

int main()
{
    int n;
    
    scanf("%d", &n);
    printFactorial(n);

    return 0;
}

void printFactorial(int n){
    if(n <= 1000){
        long long int result = 1;
        for(int i = 1; i <= n; i++){
            result = result * i;
        }
        printf("%lld", result);
    }else{
        printf("Invalid input\n");
    }
}