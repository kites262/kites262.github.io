#include <stdio.h>
#define MAX_M 100
#define MAX_N 100

struct Node {
    int x, y, time;
};

int m, n;
int maze[MAX_M][MAX_N];
int visited[MAX_M][MAX_N];

// 定义四个方向的移动
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

// 判断某个位置是否在迷宫范围内且可通行
int isValid(int x, int y) {
    return (x >= 0 && x < m && y >= 0 && y < n && maze[x][y] == 0 && !visited[x][y]);
}

// 使用 BFS 计算最短时间
int bfs(int startX, int startY, int endX, int endY) {
    struct Node queue[MAX_M * MAX_N];
    int front = 0, rear = 0;

    // 初始化起点并入队
    struct Node newNode;
    newNode.x = startX;
    newNode.y = startY;
    newNode.time = 0;
    queue[rear++] = newNode;
    visited[startX][startY] = 1;

    while (front < rear) {
        struct Node current = queue[front++];
        if (current.x == endX && current.y == endY) {
            return current.time;
        }

        // 尝试四个方向的移动
        for (int i = 0; i < 4; i++) {
            int newX = current.x + dx[i];
            int newY = current.y + dy[i];
            if (isValid(newX, newY)) {
                struct Node newNode;
                newNode.x = newX;
                newNode.y = newY;
                newNode.time = current.time + 1;
                queue[rear++] = newNode;
                visited[newX][newY] = 1;
            }
        }
    }

    return -1; // 若无法到达出口，则返回-1表示无法找到路径
}

int main() {
    int startX, startY, endX, endY;
    // 读取迷宫大小
    scanf("%d %d", &m, &n);
	// 读取入口和出口坐标
    scanf("%d %d %d %d", &startX, &startY, &endX, &endY);
	// 读取迷宫内容
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &maze[i][j]);
            visited[i][j] = 0;
        }
    }


    int shortestTime = bfs(startX, startY, endX, endY);
    if (shortestTime != -1) {
        printf("%d", shortestTime);
    } else {
        printf("无法到达出口\n");
    }

    return 0;
}
