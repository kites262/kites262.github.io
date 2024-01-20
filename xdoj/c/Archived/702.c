#include <stdio.h>
#define MAXCOUNT 1000

int main(){
    int count;
    int a[MAXCOUNT];
    scanf("%d", &count);
    for(int i = 0; i < count; i++) scanf("%d", &a[i]);
    
    int maxCount = 0;
    int maxCountNum;

    //Append -1 to 'a' to revise the logic
    a[count++] = -1;

    int tempCount = 1;
    int tempCountNum = a[0];
    for(int i = 1; i < count; i++){
        if(a[i] == tempCountNum) tempCount++;
        else{
            if(tempCount > maxCount){
                maxCount = tempCount;
                maxCountNum = tempCountNum;
            }
            tempCount = 1;
            tempCountNum = a[i];
        }
    }

    printf("%d", maxCount);
}