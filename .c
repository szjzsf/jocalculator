#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    
    double num1;
    double num2;
    char op;

    printf("I'rj be egy szamot: ");
    scanf("%lf", &num1);
    printf("Va'lassz egy m'u'veletet: ");
    scanf(" %c", &op);
    printf("I'rj be me'gegy sza'mot: ");
    scanf("%lf", &num2);

    if(op == '+') {
        printf("%f", num1 + num2);
    } else if(op == '-') {
        printf("%f", num1 - num2);
    } else if(op == '*') {
        printf("%f", num1 * num2);
    } else if(op == '/') {
        printf("%f", num1 / num2);
    } else {
        printf("Nem jo', valamit elbaszta'l");
    }
return 0;
}
