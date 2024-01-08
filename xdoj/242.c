#include <stdio.h>

typedef struct structStudent{
    int id;
    char name[20];
    int score[3];
    double average;
}Student;

double stuAverage(Student stu){
    double sum = 0;
    for(int i = 0; i < 3; i++){
        sum += stu.score[i];
    }
    return sum / 3;
}

void sortStudents(Student stu[], int count){
    Student temp;
    for(int i = 0; i < count; i++){
        for(int j = i + 1; j < count; j++){
            if(stu[i].average < stu[j].average){
                temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            }else if(stu[i].average == stu[j].average){
                if(stu[i].id > stu[j].id){
                    temp = stu[i];
                    stu[i] = stu[j];
                    stu[j] = temp;
                }
            }
        }
    }
}

int main(){
    Student stu[100];
    int count;

    scanf("%d", &count);
    for(int i = 0; i < count; i++){
        scanf("%d %s %d %d %d", &stu[i].id, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
        stu[i].average = stuAverage(stu[i]);
    }

    sortStudents(stu, count);

    for(int i = 0; i < count; i++){
        printf("%d %s %.1lf\n", stu[i].id, stu[i].name, stu[i].average);
    }
}