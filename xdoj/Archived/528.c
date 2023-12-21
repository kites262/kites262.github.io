//FROM: ī��

/*��Ŀ����ӽ�������֮��
��������
����һ������Ϊ?n?����������?nums?�� һ��Ŀ��ֵ?target�������?nums?��ѡ������������ʹ���ǵĺ���?target?��ӽ���
�������������ĺ͡�
��ÿ��������ڶ���⣬����һ�����ɡ�

�����ʽ
��һ�У����鳤��n
�ڶ��У�����Ϊn������
�����У�Ŀ��ֵtarget
�����ʽ
����������֮��
��������
4
-1 2 1 -4
1
�������
2
����˵��
3 �� nums.length �� 1000
-1000 �� nums[i] �� 1000
-10^4 �� target �� 10^4*/
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
