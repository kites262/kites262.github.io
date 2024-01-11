#include <stdio.h>
#define MAXCOUNT 100

int get(int a, int b){
    for(int i = a; i > 0; i++){
        if(i >= b && i%a==0 && i%b==0) return i;
    }
}

int main(){
    int count;
    int a[MAXCOUNT];
    scanf("%d", &count);
    for(int i = 0; i < count; i++) scanf("%d", &a[i]);
    
    int sum = 0;
    for(int i = 1; i < count; i++){
        sum += get(a[i-1], a[i]);
    }

    printf("%d", sum);
}