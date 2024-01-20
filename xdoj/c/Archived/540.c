#include <stdio.h>
#include <string.h>

void reverse(char*, int, int);

int main(){
    char user[10000] = "";
    int k;
    scanf("%s%d", user, &k);

    int len = strlen(user);
    //总共多少个组2k
    int groups = len/(2*k);
    //还剩余多少个字符不足2k
    int remains = len - groups * 2*k;

    //先反转所有的2k组合
    for(int i = 0; i < groups; i++){
        int index1 = i * 2 * k;
        int index2 = index1 + k - 1;
        reverse(user, index1, index2);
    }

    //处理剩余的不足2k的部分
    if(remains != 0){
        if(remains < k){            
            reverse(user, len-remains, len-1);
        }else{
            reverse(user, len-remains, len-remains+k-1);
        }
    }

    puts(user);
}

/**
 * 反转字符数组中下标位于[start, end]间的所有字符
*/
void reverse(char* str, int start, int end){
    int len = strlen(str);

    if(start < end){
        for(int i = 0; i <= (end-start-1)/2; i++){
            //交换对称两个字符，为了少写几次下标用了指针，只要能交换就行
            char* p1 = &str[start+i];
            char* p2 = &str[end-i];
            char temp = *p1;
            *p1 = *p2;
            *p2 = temp;
        }
    }
}