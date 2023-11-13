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

char *compress(char* s){
    int l = 0;
    while (s[l] != '\0') {
        l++;
    }

    char num[100];

    int n = 1;//repeat count
    for(int i = 1; i < l; i++){
        if(s[i] == s[i-1]){
            n++;
            num[i-1] = 0;
        }else{
            num[i-1] = n;
            n = 1;
        }
    }
}