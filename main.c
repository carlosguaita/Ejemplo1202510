#include <stdio.h>

int main (int argc, char *argv[]) {
    double num1, num2, sum, rest, mult, div;
    int op1=0, op2=0;
    do{
    printf("Ingrese el num1: ");
    scanf("%lf",&num1);
    printf("Ingrese el num2: ");
    scanf("%lf",&num2);
    printf("Elija la operacion que desea realizar\n");
    printf("1.Suma\n2.Resta\n3.Multiplicacion\n4.Division\n>>");
    scanf("%d",&op1);
    switch (op1)
    {
    case 1:
        sum=num1+num2;
        printf("La suma es: %.2lf\n",sum);
        break;
    case 2:
        rest=num1-num2;
        printf("La resta es: %.2lf\n",rest);
        break;
    case 3:
        mult=num1*num2;
        printf("La multiplicacion es: %.2lf\n",mult);
        break;
    case 4:
        if(num2>0){
            div=num1/num2;
            printf("La division es: %.2lf\n",div);
        }else{
            printf("No se puede realizar la division\n");
        }      
        break;    
    default:
    printf("No existe la opcion seleccionada\n");
        break;
    }
    printf("Desea realizar otra operacion?\n1.Si\n2.No\n>>");
    scanf("%d",&op2);
    }while (op2==1);
    
    return 0;
}