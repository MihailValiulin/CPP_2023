
#include <stdio.h>

int main()
{
//целое 
    int a;
    a = 15;
    printf("a: %d\n", a);
    
    //с плавающей точкой
    float b;
    b = 20;
    printf("b: %f\n", b);
    
    //символ
    char c;
    c = 92;
    printf("c: %c\n", c);
    
    //Булева переменная
    bool d;
    d = 0;
    printf("d: %d\n", d);
    
    //операторы
    int number = 15;
    number += 26;
    printf (" %d \n", number);
    number -= 6;
    printf (" %d \n", number);
    number *= 5;
    printf (" %d \n", number);
    float n;
    n = 48;
    n /= 10;
    printf (" %f \n", n);
        
    return 0;
    }
