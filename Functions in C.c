#include <stdio.h>

int max_of_four(int a, int b, int c, int d);
int max=0;
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a>b & a>c & a>d) {
        max+=a;
    }
    else if (b>c & b>a & b>d){
        max+=b;
    }
    else if (c>d & c>a & c>d){
        max+=c;
    }
    else{
        max+=d;
    }
    printf("%d", max);
    
    return 0;
}
