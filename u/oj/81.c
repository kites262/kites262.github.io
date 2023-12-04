#include <stdio.h>
#include <ctype.h>//不想手搓判断字母的函数了，就用库文件吧！
#include <string.h>

void toLowerStr(char *str){
    for(int i = 0; str[i] != '\0'; i++) str[i] = tolower(str[i]);
}

int isContain(char str[], char tar[]){
    int lenStr = strlen(str);
    int lenTar = strlen(tar);

    for (int i = 0; i <= lenStr - lenTar; i++) {
        int j;
        for (j = 0; j < lenTar; ++j) {
            if (str[i + j] != tar[j]) {
                break;
            }
        }
        if (j == lenTar) {
            return 1; // 找到了匹配的子字符串
        }
    }
    return 0; // 没有找到匹配的子字符串
}

int main(){
/*     char test[10] = "aHellow!";
    char testTar[10] = "Hello";
    printf("%d", isContain(test, testTar)); */

    char tar[100] = "";
    int mode, ln;
    char user[10][100] = {""};
    char temp_user[10][100] = {""};
    char temp_tar[100] = "";

    scanf("%s", tar);
    scanf("%d\n%d", &mode, &ln);
    for(int i = 0; i < ln; i++){
        scanf("%s", user[i]);
    }

    //录入缓存
    for(int y = 0; y < 10; y++){
        for(int x = 0; x < 100; x++){
            temp_user[y][x] = user[y][x];
        }
    }
    for(int i = 0; i < 100; i++) temp_tar[i] = tar[i];

    if(mode == 0){
        for(int i = 0; i < ln; i++){
            toLowerStr(temp_user[i]);
        }
        toLowerStr(temp_tar);
    }

    printf("\n");

    for(int i = 0; i < ln; i++){
        if(isContain(temp_user[i], temp_tar)) printf("%s\n", user[i]);
    }
}