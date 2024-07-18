#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char op;
    double first, second;
    printf("enter an operator \n");
    scanf("%c", &op);
    printf("enter two numbers \n");
    scanf("%lf %lf", &first, &second);
    if (op == '+'){
        printf("%.1lf + %.1lf = %.1lf \n ", first, second, first + second);

    }
    else if (op == '-'){
       printf("%.1lf - %.1lf = %.1lf \n", first, second, first - second); 
    }
    else if (op == '*'){
       printf("%.1lf * %.1lf = %.1lf \n", first, second, first * second); 
    }
    else if (op == '/'){
       printf("%.1lf / %.1lf = %.1lf \n", first, second, first / second); 
    }
    /*
    switch(op){
        case '+':
        printf("%.1lf + %.1lf = %.1lf \n ", first, second, first + second);
        break;
        case '-':
        printf("%.1lf - %.1lf = %.1lf \n", first, second, first - second);
        break; 
        case '*':
        printf("%.1lf * %.1lf = %.1lf \n", first, second, first * second);
        break; 
        case '/':
        printf("%.1lf / %.1lf = %.1lf \n", first, second, first / second);
        break;     
        default:
        printf("error enter correct symbol\n");
    }
    */
    return (0);
}
