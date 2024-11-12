#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h> 

int main(void)
{
	int32_t a = 0, b, chet = 0, nechet = 0; 
	 
	scanf ("%d", &a);
	
	while (a > 0) 
	{
		
		
		if (a < 10)
		{
			b = a;
			a = 0;
		}
		else
		{
			b = a % 10;
			a = a / 10;			
		}
		
	//	printf ("b = %d\n", b);
				
		if ((b % 2) == 0)
		{
			chet++;
		}
		else 
		{
			nechet++;
		}
		
	 
	}
	printf ("%d %d\n", chet, nechet);
	
return 0;		
}

