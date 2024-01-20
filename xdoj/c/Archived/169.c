/*
问题描述
操作系统中在查找文件时会按照某个规则对文件排序，例如下图为按照文件修改日期逆序排
序（最后修改的排在最前面）。
但目前操作系统不支持同时按照多个字段进行排序。现在请你写一个程序能够同时按照修改
日期和文件大小对文件进行排序，排序规则为：
1. 日期优先，最后修改的排在前面
2. 当修改日期相同时，大的文件排在前面。
输入说明
第一行为一个数字 n，n 表示共有 n 个待排序的文件， 1≤ n≤ 100。
接下来是 n 行，每行包含一个文件的修改日期和文件大小，这两个字段之间用空格分隔。
文件修改日期包含年、月、日，表示年、月、日的整数之间用“/”分隔，格式为“年/月/
日”。年份的数值在 1960-2018 之间；月份的数值在 1-12 之间；日的数值在 1-31 之间。
文件大小是一个不超过 100000000 的整数。
输入数据中没有完全相同的日期和文件大小。
输出说明
将输入数据按题目描述的规则排序后输出，每行输出一个文件的修改日期和文件大小。
输入样例
8
2018/1/8 1024 
2012/10/31 256 
2014/10/29 300 
2012/10/31 457 
2014/10/27 512 
2011/10/27 95 
2014/11/3 1102 
2017/11/24 1535
输出样例
2018/1/8 1024
2017/11/24 1535
2014/11/3 1102
2014/10/29 300
2014/10/27 512
2012/10/31 457
2012/10/31 256
2011/10/27 9
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int year, month, day, size;
} File;

int compare(const void *a, const void *b) {
    File *file1 = (File *)a;
    File *file2 = (File *)b;
    if (file1->year != file2->year) {
        return file2->year - file1->year;
    }
    if (file1->month != file2->month) {
        return file2->month - file1->month;
    }
    if (file1->day != file2->day) {
        return file2->day - file1->day;
    }
    return file2->size - file1->size;
}

int main() {
    int n;
    scanf("%d", &n);
    File files[n];
    for (int i = 0; i < n; i++) {
        scanf("%d/%d/%d %d", &files[i].year, &files[i].month, &files[i].day, &files[i].size);
    }
    qsort(files, n, sizeof(File), compare);
    for (int i = 0; i < n; i++) {
        printf("%d/%d/%d %d\n", files[i].year, files[i].month, files[i].day, files[i].size);
    }
    return 0;
}