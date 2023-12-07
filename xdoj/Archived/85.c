#include <stdio.h>
#include <string.h>

void toLowerStr(char*);
double getSimilarityRate(char*, char*);

int main(){
    char s1[100];
    char s2[100];
    scanf("%s %s", s1, s2);

    toLowerStr(s1);
    toLowerStr(s2);

    double rate = getSimilarityRate(s1, s2);

    printf("%.3f", rate);
}

/**
 * 将str中的所有大写字母转换为小写
*/
void toLowerStr(char* str){
    for(int i = 0; str[i] != '\0'; i++){
       if(str[i] >= 'A' && str[i] <= 'Z'){
        //把作为大写字母的str[i]变成小写；
        str[i] = str[i] + 32;
       }
    }
}

/**
 * 计算相似度
 * 步骤：先求出相似字符个数，再按题意计算相似度
 *
 * 求相似字符个数的思路：
 * - 遍历s1，每次从s1取一个字符与s2相比，若在s2中找到了相同的字符，进入比较模式
 * - 比较模式：发现s1[i]这个字符在s2中能找到，且s1[i] == s2[j]，则
 * - - 怀疑s1[i]及其之后是两个字符串的共有字符串
 * - - 从s1[i]入手，比较s1[i+1]和s2[j+1]，若相等，给计数器temp++，进一步比较下一位
 * - - 直到发现不相等，此时记录的temp即为本轮比较模式得到的相同字符串长度
 * - - 注意：考虑比较字符串的时候不止一次进入比较模式，则退出比较模式之前，需要取较大值
*/
double getSimilarityRate(char *s1, char* s2){
    int sharedChars = 0;
    for(int i = 0; i < strlen(s1); i++){
        for(int j = 0; j < strlen(s2); j++){

            //发现有相同字母，进入比较模式
            if(s1[i] == s2[j]){

                //先初始化变量
                int temp = 0;
                int i1 = i;
                int i2 = j;

                //循环，在不超过各字符串长度的前提下，依次往后比较相同字母
                while(i1 < strlen(s1) && i2 < strlen(s2)){
                    if(s1[i1] == s2[i2]){
                      temp++;
                      i1++;
                      i2++;  
                    }else{
                        break;
                    }
                }

                //取较大值
                if(temp > sharedChars) sharedChars = temp;
            }
        }
    }

    return 2.0*sharedChars/(strlen(s1) + strlen(s2));
}
