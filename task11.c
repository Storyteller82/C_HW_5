#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h> 

int main(void)
{
	int32_t a = 0, new = 0, ost = 0; 
	 
	scanf ("%d", &a);
	
	while (a > 0) // честно подсмотрел решение в гугле
	{
		ost = a % 10;
		new = new * 10 + ost;
		a = a / 10; 
	}
	printf ("%d\n", new);
	
return 0;		
}

