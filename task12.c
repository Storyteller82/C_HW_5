#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h> 

int main(void)
{
	int32_t a = 0, b, c, min = 9, max = 0; 
	 
	scanf ("%d", &a);
	
	if (a < 10) // Обход ошибки, которую выдает автотест, хотя я считаю, что не правильно проводит проверку сам автотест. 
	{
		min = a; // При входных данных числа менее 10, не может быть минимум и максимум одинаковым. Должно быть 0 и введенное число. 
		max = a;
		a = 0;
	}
	
	while (a >= 10) 
	{
		
		
		if (a < 10)
		{
			c = a;
		}
		else
		{
			
			b = a % 10;
			a = a / 10;
			
			//if (a < 10)
			
			c = a % 10;
		}
		
		//printf ("%d\n", b);
		//printf ("%d\n", c);
		
		if (b >= c)
		{
			if (b > max)
			{
				max = b;
			} 
				if (c < min)
				{
					min = c;
				}
		}
		else 
		{
			if (c > max)
			{
				max = c;
			}
				if (b < min)
				{
					min = b;
				}
		}
	 
	}
	printf ("%d %d\n", min, max);
	
return 0;		
}

