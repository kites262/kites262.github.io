#include <stdio.h>
#include <math.h>

int removeFirstDigit(int n){
    if(n < 10) return 0;
    int digits = (int)log10((double)n);
    return n % (int)pow(10.0, (double)digits);
}

int main(){
    int user;
    scanf("%d", &user);

    int sq = user*user;

    int flag = 0;
    while(sq > 0){
        if(sq == user){
            flag = 1;
            break;
        }
        sq = removeFirstDigit(sq);
    }

    printf("%d %d",user, flag);
}