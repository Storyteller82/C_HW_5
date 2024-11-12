#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h> 

int main(void)
{
	int32_t a, sum; 
	bool flag = 1;
 	
	scanf ("%d", &a);
	
	sum = a%10; // закидываю единицы сразу в сумму, каким бы длинным число не было
	
	while (flag)
	{
		a = a / 10; // откидываем одну цифру с правого края
		if (a >= 10) // если есть еще что делить
		{ 
			sum = sum + (a%10); // добавляем к сумме еще одну крайнюю с права цифру
		}
		else // если делить уже не на что, в числе остался только самый старший разряд
		{
			sum = sum + a; // то прибавляем и этот старший разряд
			flag = 0; // и выходим из цикла
		}
	}
	printf ("%d\n", sum);
}

