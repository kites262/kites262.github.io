#include <stdio.h>

double get(int index){
    return (double)index/(2*index-1) * (index%2==0 ? -1 : 1);
}

int main(){
    int user;
    scanf("%d", &user);
    
    double r = 0;
    for(int i = 1; i <= user; i++){
        r += get(i);
    }

    printf("%.3f", r);
}