
void printFactorial(int n) {
    if(n <= 1000){
        char result[10000];
        memset(result, '0', sizeof(result));
        result[0] = '1';
        
        for (int i = 2; i <= n; i++) {
            int carry = 0;
            int len = strlen(result);
            
            for (int i = 0; i < len; i++) {
                int product = (result[i] - '0') * i + carry;
                result[i] = (product % 10) + '0';
                carry = product / 10;
            }
        
            while (carry) {
                result[len] = (carry % 10) + '0';
                carry /= 10;
                len++;
            }
        }
        
        // 打印结果
        int len = strlen(result);
        for (int i = len - 1; i >= 0; i--) {
            printf("%c", result[i]);
        }
    }else{
        printf("Invalid input\n");
    }
    
}

void printFactorial(int n) {
    // LET ME TEST FUCK_
    if(n <= 1000) while (1)
    {
        1;
    }

}