/*
问题描述	
设直角三角形两条直角边长度为a和b，斜边长度为c，则a，b，c满足a^2+b^2=c^2，
输入三个整数a，b，c，判断对应的三角形是不是直角三角形，不是则输出“no”，是则输出其面积的2倍。

输入说明	
数据由同一行的三个整数a，b，c构成，整数之间以空格分隔

输出说明	
如果输入的三个整数可以构成一个直角三角形，则输出一个整数表示该三角形面积的2倍；否则输出“no”
*/
#include <stdio.h>

int main(){
    int a, b, c;
    int index;
    int area = 0;

    scanf("%d %d %d", &a, &b, &c);

    if(a*a + b*b == c*c){
        area = a*b;
    }
    if(a*a + c*c == b*b){
        area = a*c;
    }
    if(b*b + c*c == a*a){
        area = b*c;
    }

    if(area) printf("%d", area);
    else printf("no");
}