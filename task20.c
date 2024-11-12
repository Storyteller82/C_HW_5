#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h> 

int main(void)
{
	int32_t a = 0, flag = 1; 
	 
	scanf ("%d", &a);
	
	if (a != 1)
	{
		
		for (int i = 2; i < a; i++)
		{
			if ((a % i) == 0)
			{
				printf ("NO\n");
				flag = 0;
				break;
			}
		}
		if (flag != 0)
		{
			printf ("YES\n");
		}
	}
	else
	{
		printf ("NO\n");
	}

return 0;		
}

