#include <stdio.h>

int getSum(int num){
    int r = 0;
    while(num > 0){
        r += num % 10;
        num /= 10;
    }
    return r;
}

/**
 * sumA < sumB ? 1 : 0
 * if sumA == sumB return a < b ? 0 : 1
*/
int compare(int a, int b){
    if(getSum(a) < getSum(b)) return 1;
    if(getSum(a) > getSum(b)) return 0;
    return a < b ? 0 : 1;
}

void sort(int* a, int count){
    for(int i = 0; i < count-1; i++){
        for(int j = 0; j < count-1-i; j++){

            //swap
            if(compare(a[j], a[j+1])){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main(){
    int user;
    scanf("%d", &user);
    
    int num[1000];
    for(int i = 0; i < user; i++){
        scanf("%d", &num[i]);
    }

    sort(num, user);

    for(int i = 0; i < user; i++){
        printf("%d %d\n", num[i], getSum(num[i]));
    }

    return 0;
}