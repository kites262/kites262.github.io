#include <stdio.h>

int main(){
    int user;
    scanf("%d", &user);

    int result;
    if(user < 1){
        result = user;
    }else if(user < 10){
        result = 2*user - 1;
    }else{
        //user>=10
        result = 3*user - 11;
    }

    printf("%d", result);
}