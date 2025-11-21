#include<stdio.h>
int add_number(int a, int b){
    int c;
    c = a + b;
    return c;
}
int main(){
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x,&y);
    printf("The sum of %d and %d = %d", x, y, add_number(x,y));
    return 0;
}