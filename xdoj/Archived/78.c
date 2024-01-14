#include <stdio.h>

char map[21][21];
int visited[21][21] = {0};
int cols, rows;
int x, y;
int hasLoop;

/**
 * return 1 : OK
 * return 0 : LOOP
*/
int move();

int main(){
    y = 1;
    hasLoop = 0;

    scanf("%d %d %d", &rows, &cols, &x);
    getchar();

    for(int r = 1; r <= rows; r++){
        for(int c = 1; c <= cols; c++){
            map[r][c] = getchar();
        }
        getchar();
    }

    int steps = 0;
    while (move()){
        steps++;
    }

    if(hasLoop == 1){
        printf("loop %d", steps);
    }else{
        printf("out %d", steps);
    }
}

int move(){
    if(x == 0 || x > cols || y == 0 || y > rows){
        return 0;
    }
    if(visited[y][x] == 1){
        hasLoop = 1;
        return 0;
    }

    switch (map[y][x]){
        case 'W':
            visited[y][x] = 1;
            x--;
            return 1;
        case 'E':
            visited[y][x] = 1;
            x++;
            return 1;
        case 'N':
            visited[y][x] = 1;
            y--;
            return 1;
        case 'S':
            visited[y][x] = 1;
            y++;
            return 1;
    }
    
    return 0;
}