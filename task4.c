#include <stdio.h>
#include <inttypes.h>

int main(void)
{
	int32_t a; 
		
	scanf ("%d", &a);
	
	if (a >= 100 && a <= 999)
	{
		printf ("YES\n");
	}
	else 
	{
		printf ("NO\n");
	}
}

