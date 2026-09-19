#include <stdio.h>

int main() 
{
	 double a, result;
	 int command;
	 
	 printf("Введите число: \n");
	 scanf("%lf", &a);
	 
	 printf("Выберите операцию: \n");
	 printf("1 - метры в сантиметры\n");
	 printf("2 - килограммы в граммы\n");
	 printf("3 - градусы Цельсия в градусы Фаренгейта\n");
	 printf("4 - часы в минуты\n");
	 scanf("%d", &command);
	 
	if (a > 0)
	{
    	switch (command)
    	{
        case 1:
            result = a * 100.0;
            printf("Результат: %.2f\n", result);
            break;
        	    
        case 2:
            result = a * 1000.0;
        	printf("Результат: %.2f\n", result);
        	break;
        	    
        case 3:
        	result = a * 9.0/5.0 + 32.0;
        	printf("Результат: %.2f\n", result);
        	break;
        	    
        case 4:
        	result = a * 60.0;
        	printf("Результат: %.2f\n", result);
        	break;
        default:
            printf("Ошибка: неизвестная операция.\n");
            break;
    	}
    }
    else
    {
        printf("Ошибка: неверный тип числа.\n");
    }
    
    return 0;
}