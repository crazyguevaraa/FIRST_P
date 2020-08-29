#include <stdio.h>
static const int STP = -1;

void print_answer(int num, double root1, double root2)
{
switch(num)
    {
        case 0:
            printf("нет корней.\n");
            break;
        case 1:
            printf("x1 = x2 = %lg\n", root1);
            break;
        case 2:
            printf("x1 = %lg , x2 = %lg\n", root1, root2);
            break;
        case STP:
            printf("Попробуйте ввести другие коэффициенты.\n");
            break;
        default:
            printf("что то пошло не так. Нашлось %d корней.\n", num);
    }
}
