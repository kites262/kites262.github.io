#include <stdio.h>

int main(){
    int count;
    int nums[30];
    scanf("%d", &count);
    for(int i = 0; i < count; i++){
        scanf("%d", &nums[i]);
    }

    int average = 0;
    for(int i = 0; i < count; i++){
        average += nums[i];
    }
    average /= count;

    int s = 0;
    for(int i = 0; i < count; i++){
        s += (nums[i] - average)*(nums[i] - average);
    }
    s /= count;

    printf("%d", s);
}