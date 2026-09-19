#include <stdio.h>

int main() 
{
	 double a, b, result;
	 int command;
	 
	 printf("Введите 2 числа: \n");
	 scanf("%lf %lf", &a, &b);
	 
	 printf("Выберите операцию: \n");
	 printf("1 - сложение\n");
	 printf("2 - вычитание\n");
	 printf("3 - умножение\n");
	 printf("4 - деление\n");
	 scanf("%d", &command);
	 
	 switch (command)
	 {
	 case 1:
	    result = a + b;
	    printf("Результат: %.2f\n", result);
	    break;
	    
	 case 2:
	    result = a - b;
	    printf("Результат: %.2f\n", result);
	    break;
	    
	 case 3:
	    result = a * b;
	    printf("Результат: %.2f\n", result);
	    break;
	    
	 case 4:
	    if (b !=0)
	    {
	        result = a / b;
	        printf("Результат: %.2f\n", result);
	    }
	    else
	    {
	        printf("Ошибка: деление на ноль.\n");
	    }
	    break;
    default:
        printf("Ошибка: неизвестная операция.\n");
        break;
    }

    return 0;
}