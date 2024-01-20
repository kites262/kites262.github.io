#include <stdio.h>
#include <string.h>

int main(){
    char ISBN[10];


    scanf("%c-%c%c%c-%c%c%c%c%c-%c",
        &ISBN[0], &ISBN[1], &ISBN[2], &ISBN[3], &ISBN[4],
        &ISBN[5], &ISBN[6], &ISBN[7], &ISBN[8], &ISBN[9]);

    int sum = 0;
    for(int i = 0; i < 9; i++){
        sum += (i + 1) * (ISBN[i] - '0');
    }
    
    char sign;
    int check = sum%11;
    if(check == 10){
        sign = 'X';
    }else{
        sign = check + '0';
    }

    if(sign == ISBN[9]){
        printf("Right");
    }else{
        printf("%c-%c%c%c-%c%c%c%c%c-%c",
        ISBN[0], ISBN[1], ISBN[2], ISBN[3], ISBN[4],
        ISBN[5], ISBN[6], ISBN[7], ISBN[8], sign);
    }
}