#include <stdio.h>

#define MAXROW 100
#define MAXCOL 100

int main() {
    int row, col;
    scanf("%d%d", &row, &col);

    int arr[MAXROW][MAXCOL];
    for (int y = 0; y < row; y++) {
        for (int x = 0; x < col; x++) {
            scanf("%d", &arr[y][x]);
        }
    }

    int isR = 0;

    for (int y = 0; y < row; y++) {
        int minColIndex = 0;

        // 寻找当前行中最小元素所在的列索引
        for (int x = 1; x < col; x++) {
            if (arr[y][x] < arr[y][minColIndex]) {
                minColIndex = x;
            }
        }

        // 判断当前行最小元素是否也是其所在列的最大元素
        int minValue = arr[y][minColIndex];
        int isMaxInCol = 1;
        for (int i = 0; i < row; i++) {
            if (arr[i][minColIndex] > minValue) {
                isMaxInCol = 0;
                break;
            }
        }

        if (isMaxInCol) {
            isR = 1;
            printf("%d %d %d\n", y, minColIndex, minValue);
        }
    }

    if (isR == 0) printf("no\n");

    return 0;
}
