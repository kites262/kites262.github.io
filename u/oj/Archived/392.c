
//version 2
int compare(int x, int y){
    int flag;
    if(x%2 == 0 && y%2 != 0) flag = 1;
    else if(x%2 != 0 && y%2 == 0) flag = -1;
    else flag = x-y;
    return flag;
}