//FROM: 墨珩

/*题目：最接近的三数之和
问题描述
给你一个长度为?n?的整数数组?nums?和 一个目标值?target。请你从?nums?中选出三个整数，使它们的和与?target?最接近。
返回这三个数的和。
若每组输入存在多个解，给出一个即可。

输入格式
第一行：数组长度n
第二行：长度为n的数组
第三行：目标值target
输出格式
　　三个数之和
样例输入
4
-1 2 1 -4
1
样例输出
2
样例说明
3 ≤ nums.length ≤ 1000
-1000 ≤ nums[i] ≤ 1000
-10^4 ≤ target ≤ 10^4*/
#include <stdio.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int *nums, int numsSize) {
	int i,j;
	for (i = 0; i < numsSize - 1; i++) {
		for (j = 0; j < numsSize - i - 1; j++) {
			if (nums[j] > nums[j + 1]) {
				swap(&nums[j], &nums[j + 1]);
			}
		}
	}
}

int customAbs(int x) {
	return x >= 0 ? x : -x;
}

void threeSumClosest(int *nums, int numsSize, int target) {
	if (numsSize < 3) {
		return;
	}
	bubbleSort(nums, numsSize);

	int closestSum = nums[0] + nums[1] + nums[2];
	int i,j,k;

	for (i = 0; i < numsSize - 2; i++) {
		for (j = i + 1; j < numsSize - 1; j++) {
			for (k = j + 1; k < numsSize; k++) {
				int currentSum = nums[i] + nums[j] + nums[k];
				if (customAbs(currentSum - target) < customAbs(closestSum - target)) {
					closestSum = currentSum;
				}
			}
		}
	}

	printf("%d\n", closestSum);
}

int main() {

	int n,i;
	scanf("%d", &n);


	int nums[100];
	for (i = 0; i < n; i++) {
		scanf("%d", &nums[i]);
	}

	int target;
	scanf("%d", &target);

	threeSumClosest(nums, n, target);

	return 0;
}
