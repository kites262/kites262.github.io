#include <stdio.h>

void printFactorial(int n);

int main()
{
    int n;
    
    //scanf("%d", &n);
    n=50;
    printFactorial(n);

    return 0;
}

void printFactorial(int n){
    int number[3000] = {0, 1, };
    int digits = 1;
    for(int factor = 2; factor <= n; factor++){
        int temp;

        //每一位乘以因数
        for(int index = 1; index <= digits; index++){
            number[index] *= factor;
        }

        //执行进位操作
        int hasNext = 1;
        for(int index = 1; hasNext; index++){
            if(number[index] >= 10){
                temp = number[index] / 10;
                number[index] = number[index] % 10;
                number[index+1] = number[index+1] + temp;
                if(index == digits) digits++;
            }
            if(index == digits) hasNext = 0;
        }
/*
        //操作刚才溢出的数据
        hasNext = 1;
        for(int index = digits; hasNext; index++){
            if(number[index] < 10) hasNext = 0;
            else{
                temp = number[index] / 10;
                number[index] = number[index] % 10;
                number[index+1] = number[index+1] + temp;
                digits++;
            }
        }
        */
    }

    for(int i = digits; i > 0; i--){
        printf("%d", number[i]);
    }
}

void MY_printFactorial(int n){
    if(n <= 1000){
        long long int result = 1;
        for(int i = 1; i <= n; i++){
            result = result * i;
        }
        printf("%lld", result);
    }else{
        printf("Invalid input\n");
    }
}

void OTHER_printFactorial(int n) {
	int a[2599] = {0, 1};
	int weishu = 1;
	for (int i = 2; i <= n; i++) {
		int up = 0;
		int temp = 0;
		for (int j = 1; j <= weishu || up != 0; j++) {
			temp = a[j] * i + up;
			up = temp / 10;	
			a[j] = temp % 10;
			weishu = (j > weishu ? j : weishu);
		}
	}
	for (int i = weishu; i >= 1; i--) {
		printf("%d", a[i]);
	}
}