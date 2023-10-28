/*
题目描述：输入三角形的三边长，计算三角形的面积，结果保留两位小数。
          边长分别为a,b,c，三角形的面积公式为s=sqrt(p(p-a)(p-b)(p-c)),其中p=(a+b+c)/2。

输入格式：共一行，输入三个数，保留两位小数，用空格隔开各个数据。

输出格式：共一行，输出面积，结果保留两位小数。

示例：
输入：3.00 4.00 5.00
输出：6.00
*/
#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c;
    scanf("%f%f%f", &a, &b, &c);
    float p = (a+b+c)*0.5;
    printf("%.2f", sqrt(p*(p-a)*(p-b)*(p-c)));
}