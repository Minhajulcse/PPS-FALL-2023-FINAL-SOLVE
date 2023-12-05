// Online C compiler to run C program online
#include <stdio.h>

int sum = 0;


int SumOfdigit(int n){
    if(n == 0) return sum;
    int mod = n % 10;
    sum +=mod;
    SumOfdigit(n / 10);

    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    int ans = SumOfdigit(n);
    printf("%d\n",ans);
    return 0;
}
