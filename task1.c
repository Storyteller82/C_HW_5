#include <stdio.h>
#include <inttypes.h>

int main(void)
{
	int32_t a; 
		
	scanf ("%d", &a);
	
	for (int i = 1; i <= a; i++)
	{
		printf ("%d %d %d\n", i, i*i, i*i*i );
	}
}

