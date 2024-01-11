#include <stdio.h>

#define T1x 4
#define T1y 4

#define T2x -4
#define T2y -4

int posDistanceSqured(int x1, int y1, int x2, int y2){
    return (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
}

int decode(int srcX, int srcY){
    int code;
    int d1 = posDistanceSqured(srcX, srcY, T1x, T1y);
    int d2 = posDistanceSqured(srcX, srcY, T2x, T2y);
    if(d1 > d2){
        code = 2;
    }else {
        code = 1;
    }

    return code;
}

int main(){
    int count;
    int posX[20];
    int posY[20];

    scanf("%d", &count);
    for(int i = 0; i < count; i++){
        scanf("%d %d", &posX[i], &posY[i]);
    }

    for(int i = 0; i < count; i++){
        printf("%d ", decode(posX[i], posY[i]));
    }

    return 0;
}