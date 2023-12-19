#include <stdio.h>
#include <string.h>
#include <ctype.h>

char s[100] = "";
int len;

int isContinuious(int index1, int index2){
  //如果连续，前两个字符就决定了增减性
  int sign = s[index1+1] - s[index1];

  for(int i = index1+1; i <= index2; i++){
    if(sign != s[i] - s[i-1]){
      return 0;
    }
  }

  return 1;
}

int main(){
  scanf("%[^\n]", s);
  len = strlen(s);

  int index1, index2;

  //开始从第一个字符检查
  for(int i = 0; i < len; i++){

    //如果某字符是数字，表示找到了index1的位置
    //进入if，找index2的位置
    if(isdigit(s[i])){
      index1 = i;
      index2 = i;
      while(isdigit(s[index2])){
        index2++;
      }
      //这样出来之后，index2在数字串的最后一位的下一位上，给它修正回来
      index2--;

      //index2的位置找到后，让i移动到index2+1的位置，防止数字串的子串被识别
      i = index2+1;

      //现在，index1和index2标记了一个数字串，只需检查它，决定是否打印
      if(isContinuious(index1, index2)){
        for(int i = index1; i <= index2; i++){
          printf("%c", s[i]);
        }
        printf("\n");
      }
    }
  }
}