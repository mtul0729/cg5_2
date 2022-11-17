#include <stdio.h>
#include <string.h>
int main() {
    char c[50];
    scanf("%s",c);
    const unsigned long len = strlen(c);
    int i,j,t;
    for(i = 0;i < len - 1;i++)  //冒泡排序
        for(j = 0;j < len - 1 - i;j++){
            if(c[j] > c[j + 1]){
                t = c[j];
                c[j] = c[j + 1];
                c[j + 1] = t;
            }
        }
    //下面删除重复的字符
    char o[len] ;
    //o[0] = c[0];
    int count_o = 0;
    for(i = 0;i < len;i++){
        if(c[i] == c[i + 1]){
            continue;
        } else {
            o[count_o] = c[i];
            count_o++;
        }
    }
    o[count_o] = 0;
    puts(o);
    return 0;
}
