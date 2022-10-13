#include <stdio.h>

long double power(double num, int degree) {
    
    if (degree > 0)  return num * power(num, degree-1);
    
    if (degree < 0)  return 1.0 / power(num, -degree);
    
    return 1;
}




int main() {
    double num;
    int degree;
    printf("Введите число: ");
    scanf("%lf", &num);
    printf("Возвести в степень: ");
    scanf("%d", &degree);
    
    printf("%.2Lf: ", power(num, degree));
    
    return 0;
}
