/*
题目3 计算球体重量
	问题描述
	已知铁的比重是7.86，金的比重是19.3。写一个程序，分别计算出给定直径的铁球与金球的质量，假定PI=3.1415926。
	
	输入说明
	输入两个整数，分别表示铁球与金球的直径（单位为毫米）
	
	输出说明
	输出两个浮点数，分别表示铁球与金球的质量（单位为克），小数点后保留3位小数，两个浮点数之间用空格分隔
	
	输入样例
	100  100
	输出样例
	4115.486  10105.456
*/
#include <stdio.h>

#define PI 3.1415926
#define IRON 7.86
#define GOLD 19.3

double weight(double d, double density){
	d = d / 10;
	return (d*d*d*PI*density)/6.0;
}

int main(){
	int i, g;

	scanf("%d  %d", &i, &g);
	printf("%.3f  %.3f", weight(i, IRON), weight(g, GOLD));

	return 0;
}