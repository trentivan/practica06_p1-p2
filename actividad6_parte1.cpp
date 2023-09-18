#include <stdio.h>

void menu(void);
void msges(void);

//fibonacci
void factoriales(void);
void factorial_for(void);
void factorial_while(void);
void factorial_do_while(void);

//factoriales
void factoriales(void);
void factorial_for(void);
void factorial_while(void);
void factorial_do_while(void);

//digitos
void digitos(void);
void digitos_for(void);
void digitos_while(void);
void digitos_do_while(void);

int main()
{

    menu();

    return 0;
}

int msges()
{
    int opcion;
    printf("1) fibonacci\n");
    printf("2) factorial\n");
    printf("3) cantidad de digitos\n");
    printf("elije una opcion: ");
    scanf("%d", opcion);

    return opcion;
}
void menu()
{
    int op;
    do
    {
        op = msges();
        switch (op)
        {
        case 1:
            fibonaccis();
            break;
        case 2:
            factoriales();
            break;
        case 3:
            digitos();
            break;
        }

    } while (op != 0);
}

void fibonaccis()
{
    int opcion;
    printf("fibonacci con ciclo for");
    printf("fibonacci con ciclo while");
    printf("fibonacci con ciclo do while");
    printf("elije una opcion: ");
    scanf("%d", opcion);
    switch (opcion)
    {
    case 1:
        fibonacci_for();
        break;

    case 2:
        fibonacci_while();
        break;

    case 3:
        fibonacci_do_while();
        break;
    }
}

void factoriales()
{
    int opcion;
    printf("factorial con ciclo for");
    printf("factorial con ciclo while");
    printf("factorial con ciclo do while");
    printf("elije una opcion: ");
    scanf("%d", opcion);
    switch (opcion)
    {
    case 1:
        factorial_for();
        break;

    case 2:
        factorial_while();
        break;

    case 3:
        factorial_do_while();
        break;
    }
}

void digitos()
{
    int opcion;
    printf("cantidad de digitos con ciclo for");
    printf("cantidad de digitos con ciclo while");
    printf("cantidad de digitos con ciclo do while");
    printf("elije una opcion: ");
    scanf("%d", opcion);
    switch (opcion)
    {
    case 1:
        num_digitos_for();
        break;

    case 2:
        num_digitos_while();
        break;

    case 3:
        num_digitos_do_while();
        break;
    }
}

void fibonacci_for()
{
    int repetir;
    printf("cuantas veces quieres que se realice el programa? :");
    scanf("%d", &repetir);

    for (int i = 0, siguiente = 1, anterior = -1, resultado; i < repetir; i++, siguiente)
    {
        resultado = siguiente + anterior;
        printf("%d", resultado);
        anterior = siguiente;
        siguiente = resultado;
    }
}

void fibonacci_while()
{

}

void fibonacci_do_while()
{

}

void factorial_for()
{

}

void factorial_while()
{

}

void factorial_do_while()
{

}

void num_digitos_for()
{

}

void num_digitos_while()
{

}

void num_digitos_do_while()
{

}