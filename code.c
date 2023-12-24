#include <stdio.h>

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<100)
    {
        if(n%2==0)
        {
            printf("%d is less than 100 and it is an even number\n",n);
        }
        else
        {
            printf("%d is less than 100 and it is an odd number\n",n);
        }
    } else
        {
            printf("%d is not less than 100.",n);
        }
    
    return 0;
}
