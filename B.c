// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,sum = 0,x;
    scanf("%d", &n);
    int ar[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &ar[i]); sum +=ar[i];
    }
    scanf("%d", &x);
    if(sum >= x) printf("Yes, I will qualify!\n");
    else printf("I am sorry!\n");

    return 0;
}
