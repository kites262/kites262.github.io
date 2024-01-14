/*
问题描述	
对于输入的字符串（只包含字母和数字），将其中的连续数字拼接成整数，然后将这些整数按从大到小顺序输出。
例如字符串“abc123d5e7f22k9”中共有5个数字123，5，7，22，9，因此应输出123 22 9 7 5。

输入说明	
输入为一个字符串，字符串长度不超过100，其中最长的连续数字不超过10个，字符串中至少包含1个数字。

输出说明	
对于输入的字符串，在一行上输出排序结果，整数间以一个空格间隔。

输入样例	
abc123d5e7f22k9

输出样例	
123 22 9 7 5
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int compare(const void *a, const void *b) {
    return *(int*)b - *(int*)a;
}

int main() {
    char str[101];
    int nums[50] = {0}, numCount = 0;
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++) {
        if (isdigit(str[i])) {
            int num = 0;
            while (isdigit(str[i])) {
                num = num * 10 + (str[i] - '0');
                i++;
            }
            nums[numCount++] = num;
        }
    }
    qsort(nums, numCount, sizeof(int), compare);
    for (int i = 0; i < numCount; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}