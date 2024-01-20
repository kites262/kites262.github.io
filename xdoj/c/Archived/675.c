#include <stdio.h>

#define MAXCOUNT 30

int isTri(int a, int b, int c){
    if(a+b<=c || a+c<=b || b+c<=a) return 0;
    return 1;
}

int main(){
    int count;
    int a[MAXCOUNT];
    scanf("%d", &count);
    for(int i = 0; i < count; i++) scanf("%d", &a[i]);
    
    int flag = 0;
    for(int i = 2; i < count; i++){
        if(isTri(a[i-2], a[i-1], a[i])) flag++;
    }

    printf("%d", flag);
}