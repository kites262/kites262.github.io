#include <stdio.h>
#include <string.h>//库函数真好用
#include <ctype.h>

void decompress(const char com[]) {
    int len = strlen(com);

    char decompressed[100] = "";
    int index = -1;

    int mark = 0;
    while(mark < len){
        if(isalpha(com[mark])){
            int repeat;
            char alpha = com[mark];
            //digit after the alpha
            if(isdigit(com[mark+1])){
                //two digits after the alpha
                if(isdigit(com[mark+2])){
                    repeat = (com[mark+1] - '0')*10 + com[mark+2] - '0';
                    mark += 3;
                }else{//one digit after the alpha
                    repeat = com[mark+1] - '0';
                    mark += 2;
                }
            }else{//alpha after the alpha
                repeat = 1;
                mark += 1;
            }
            //append to decompressed
            for(int j = 0; j < repeat; j++){
                index++;
                decompressed[index] = alpha;
            }
        }else if(com[mark] == '\0'){
            break;
        }else{
            printf("Internal Error!\n");
            break;
        }
    }

    printf("%s\n", decompressed);
}

int main() {
    char compressed[51];
    scanf("%s", compressed);
    decompress(compressed);
    return 0;
}
