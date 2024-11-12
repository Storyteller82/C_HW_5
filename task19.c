#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h> 

int main(void)
{
	int32_t a = 0, b = 1, sum = 0, flag = 1; 
	 
	scanf ("%d", &a);
		
		while (flag--) // крутим цикл, пока не закончаться разряды числа
		{
			if (a >= 10) // проверяем, есть ли еще разряды у числа
			{
				b = a % 10; // закидываю крайнюю правую цифру в промежуточную переменную
				a = a / 10; // откидываем одну цифру с правого края 
				//c = a % 10;	// закидываю вторую справа цифру
		
				flag = 1;
			}
			else 
			{
				b = a;
			}
			//printf ("%d\n", b); // отладочный вывод
			//printf ("%d\n", c); // отладочный вывод
			sum = sum + b;
			
		}	
			if (sum == 10) 
			{
				printf ("YES\n");
			}	
			else 
			{
				printf ("NO\n");
			}
		
return 0;		
}

