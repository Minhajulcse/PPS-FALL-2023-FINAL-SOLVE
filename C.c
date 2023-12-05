// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,max = 0, sum = 0,count = 0;
    scanf("%d", &n);
    int ar[n][7];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 7; j++){
            scanf("%d", &ar[i][j]);
            sum += ar[i][j];
        }
        if(sum > max){
            int temp = max;
            max = sum;
            count++;
        }sum = 0;
    }
    printf("Roll - %d is performer of the week.\n", count);

    return 0;
}
