#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h> 

int main(void)
{
	int32_t a, b = 1, e, d = 0; 
	 
	scanf ("%d", &a);
	
	printf ("%d ", b);
	
	for (int c = 1; c <= (a-1); c++)
	{
		e = d + b;
		
		printf ("%d ", e);	
		d = b;
		b = e;
	}	
	
return 0;		
}
