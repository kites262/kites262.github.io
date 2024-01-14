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
 * ! XDOJ prefer scanf("%[^\n]", str) to fgets(str, MAXLEN, stdin)
 * 
 * ! Localy fgets() will read '\n' into str
 * ! But XDOJ will not
 * 
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
 * Sort 2
 * a: int array
 * count: count
*/
void sort2(int* a, int count){
    for(int i = 0; i < count; i++){
        for(int j = i+1; j < count; j++){
            //compare & swap
            if(a[j] > a[i]){
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
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
    if(n == 1) return 0;
    for(int i = 2; i <= n/2; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
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
    int a[100];
    int n = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            a[n++] = str[i] - '0';
        }
    }

    int num = 0;
    for(int i = 1; i < n; i++){
        num = num * 10 + a[i];
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