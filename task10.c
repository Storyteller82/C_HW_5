#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h> 

int main(void)
{
	int32_t a = 0, b = 1, c = 0, flag = 1, flag2 = 0; 
	 
	scanf ("%d", &a);
		
		while (flag--) // крутим цикл, пока не закончаться разряды числа
		{
			if (a >= 10) // проверяем, есть ли еще разряды у числа
			{
				b = a % 10; // закидываю крайнюю правую цифру в промежуточную переменную
				a = a / 10; // откидываем одну цифру с правого края 
				c = a % 10;	// закидываю вторую справа цифру
		
				flag = 1;
			}
			//else 
			//{
			//	b = a;
			//}
			//printf ("%d\n", b); // отладочный вывод
			//printf ("%d\n", c); // отладочный вывод
			if (b<=c) 
			{
				printf ("NO\n");
				flag2 = 1; // Костыль...... 
				break;
			}	
			
					
		}
		if (flag2 != 1)
		printf ("YES\n");
		
	
		
return 0;		
}

