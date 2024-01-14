//AI

/*
问题描述	
旋转是图像处理的基本操作，在这个问题中，你需要将一个图像顺时针旋转90度。
计算机中的图像可以用一个矩阵来表示，为了旋转一个图像，只需要将对应的矩阵旋转即可。例如，下面的矩阵（a）表示原始图像，矩阵（b）表示顺时针旋转90度后的图像。

输入说明	
输入的第一行包含两个整数n和m，分别表示图像矩阵的行数和列数。1 ≤ n, m ≤ 100。
接下来n行，每行包含m个非负整数，表示输入的图像，整数之间用空格分隔。

输出说明	
输出m行，每行n个整数，表示顺时针旋转90度之后的矩阵，元素之间用空格分隔。

输入样例	
2 3
1 5 3
3 2 4

输出样例	
3 1
2 5
4 3	

*/

#include <stdio.h>

#define MAX 100

int main() {
    int n, m;
    int image[MAX][MAX];
    int rotated[MAX][MAX];

    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &image[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            rotated[j][n - i - 1] = image[i][j];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", rotated[i][j]);
        }
        printf("\n");
    }

    return 0;
}