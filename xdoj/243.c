#include <stdio.h>

typedef struct structStudent{
    char name[20];
    int score;
    int score2;
} Student;

void sortStudents(Student stu[], int count){
    Student temp;
    for(int i = 0; i < count; i++){
        for(int j = i + 1; j < count; j++){
            if(stu[i].score < stu[j].score){
                temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            }else if(stu[i].score == stu[j].score){
                if(stu[i].score2 < stu[j].score2){
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
        int score[5];
        scanf("%s %d %d %d %d %d %d",
            stu[i].name,
            &score[0], &score[1], &score[2], &score[3], &score[4],
            &stu[i].score2
        );
        stu[i].score = score[0] + score[1] + score[2] + score[3] + score[4] + stu[i].score2;
    }

    sortStudents(stu, count);

    for(int i = 0; i < count; i++){
        printf("%s %d %d\n", stu[i].name, stu[i].score, stu[i].score2);
    }
}