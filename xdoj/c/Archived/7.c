/*
试题名称	车牌限行
时间限制:	1 秒
内存限制:	256KB

问题描述
受雾霾天气影响，某市决定当雾霾指数超过设定值时对车辆进行限行，假设车牌号全为数字，且长度不超过6位，限行规则如下： 
（1）限行时间段只包括周一至周五，周六周日不限行； 
（2）如果雾霾指数低于200，不限行； 
（3）如果雾霾指数大于等于200且低于400，每天限行两个尾号的汽车，周一限行1和6，周二限行2和7，周三限行3和8，周四限行4和9，周五限行5和0； 
（4）如果雾霾指数大于等于400，每天限行五个尾号的汽车，周一、周三和周五限行1,3,5,7,9，周二和周四限行0,2,4,6,8。 

---
Day 1~5
<200 X
>=200, <400

现在给出星期几、雾霾指数和车牌号，判断该车牌号是否限行。 

输入说明
输入分为三个整数，第一个整数表示星期几（1~7，1表示周一，2表示周二，依次类推，7表示周日），
第二个整数表示雾霾指数（0~600），第三个整数表示车牌号，整数之间用空格分隔。

输出说明
输出为两个部分，第一部分为车牌最后一位数字，第二部分为限行情况，限行输出yes，不限行输出no。

输入样例1 
4 230 80801 
输入样例2 
3 300 67008

输出样例1 
1 no 
输出样例2 
8 yes 
*/
#include <stdio.h>

int main(){
    const int v1 = 200;
    const int v2 = 400;
    const int low[5][2] = {1,6, 2,7, 3,8, 4,9, 5,0};
    const int high[2][5] = {1,3,5,7,9, 2,4,6,8,0};

    int day, value, car;
    int isRestricted;
    scanf("%d %d %d", &day, &value, &car);
    car = car % 10;

    // has restrict
    if(day<=5 && value >= 200){
        // switch value
        // low value
       if(value <= 400){
            if(car == low[day-1][1] || car == low[day-1][2]) isRestricted = 1;
            else isRestricted = 0;
        // high value
        }else if(value > 400){
            if(car == high[0][0] || car == high[0][1] || car == high[0][2] || car == high[0][3] || car == high[0][4]) isRestricted = day%2 ? 1 : 0;
            else isRestricted = day%2 ? 0 : 1;
        }
    // do not has restrict
    }else if(day > 5 || value < 200) isRestricted = 0;

    if(isRestricted) printf("%d %s", car, "yes");
    else printf("%d %s", car, "no");
}