// Hernandez Ceseña Ivan Fernando  373077
//  17/09/23
// promedio 3 calificaciones
// NYP_ACT6_p2_932
#include <stdio.h>
#include <conio.h>

int msgs(void);
void menu(void);

//funciones
void promedios(void);
void tablas(void);
void media_numeros(void);
void embarcacion(void);
void limite_materia(void);

int main()
{
    menu();
    return 0;
}

int msgs()
{
    int opcion=0;
    printf("\n1) promedios.\n");
    printf("2) tablas de multiplicar.\n");
    printf("3) media de numeros entre rango dado por ti.\n");
    printf("4) embarcacion finisterra.\n");
    printf("5) limite para cursar una materia\n");
    printf("0) terminar programa. (lo vas a tener que presionar en el siguiente menu tambien)\n");
    printf("elije una opcion:\n");
    scanf("%d", &opcion);

    return opcion;
}

void menu()
{
    int op;
    do
    {
        op= msgs();
        switch (op)
        {
        case 1:
            promedios();
            break;

        case 2:
            tablas();
            break;

        case 3:
            media_numeros();
            break;

        case 4:
            embarcacion();
            break;

        case 5:
            limite_materia();
            break;
        }
    }while(op!=0);
}

void promedios()
{
    int promedio, cal1, cal2, cal3, cal4, cal5;
    int reprobados=0, n=5;

    for(int i=0; i<n; i++)
    {
        printf("dame tu primer calificacion\n");
        scanf("%d",& cal1);
        printf("dame tu segunda calificacion\n");
        scanf("%d",& cal2);
        printf("dame tu tercera calificacion\n");
        scanf("%d",& cal3);
        printf("dame tu cuarta calificacion\n");
        scanf("%d",& cal4);
        printf("dame tu quinta calificacion\n");
        scanf("%d",& cal5);
        promedio= (cal1+cal2+cal3+cal4+cal5)/5;
        printf("el promedio es: %d\n\n", promedio);
        if(promedio<=50)
        {
            reprobados++;
        }
    }

    printf("el numero de alumnos que no tienen derecho a examen de recuperacion es: %d\n", reprobados);
    menu();
}

void tablas()
{
    for(int i=1; i<=10; i++)
    {
        printf("pulsa cualquier letra para continuar\n");
        getch();
        for(int j=1; j<=10; j++)
        {
            printf("%d * %d= %d\n",i, j, i*j);
        }
    }
    menu();
}
void media_numeros()
{
    int rango_s, rango_in, num, n, acumulador=0;
    int div=0; 
    float prom;
    printf("cuantos numeros quieres evaluar?\n");
    scanf("%d",& n);
    int numeros[n];
    printf("dame tu limite inferior\n");
    scanf("%d",& rango_in);
    printf("dame tu limite superior\n");
    scanf("%d",& rango_s);
    for(int i=0;  i<n; i++)
    {
        printf("dame un numero\n");
        scanf("%d",& num);
        numeros[i]= num;
    }
    for(int j=0; j<n; j++)
    {
        if(numeros[j]>=rango_in && numeros[j]<=rango_s)
        {
            acumulador= acumulador + numeros[j];
            div++;
        }
    }
    prom= (float)acumulador / (float)div;
    printf("la suma de todos los numeros es: %d\n", acumulador);
    printf("la media es: %.2f\n", prom);
    menu();
}
void embarcacion()
{
    //peso[15], 
    int kilos=0, i, kilo, prom, num=0;
    for(i=1; i<=15; i++)
    {
        printf("dame tu peso\n");
        scanf("%d",& kilo);
        kilos= kilos + kilo;
        num++;
    } 
    if(kilos<=(700*1.15))
    {
        printf("no se paso el limite de peso\n");
    }
    else
    {
        printf("se paso el limite de peso\n");
    }
    if(i<=15)
    {
        printf("no se paso el limite de tripulantes\n");
    }
    prom= (float)kilos / (float)num;
    printf("el promedio de peso es: %d\n", prom);
    menu();
}
void limite_materia()
{
    int cal1, cal2, cal3, bandera=0;

    for(int i=1;bandera==0; i++)
    {
        for(int j=0, prom=0; j<=3; j++)
        {
            printf("dame tu primer calificacion\n");
            scanf("%d",& cal1);
            printf("dame tu segunda calificacion\n");
            scanf("%d",& cal2);
            printf("dame tu tercer calificacion\n");
            scanf("%d",& cal3);
            prom= (cal1 + cal2 + cal3)/3;
            if(prom>=60)
            {
                bandera=1;
            }
            if(bandera==1)
            {
                printf("alcanzaste el promedio necesario en una de las tres oportunidades.\n");
                break;
            }
            else
            {
                printf("no tienes el promedio necesario para pasar\n");
            }
            if(j==3)
            {
                break;
            }
        }
        
    }
    menu();
}