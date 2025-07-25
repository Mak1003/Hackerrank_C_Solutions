#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ih;
    char s[100];
    char sen[100];
    scanf("%[^\n]%*c", ih);
    scanf("%c", &ih);
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    scanf("%s", sen);
    printf("%c\n", ih);
    
    printf("%s\n", s);
    
    
    
    printf("%s", sen);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
