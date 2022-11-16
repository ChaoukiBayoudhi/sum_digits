#include <stdio.h>

int main() {
    int n,q,sum_digits;
    printf("introduce an integer : ");
    scanf("%d",&n);
    q=n;
    sum_digits = 0;
    while(q!=0)
    {
        sum_digits+=q%10;
        q/=10;//or q=q/10;
    }
    printf("sum digits(%d) = %d\n",n,sum_digits);
    return 0;
}
