#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    int b = a*a;

    int countOddNumber=0;
    int countEvenNumber=0;
    int countSpecialNumber=0;

    for(int i = a; i <= b; i++){
        if(i%2)countOddNumber++;
        else countEvenNumber++;

        if(i%4==0 && i%3!=0) countSpecialNumber++;
    }

    int s1 = countOddNumber+countEvenNumber;
    int s2 = countEvenNumber+countSpecialNumber;
    int s3 = countSpecialNumber+countOddNumber;

    int max = (s1 > s2 ? s1 : s2) > s3 ? (s1 > s2 ? s1 : s2) : s3;

    printf("%d %d %d", countOddNumber, countEvenNumber, countSpecialNumber);
    printf("\n%d", max);
}