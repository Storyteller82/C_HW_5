#include <stdio.h>
#include <inttypes.h>

int main(void)
{
	int32_t a, b; 
		
	scanf ("%d %d", &a, &b);
	
	for (a; a <= b; a++)
	{
		printf ("%d ", a*a);
	}
}

