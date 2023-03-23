#include <stdio.h>
int main()
{
    int first, second, *p, *q, sum,sub,pro;
    
    printf("Enter two integers \n");
    scanf("%d%d", &first, &second);
    
    p = &first;
    q = &second;

    sum = *p + *q;
    pro = *p * *q;
    sub = *p - *q;
    
    printf("Sum of entered numbers = %d\n",sum);
    printf("Difference of entered numbers = %d\n",sub);
    printf("Product of entered numbers = %d\n",pro);
    return 0;
}
