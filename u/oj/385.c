#include <stdio.h>

int isPassed(int);

int main(){
    int map[3] = {0};

    //总报出的数字
    int totalCount;
    scanf("%d", &totalCount);

    int count = 1;
    for(int num = 1; count <= totalCount; num++){
        //无论报或不报，数字都会落到同学头上，由此根据当前num判断这个数字落到了谁头上
        int stu = num % 3;
        if(isPassed(num)){//如果该数字不报
            map[stu]++;//给同学记录一次没报
        }else{//如果数字报出
            count++;//已报出的数字加一
        }
    }
    
    //根据stu=num%3，stu1表示第一位同学，stu2表示第二位，stu0表示第三位
    printf("%d %d %d", map[1], map[2], map[0]);
}

int isPassed(int num){
    if(num % 7 == 0) return 1;
    while(num > 0){
        if(num % 10 == 7) return 1;
        num = num / 10;
    }
}