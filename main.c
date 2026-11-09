#include <stdio.h>

int main(void)
{
    int n;
    long result = 0;
    scanf("%d", &n);
    if(n>=0){
        for(int i = 0; i <= n; i++){
            result += i;
        }
        printf("%ld \n", result);
    }
    else {
        printf("NG \n");
    }
    /* TODO: n が負なら NG、そうでなければ 1+2+...+n を for 文で計算して表示 */
    return 0;
}
