#include <stdio.h>
#include <math.h>

int isPrime(int n){
    if(n == 1) return 0;
    
    for(int i = 2; i <= n/2; i++){
        if(n%i == 0){
            return 0;
        }
    }

    return 1;
}

int main(){
    int n;
    scanf("%d", &n);

    int m = (int)pow(2.0, (double)n)-1;

    int flag;
    if(isPrime(m)){
        flag = 1;
    }else{
        flag = 0;
    }

    printf("%d %d", m, flag);
}