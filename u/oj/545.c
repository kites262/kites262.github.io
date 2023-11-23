#include <stdio.h>

int main(){
	int lines;//表示总行数
	int map[101] = {0};//map[i]表示标签i出现的次数

	scanf("%d", &lines);
	for(int i = 0; i < lines; i++){//针对每行进行处理

		//用户输入
		int count;
		int temp[100];
		scanf("%d", &count);
		for(int i = 0; i < count; i++) scanf("%d", &temp[i]);

		//temp[i]表示第i个用户输入的标签，这个标签出现的次数是map[temp[i]]
		for(int i = 0; i < count; i++){
			map[temp[i]]++;
		}
	}

	//用户全部输入结束，搜索最大值
	int tag = 0;
	int max = 0;
	for(int i = 0; i < 101; i++){
		if(map[i] >= max){
			max = map[i];
			tag = i;
		}
	}

	printf("%d %d", tag, max);
}