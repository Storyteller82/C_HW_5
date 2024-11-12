#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h> 

int main(void)
{
	int32_t a, b, i, flag = 1, sum = 0, umn = 1; 
	 
	scanf ("%d", &a);
	
	for (int c = 10; c <= a; c++)
	{
		i = c;
		flag = 1;
		while (flag) 
		{
			if (i < 10)
			{
				b = i;
				flag = 0;
			}
			else
			{
				b = i % 10;
				i = i / 10;			
			}
			
			sum = sum + b;
			umn = umn * b;
	
		}
		if (sum == umn)
		{
			printf ("%d ", c);	
		}
		else
		{
			sum = 0;
			umn = 1;
		}
	}	
	
return 0;		
}

