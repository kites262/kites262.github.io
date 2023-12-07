#include <stdio.h>
#define MAXROW 100
#define MAXCOL 100

int main(){
    int row, col;
    scanf("%d%d", &row, &col);

    int arr[MAXROW][MAXCOL];
    for(int y = 0; y < row; y++){
        for(int x = 0; x < col; x++){
            scanf("%d", &arr[y][x]);
        }
    }

    int start, end; 
    int len = 0;
    for(int y = 0; y < row; y++){
        start = -1;
        end = -1;
        for(int x = 0; x < col; x++){
            //检查到x处为1的时候，进入计数
            if(arr[y][x] == 1){
                //计数初始化
                int s = x;
                int e = x;
                x++;
                //开始计数
                while(arr[y][x] == 1){
                    e++;
                    x++;
                }
                //本次长度与上一次比较
                if(e - s >= end - start){
                    start = s;
                    end = e;
                }
            }
        }
        printf("%d %d\n", start, end);
    }
}