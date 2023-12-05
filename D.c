// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    char ch[100];
    gets(ch);
    char x, y;
   scanf("%c %c", &x, &y);
   int i = 0;
   while(ch[i] != '\0'){
        if(ch[i] == x){
            ch[i] = y;
       }
        i++;
    }
    printf("%s\n",ch);

    return 0;
}
