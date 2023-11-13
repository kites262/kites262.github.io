#include <stdio.h>
#define MAXCOUNT 1000

void sort(int* a, int count){
    for(int i = 0; i < count-1; i++){
        for(int j = 0; j < count-1-i; j++){

            //compare & swap
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main(){
    int user;
    scanf("%d", &user);
    
    int a[MAXCOUNT];
    for(int i = 0; i < user; i++) scanf("%d", &a[i]);

    sort(a, user);

    int nums[MAXCOUNT];
    int times[MAXCOUNT];
    int index = 0;

    //a special method
    //追加-1到数组a尾部，弥补下方求次数并排序算法中，无法考虑最后一位的问题
    a[user] = -1;
    user++;

    int count = 1;
    for(int i = 1; i < user; i++){
        if(a[i] == a[i-1]){
            count++;
        }else{
            nums[index] = a[i-1];
            times[index] = count;
            index++;
            count = 1;
        }
    }

    //rewirtre from sort，revised comapre & swap
    for(int i = 0; i < index-1; i++){
        for(int j = 0; j < index-1-i; j++){

            //compare & swap
            if(
                (times[j] < times[j+1])
                ||(times[j] == times[j+1] && nums[j] > nums[j+1])
            ){
                int temp = times[j];
                times[j] = times[j+1];
                times[j+1] = temp;

                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < index; i++){
        printf("%d %d\n", nums[i], times[i]);
    }
}