#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *compress(char *src);
int main()
{
	char src[100];
	scanf("%s",src);

	char *ps = compress(src);
	
	puts(ps);
	return 0;
}

char *compress(char *src){
    char alphas[100] = "";
    int counts[100] = {0,};

    int ArrayCount = 0;

    int tempCount = 0;
    char tempChar = src[0];
    for(int i = 0; i < strlen(src)+1; i++){
        if(tempChar == src[i]){
            tempCount++;
        }else{
            alphas[ArrayCount] = tempChar;
            counts[ArrayCount] = tempCount;
            ArrayCount++;

            tempChar = src[i];
            tempCount = 1;
        }
    }

    char *result = (char *)malloc(sizeof(char) * 100);
    int resultCount = 0;
    for(int i = 0; i < ArrayCount; i++){
        result[resultCount++] = alphas[i];
        if(counts[i] > 9){
            result[resultCount++] = counts[i] / 10 + '0';
            result[resultCount++] = counts[i] % 10 + '0';
        }else if(counts[i] > 2){
            result[resultCount++] = counts[i] + '0';
        }else if(counts[i] == 2){
            result[resultCount++] = alphas[i];
        }
    }

    result[resultCount] = '\0';
    return result;
}