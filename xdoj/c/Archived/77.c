#include <stdio.h>

int calc(int n1, int n2, char op){
    if(op == '+') return n1+n2;
    if(op == '-') return n1-n2;
    if(op == '*') return n1*n2;
    if(op == '/') return n1/n2;
    if(op == '%') return n1%n2;
}

int main(){
    int n1 = 0, n2 = 0;
    char op;

    char user[20] = "";
    scanf("%[^\n]", user);

    int len = 0, index_end;
    while(user[len] != '\0') len++;
    index_end = len-1;

    //穷举算法！
    int index_space_1 = 0, index_space_2 = 0;
    int index_op = 0;
    for(int i = 0; i < len; i++){
         if(index_space_1 == 0 && user[i] == ' ') index_space_1 = i;
         else if(index_space_2 == 0 && user[i] == ' ') index_space_2 = i;
         
         if(user[i] != ' ' && (user[i] < '0' || user[i] > '9')){
            op = user[i];
            index_op = i;
         }
    }
    int index_n1_start, index_n1_end;
    int index_n2_start, index_n2_end;

    if(index_op < index_space_1){
        index_n1_start = index_space_1+1;
        index_n1_end = index_space_2-1;
        index_n2_start = index_space_2+1;
        index_n2_end = index_end;
    }else if(index_op > index_space_2){
        index_n1_start = 0;
        index_n1_end = index_space_1-1;
        index_n2_start = index_space_1+1;
        index_n2_end = index_space_2-1;
    }else{
        index_n1_start = 0;
        index_n1_end = index_space_1-1;
        index_n2_start = index_space_2+1;
        index_n2_end = index_end;
    }

    for(int i = index_n1_start; i <= index_n1_end; i++){
        n1 = n1*10 + user[i] - 48;
    }
    for(int i = index_n2_start; i <= index_n2_end; i++){
        n2 = n2*10 + user[i] - 48;
    }

/*     if(s1 == 0) result = calc(b,c,a);
    else if(s2 == 0) result = calc(a,c,b);
    else if(s3 == 0) result = calc(a,b,c);
    else printf("Internal Error!\n"); */

    printf("%d", calc(n1, n2, op));
}