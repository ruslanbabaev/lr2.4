#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>


double sr_geom(int k, ...) {
    double result = 1;
    va_list ptr;
    va_start(ptr, k);
    for(int i = 0; i < k; i++)
        {
            result = result * va_arg(ptr, double);
            //printf("%f", result);
        }
    double s = result;
    result = pow(s, 1.0/5.0);
    va_end(ptr);
    return result;
}

int main() {
    //пусть будет 5 чисел
    double arr[5];
    printf("Введите 5 чисел через пробел: ");
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &arr[i]);
    }
    
    printf("Среднее геометрическое:\n");
    printf("%f\n", sr_geom(5, arr[0], arr[1], arr[2], arr[3], arr[4]) );
    
    return 0;
}
