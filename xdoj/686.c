#include <stdio.h>

int getSum(int num){
    int sum = 0;
    while(num > 0){
        sum += num%10;
        num /= 10;
    }
    return sum;
}

int main(){
    int count;
    int a[20];
    scanf("%d", &count);
    for(int i = 0; i < count; i++){
        scanf("%d", &a[i]);
    }

    int sum = 0;
    for(int i = 0; i < count; i++){
        sum += getSum(a[i]);
    }

    int flag = sum%10;
    
    printf("%d", flag);
}