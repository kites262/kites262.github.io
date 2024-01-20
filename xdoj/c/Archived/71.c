#include <stdio.h>
#define MAXCOL 22
#define MAXROW 22

int map[50] = {0};
int isMapped(int n);
void addMap(int n);
int getMapCount(int);

int main(){
    extern int map[];

    int row, col;
    scanf("%d%d", &row, &col);

    int key, areas;
    scanf("%d%d", &areas, &key);

    int a[MAXCOL][MAXROW] = {0};
    for(int y = 1; y <= row; y++){
        for(int x = 1; x <= col; x++){
            scanf("%d", &a[y][x]);
        }
    }

    int keyX[] = { 0, 1, 0, -1};
    int keyY[] = {-1, 0, 1,  0};
    for(int y = 1; y <= row; y++){
        for(int x = 1; x <= col; x++){
            if(a[y][x] == key){                
                for(int i = 0; i < 4; i++){
                    int num = a[y + keyY[i]][x + keyX[i]];
                    if(isMapped(num) == 0){
                        addMap(num);
                    }
                }
            }
        }
    }

    printf("%d", getMapCount(key));
}

//关于以下函数均从map[1]开始遍历的原因：map[0]必定为0
int isMapped(int n){
    for(int i = 1; map[i] != 0; i++){
        if(map[i] == n) return 1;
    }
    return 0;
}

void addMap(int n){
    int i = 1;
    while(map[i] != 0){
        i++;
    }
    map[i] = n;
}

int getMapCount(int ignoredNum){
    //map[]的第一位一定是0
    int count = 0;
    for(int i = 1; map[i] != 0; i++){
        if(map[i] != ignoredNum){
            count++;
        }
    }

    return count;
}