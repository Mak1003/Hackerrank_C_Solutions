#include <stdio.h>

void update(int *a,int *b) {
    
    *a = *a+*b;
    *b = (((*b+*b)-*a) < 0) ? -((*b+*b)-*a): ((*b+*b)-*a) ;
    
    // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
