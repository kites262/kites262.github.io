#include <stdio.h>

/**
 * mode:
 * -1 - Left
 *  1 - Right
 *  0 - L&R
*/
int check(char ch, int mode){
    if(mode == 0){
        if(ch == '[' || ch == '(' || ch == '{') return 1;
        if(ch == ']' || ch == ')' || ch == '}') return 1;
    }
    if(mode == -1){
        if(ch == '[' || ch == '(' || ch == '{') return 1;
    }
    if(mode == 1){
        if(ch == ']' || ch == ')' || ch == '}') return 1;
    }
    return 0;
}

int isCouple(char a, char b){
    if(a == '[' && b == ']') return 1;
    if(a == '(' && b == ')') return 1;
    if(a == '{' && b == '}') return 1;
    return 0;
}

int main(){
    char user[50] = "";
    scanf("%[^\n]", user);

    int len = 0;
    while(user[len] != '\0') len++;

    int isLegal = 1;
    char list[50] = "";
    int index = -1;
    //用队列的方法，先遍历，储存或删去队列末项
    for(int i = 0; i < len; i++){
        if(check(user[i], -1)){
            index++;
            list[index] = user[i];
        }else if(check(user[i], 1) && isCouple(list[index], user[i])){
            list[index] = '\0';
            index--;
        }
    }

    printf("%s", index == -1 ? "yes" : "no");
}