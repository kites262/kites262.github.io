#include <stdio.h>

int fib(int index){
    if(index == 0) return 7;
    else if(index == 1) return 11;
    else return fib(index-1) + fib(index-2);
}

int main(){
    int user;
    scanf("%d", &user);

    int r = fib(user);
    printf("%d", r);
}