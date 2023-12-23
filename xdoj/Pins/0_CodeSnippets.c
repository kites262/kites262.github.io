/**
 * That Code Snippets was written by flew_kites
 * snippets means several lines of code which could be applied to many programs
 * I listed some snippets, for copying from here and paste them to improve efficiency
 */

/*
                   _ooOoo_
                  o8888888o
                  88" . "88
                  (| -_- |)
                  O\  =  /O
               ____/`---'\____
             .'  \\|     |//  `.
            /  \\|||  :  |||//  \
           /  _||||| -:- |||||-  \
           |   | \\\  -  /// |   |
           | \_|  ''\---/''  |   |
           \  .-\__  `-`  ___/-. /
         ___`. .'  /--.--\  `. . __
      ."" '<  `.___\_<|>_/___.'  >'"".
     | | :  `- \`.;`\ _ /`;.`/ - ` : | |
     \  \ `-.   \_ __\ /__ _/   .-` /  /
======`-.____`-.___\_____/___.-`____.-'======
                   `=---='
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
*/

/**
 * Get the substring from a certain another
*/
void subString(const char *src, int start, int end, char *result) {
    int length = strlen(src);

    int j = 0;
    for (int i = start; i <= end; i++) {
        result[j++] = src[i];
    }
    result[j] = '\0';
}

/**
 * Sort increasingly
 * a: int array
 * count: count
*/
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

/**
 * Get the sum of every digits of 'n' into tar
*/
int getSum(int tar[], int n){
    int r = 0;
    for(int i = 0; i < n; i++){
        r += tar[i];
    }
    return r;
}

/**
 * accept a valid number
 * return 1 if it is a prime number
 * or return 0 if not
*/
int isPrime(int n){
    int flag = (n == 1 ? 0 : 1);
    for(int i = 2; i <= n/2; i++){
        if(n%i == 0){
            flag = 0;
            break;
        }
    }

    return flag;
}

/**
 * parse factors from num
 * store result to tar[]
 * and return the number of factors
*/
int parseFactor(int num, int tar[]){
    int index = 0;
    for(int i = 1; i < num; i++){
        if(num % i == 0){
            tar[index] = i;
            index++;
        }
    }
    return index;
}

/**
 * parse the number from a string
 * return that number
*/
int parseNumber(char* str){
    int a[10];
    a[0] = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(
            str[i] >= '0' && str[i] <= '9'
        ){
            a[a[0]+1] = str[i] - 48;
            a[0]++;
        }
    }

    int num = 0;
    for(int i = 1; i <= a[0]; i++){
        int zeros = a[0] - i;
        for(int j = zeros; j > 0; j--){
            a[i] *= 10;
        }
        num += a[i];
    }

    return num;
}

/**
 * Swap a & b
*/
void swap(int* a, int* b){

    //Do not remove this unless you know what will happen
    if(*a == *b) return;
    
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}