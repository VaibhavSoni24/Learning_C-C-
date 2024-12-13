#include <stdio.h>
double convertFahrenheitToCelsius(double fahrenheit) 
{
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}
int main()
{
    double fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);
    celsius = convertFahrenheitToCelsius(fahrenheit);
    printf("%.2lf Fahrenheit is equal to %.2lf Celsius\n", fahrenheit, celsius);
    return 0;
}