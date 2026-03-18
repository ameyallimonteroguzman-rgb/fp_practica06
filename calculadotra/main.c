#include <stdio.h>

int mainn(){
    int a,b,c;
    float f,g,h;
    char op, op2;

    printf("selecciona una opcion\n");
    printf("1. Operacion con enteros\n");
    printf("2. Operacion con reales\n");

    scanf("%c", &op);

    printf("selecciona una opcion\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3.Multiplicacion\n");
    printf("4. Division\n");
    printf("5. Modulo\n");
    printf("6. Salir\n");
    scanf("%c", &op2);

    if(op=='1')
    {
        printf("Ingresalos dos numeros con los que quieras operar\n")
        sacnf("%d %d" , &a, &b)
        switch(op2)
        {
    case 1 :
        c= a+b;
        break;
    case 2 :
        c= a-b;
        break;
    case 3 :
        c= a*b;
        break;
    case 4 :
        c= a/b;
        break;
    case 5 :
        c= a%b;
        break;

    default:
        return0;
        }
        
    }else{
        printf("El resultado es %a\n", c)
        switch(op2)
        {
        case 1 :
           h= f+g;
         break;
        case 2 :
          h= g-g;
          break;
        case 3 :
          h= f*g;
         break;
        case 4 :
          h= f/g;
          break;
         case 5 :
          h= (int)f%/(int)g;
          break;

        default:
          return0;
        }
        printf("El resultado es %f\n", h)
    }
}