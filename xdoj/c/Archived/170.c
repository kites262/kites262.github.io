//AI

/*
问题描述	
考研初试成绩公布后需要对m个学生的成绩进行排序，筛选出可以进入复试的前n名学生。
排序规则为首先按照总分排序，总分相同则按英语单科成绩排序，总分和英语成绩也相同时考号小者排在前面。
现给出这m个学生的考研初试成绩，请筛选出可以进入复试的n名学生并按照排名从高到低的顺序依次输出。

输入说明	
输入为m+1行，第一行为两个整数m和n，分别表示总人数和可以进入复试人数，m和n之间用空格分隔，0<n<m<200。
接下来为m行数据，每行包括三项信息，分别表示一个学生的考号（长度不超过20的字符串）、总成绩（小于500的整数）和英语单科成绩（小于100的整数），这三项之间用空格分隔。

输出说明	
按排名从高到低的顺序输出进入复试的这n名学生的信息。

输入样例	
5 3
XD20160001 330 65
XD20160002 330 70
XD20160003 340 60
XD20160004 310 80
XD20160005 360 75

输出样例	
XD20160005 360 75
XD20160003 340 60
XD20160002 330 70

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char id[21];
    int total_score;
    int english_score;
} Student;

int compare(const void *a, const void *b) {
    Student *student_a = (Student *)a;
    Student *student_b = (Student *)b;
    if (student_b->total_score != student_a->total_score)
        return student_b->total_score - student_a->total_score;
    if (student_b->english_score != student_a->english_score)
        return student_b->english_score - student_a->english_score;
    return strcmp(student_a->id, student_b->id);
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    Student students[m];
    for (int i = 0; i < m; i++)
        scanf("%s %d %d", students[i].id, &students[i].total_score, &students[i].english_score);
    qsort(students, m, sizeof(Student), compare);
    for (int i = 0; i < n; i++)
        printf("%s %d %d\n", students[i].id, students[i].total_score, students[i].english_score);
    return 0;
}
