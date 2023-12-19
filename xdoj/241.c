#include <stdio.h>
#include <string.h>
/**
 * 思路
 * 读入字符串hex，从尾部取值并乘以此处的基数，最后累加
 * 基数：
 * - 即A进制向十进制转换的时候，A的某次幂
 * - 如十六进制到十进制，基数就是16^n
 * - 类比二进制到十进制
*/

/**
 * HEX to DEC
*/
int toDec(char hex){
    int dec;
    switch (hex)
    {
    case 'F':
    case 'f':
        dec = 15;
        break;
    case 'E':
    case 'e':
        dec = 14;
        break;
    case 'D':
    case 'd':
        dec = 13;
        break;
    case 'C':
    case 'c':
        dec = 12;
        break;
    case 'B':
    case 'b':
        dec = 11;
        break;
    case 'A':
    case 'a':
        dec = 10;
        break;
    default:
        dec = hex - '0';
        break;
    }
    return dec;
}

int powInt(int base, int a){
    int r = 1;
    for(int i = 0; i < a; i++){
        r *= base;
    }
    return r;
}

int main(){
    char hex[64] = "";
    scanf("%s", hex);
    int hexLen = strlen(hex);

    int dec = 0;
    for(int i = 0; i < hexLen; i++){
        int base = powInt(16, i);
        dec += base * toDec(hex[hexLen-1-i]);
    }

    printf("%d", dec);
}