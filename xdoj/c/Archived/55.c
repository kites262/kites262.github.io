#include <stdio.h>

#define A1 2
#define A2 3
#define B1 1
#define B2 2

int getA(int index){
    if(index == 1) return A1;
    else if(index == 2) return A2;
    else return getA(index-1) + getA(index-2);
}

int getB(int index){
    if(index == 1) return B1;
    else if(index == 2) return B2;
    else return getB(index-1) + getB(index-2);
}

int main(){
    int user;
    scanf("%d", &user);

    double r = 0;
    for(int i = 1; i <= user; i++){
//        printf("GET: %d %d\n", getA(i), getB(i));
        r += (double)getA(i)/getB(i);
    }

    printf("%.2f", r);
}