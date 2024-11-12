#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h> 

int main(void)
{
	int32_t a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, i=0, j=0, k=0, l=0, flag = 1; 
	 
	scanf ("%d", &a);
		
		while (flag--) // крутим цикл, пока не закончаться разряды числа
		{
			if (a >= 10) // проверяем, есть ли еще разряды у числа
			{
				b = a % 10; // закидываю крайнюю правую цифру в промежуточную переменную
				a = a / 10; // откидываем одну цифру с правого края 	
		
				flag = 1;
			}
			else 
			{
				b = a;
			}
			
				switch (b)
				{
					case 0:
					{
						c++;
						break;
					}
					case 1:
					{
						d++;
						break;
					}
					case 2:
					{
						e++;
						break;
					}
					case 3:
					{
						f++;
						break;
					}
					case 4:
					{
						g++;
						break;
					}
					case 5:
					{
						h++;
						break;
					}
					case 6:
					{
						i++;
						break;
					}
					case 7:
					{
						j++;
						break;
					}
					case 8:
					{
						k++;
						break;
					}
					case 9:
					{
						l++;
						break;
					}
				}
			
		}
		
		if (l == 1)
		{
			printf ("YES\n");
		}
		else
		{
			printf ("NO\n");
		}
	
		
return 0;		
}

