#include <stdio.h>
void printFactorial(int n)
{   int a[1000]={0};
    int c,s;
    int i,j;
    if (n>1000||n<0)
    printf("Invalid input");

    if(n>=0&&n<=1000)
    {a[0] = 1;
        for (i = 1;i <= n; i++) 
        {
            c = 0;
            for (j = 0;j < 1000; j++) 
            {
                s = a[j]*i+c;
                a[j] = s % 10;
                c = s / 10;
            }
        }
        j = 1000;
        while (j) 
        {
            if (a[j]) break;
            j--;
        }
        for (i = j; i >= 0; i--) printf("%d",a[i]);
    }
}
int main()
{   int n;
    
    scanf("%d", &n);
    printFactorial(n);

    return 0;
}
