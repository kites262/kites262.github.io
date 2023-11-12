#include <stdio.h>
/**
 * 这里有个取巧的办法，就是读入s1和s2两个字符串之后，原封不动的输出出来就行
 * 不必新建一个t来储存s1和s2的结合体
 * 
 * 不过我还是按照题目功能写了处理t的函数了
*/

int len(char *str){
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void fun(char* s1, char* s2, char* tar){
    int l1 = len(s1);
    int l2 = len(s2);
    
    for(int i = 0; i < l1; i++){
        tar[i] = s1[i];
    }

    for(int i = 0; i < l2; i++){
        tar[i+l1] = s2[i];
    }
    tar[l1+l2] = '\0';
}

int main(){
    char s1[64];
    char s2[64];
    scanf("%s%*c%s", s1, s2);

    char t[128];
    fun(s1, s2, t);

    printf("%s", t);
}