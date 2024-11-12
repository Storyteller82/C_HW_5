#include <stdio.h>
#include <inttypes.h>

int main(void)
{
	int32_t a, b, sum = 0; 
		
	scanf ("%d %d", &a, &b);
	
	for (a; a <= b; a++)
	{
		sum = sum + (a*a);	
	}
	printf ("%d ", sum);
}

