#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1;
    int b = 1;
    int temp = 0;
    int sum = a + b;
    
    for (int i = 0; i < 10; i ++)
    {
        temp = b;
        b = a + b;
	a = temp;
        sum = sum + b;
        printf("b = %d, sum = %d \n", b, sum);
    }
    
    return 0;
}
