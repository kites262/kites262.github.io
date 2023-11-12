#include <stdio.h>
#define MAXDIG 4

int isT(int num){
    int user = num; //user
    int n; //Digti

    int a[MAXDIG] = {-1, -1, -1, -1};
    for(n = 0; user > 0; n++){
        a[n] = user % 10;
        user = user / 10;
    }

    int sum  = 0;
    for(int i = 0; i < n; i++){
        sum = sum + a[i]*a[i]*a[i];
    }

    int numberT;
    if(sum == num) numberT = 1;
    else numberT = 0;

    return numberT;
}

int fun(int a, int b){
    int left = a > b ? b : a;
    int right = a > b ? a : b;
    int result = 0;

    for(int i = left; i <= right; i++){
        if(isT(i)) result++;
    }

    return result;
}

int main(){
    //TEST printf("%d %d %d\n", isT(1), isT(153), isT(1000));
    int function(int, int);

    int a, b;
    scanf("%d%d", &a, &b);

    printf("%d\n", fun(a, b));
    printf("%d", function(a, b));

    return 0;
}

/**
 * 提交函数片段，在此整理
*/

int function(int a, int b){
    int left = a > b ? b : a;
    int right = a > b ? a : b;
    int result = 0;

    for(int i = left; i <= right; i++){
        int user = i; //user
        int a[4];
        int sum  = 0;
        int n;// Dig
        
        for(int ii = 0; ii < 4; ii++){
            a[ii] = 0;
        }

        for(n = 0; user > 0; n++){
            a[n] = user % 10;
            user = user / 10;
        }

        for(int j = 0; j < 4; j++){
            if(n == 2) sum = sum + a[j]*a[j];
            if(n == 3) sum = sum + a[j]*a[j]*a[j];
            if(n == 4) sum = sum + a[j]*a[j]*a[j]*a[j];
        }

        if(sum == i) result++;
    }

    return result;
}