#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<windows.h>
#include <ctype.h>
/*#include<iostream>*/
/*#include<graphics.h>*/
int main ()

{
    system("cls");
    system("COLOR 0a");
    menu:
            system("cls");
            system("COLOR 0a");
        {

printf("\n            Hola soy tu INGENIERO y puedo ayudarte a realizar distintos calculos aplicados a nuestra formacion\n                                    utilizando los metodos numericos :D\n");
printf("                      ||=======================================================================||\n");
printf("                      ||   1 = Balances de Materia               4 = Fisicoquimica(Calculos de ||\n");
printf("                      ||                                             viscosidad)               ||\n");
printf("                      ||   2 = Termodinamica en sist abiertos.   5 = Calculadora(Diferencias   ||\n");
printf("                      ||       y cerrados                            de Electronegatividad)    ||\n");
printf("                      ||   3 = Calculadora Matricial                                           ||\n");
printf("                      ||                                         6 = Salir de  la aplicacion   ||\n");
printf("                      ||=======================================================================||\n");
int opcion;
printf("\n                                    Por favor, elige una opcion del menu de arriba\n");
printf("                                                               ");
scanf("%d",&opcion);
switch(opcion)
{
    balance:{///IMAGENES BALANCE DE MATERIA CON SIST. DE ECUACIONES
case 1:
    {
        system("color 0b");
        system("cls");
        printf("\n Este rubro tiene como proposito observar la aplicacion del metodo de gauss jordan\n para la resolucion de balances de materia en estado estacionario\n\n");
        printf("\n Por favor ingresa el balance que deseas observar\n 1 = Proceso de Mezclado de H2SO4 con HNO3 y  H2O\n 2 = Proceso de obtencion de Jugo de Naranja con divisor\n");
        int b;
        scanf("%d",&b);
        switch(b)
        {
        case 1: /// MEZCLADOR
            {
/*initwindow(400,400,"mezclador3",700,250); /// INSERCION DE IMAGEN
readimagefile("mezclador.jpg",0,0,400,400);	*/

                system("color 0c");
                printf("\n\n\n Proceso de Mezclado de H2SO4 con HNO3 y  H2O \n\n Por favor ingrese los valores de las concentraciones para el FLujo 1\n");
                float m[3][4]={0,0,0,0,0,0,0,0,0,0,0,0};
                float X[3][1]={0,0,0};
                printf("\n Ingresa el valor del flujo 4\n");
                float f1, f2, f3, f4, a4=0.4, w4=0.3, n4=0.3;
                f4 = 1000;
                printf("\n Corriente de salida  = %f kmol/hr",f4);
                int i, j;
                float w;
                for(i=0;i<3;i++)
                {
                    for(j=0;j<3;j++)
                    {
                        if(i==0)
                        {
                            printf("\n Por favor ingresa los porcentajes de Acido de cada corriente\n");
                            scanf("%f",&w);
                            m[i][j]=w;

                        }
                        if(i==1)
                        {
                            printf("\n Por favor ingresa los porcentajes de Agua de cada corriente\n");
                            scanf("%f",&w);
                            m[i][j]=w;

                        }
                        if(i==2)
                        {
                            printf("\n Por favor ingresa los porcentajes de A Nitrico de cada corriente\n");
                            scanf("%f",&w);
                            m[i][j]=w;

                        }
                    }
                }
                float xi[3][1]={0,0,0};
                for(i=0;i<3;i++)
                {
                    for(j=3;j<4;j++)
                    {
                        if(i==0)
                        {
                            m[i][j]=a4*f4;
                        }
                        if(i==1)
                        {
                            m[i][j]=w4*f4;
                        }
                        if(i==2)
                        {
                            m[i][j]=n4*f4;
                        }
                    }
                }
    /*printf("\n Por favor ingrese los valores del sistema de 3x4\n");
    float a;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%f",&a);
            m[i][j]=a;
        }
    }*/
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%f\t",m[i][j]);
        }
        printf("\n");
    }
    float ma[3][4]={0,0,0,0,0,0,0,0,0};
    printf("\n");
    float c;
    c = m[0][0];
  for(i=0;i<1;i++) // Hacer unos la primera linea
  {
      for(j=0;j<4;j++)
      {
          m[i][j]=(m[i][j]/c);

      }
  }
   for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%f\t",m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    float d, e, f;
    d = m[1][0];
    if(d<0)
    {
        e=d*-1;
    }
    else{
        printf("\n:D\n");
        e=d*-1;
    }
    for(i=1;i<2;i++) // Primer pivote (1era con 2da)
    {
        for(j=0;j<4;j++)
        {
            f = (m[0][j]*e)+(m[1][j]);
            m[i][j]=f;
        }
    }
      for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%f\t",m[i][j]);
        }
        printf("\n");
    }
    printf("\n"); ////Comienza 2do Pivote (1era -> 3era)
    d = m[2][0];
    if(d<0)
    {
        e=d*-1;
    }
    else{
        e=d*-1;
    }
    for(i=2;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            m[i][j]=(m[0][j]*e)+(m[i][j]);
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%f\t",m[i][j]);
        }
        printf("\n");
    }
    printf("\n"); /* Hacer unos segunda linea*/
    c = m[1][1];
    for(i=1;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            m[i][j]=m[i][j]/c;
        }
    }
for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%f\t",m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    d = m[0][1]; // Comienza pivote (2da con 1era)
    if(d<0)
    {
        e=d*-1;
    }
    else{

        e=d*-1;
    }
    for(i=0;i<1;i++)
    {
        for(j=0;j<4;j++)
        {
            m[i][j]=(m[1][j]*e)+(m[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%f\t",m[i][j]);
        }
        printf("\n");
    }
 printf("\n");

    printf("\n"); //Comienza tercer pivote (2da con 3era)
    d = m[2][1];
    if(d<0)
    {
        e=d*-1;
    }
    else{

        e=d*-1;
    }
    for(i=2;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            m[i][j]=(m[1][j]*e)+(m[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%f\t",m[i][j]);
        }
        printf("\n");
    }
     printf("\n"); /*Hacer unos tercera linea*/
    c = m[2][2];
    for(i=2;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            m[i][j]=m[i][j]/c;
        }
    }
for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%f\t",m[i][j]);
        }
        printf("\n");
    }
    printf("\n"); //Comienza tercer pivote (3ra con 1era)
    d = m[0][2];
    if(d<0)
    {
        e=d*-1;
    }
    else{

        e=d*-1;
    }
    for(i=0;i<1;i++)
    {
        for(j=0;j<4;j++)
        {
            m[i][j]=(m[2][j]*e)+(m[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%f\t",m[i][j]);
        }
        printf("\n");
    }

     printf("\n"); //Comienza cuarto pivote (3ra con 2da)
     printf("\n RESPUESTA AL SISTEMA DE ECUACIONES\n");
    d = m[1][2];
    if(d<0)
    {
        e=d*-1;
    }
    else{

        e=d*-1;
    }
    for(i=1;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            m[i][j]=(m[2][j]*e)+(m[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%f\t",m[i][j]);
        }
        printf("\n");
    }
    printf("\n Con ello, las corrientes son : \n Corriente 1 = %f \n Corriente 2 = %f \n Corriente 3 = %f",m[0][3],m[1][3],m[2][3]);
    printf("\n Y hemos resuelto el balance de materia para el Mezclador\n");

                break;
            }
        case 2: ///JUGO evaporador
            {
                /*
initwindow(400,400,"evaporador",700,250);
readimagefile("evaporador.jpg",0,0,400,400);*/

            system("color 0e");
            printf("\n\n Balance de Materia para la obtencion de jugo de naranja\n");
            printf("\n\n Comenzamos\n BALANCE GLOBAL (Entradas = Salidas) \n F1 = F4 + F6 \n");
            printf("\nBALANCE POR COMPONENTES \n Agua -> F1*ww1 = F4 + F6*ww6\n Solidos -> F1*ws1 = F6*ws6\n");
            float F1=100, ww1 = 0.855, ws1 = 0.145, F4, F6, ww6=0.72, ws6=0.38;
            printf("\n Con F1 = %f     y      ws1 = %f    podemos calcular F6 y F4\n", F1, ws1);
            F6 = (F1*ws1)/(ws6);
            F4 = F1-F6;
            printf("\n El valor para F6 = %f\n El valor para F4 = %f", F6, F4);
            printf("\n Pasamos al EVAPORADOR");
            float m[2][3]={0,0,0,0,0,0}, w;
            int i, j;
            for(i=0;i<2;i++)
            {
                for(j=0;j<2;j++)
                {
                    if(i==0)
                    {
                        printf("\n Ingresa las concentraciones de Agua\n");
                        scanf("%f",&w);
                        m[i][j]=w;
                    }
                    if(i==1)
                    {
                        printf("\n Ingresa las concentraciones de Solidos\n");
                        scanf("%f",&w);
                        m[i][j]=w;
                    }
                }
            }
            m[0][2]=F4;
            m[1][2]=0;
            for(i=0;i<2;i++)
            {
                for(j=0;j<3;j++)
                {
                    printf("%f\t",m[i][j]);
                }
                printf("\n");
            }
            float c, d;
            printf("\n");
            c = m[0][0];
            for(i=0;i<1;i++)
            {
                for(j=0;j<3;j++)
                {
                    d = m[i][j]/c;
                    m[i][j]=d;
                }
            }
              for(i=0;i<2;i++)
            {
                for(j=0;j<3;j++)
                {
                    printf("%f\t",m[i][j]);
                }
                printf("\n");
            }
                printf("\n");
            float e, f;
            e = m[1][0];
            for(i=0;i<2;i++)
            {
                for(j=0;j<3;j++)
                {
                f = m[i][j]*-1*e;
                m[1][j]=m[1][j]+f;
                }
            }
             for(i=0;i<2;i++)
            {
                for(j=0;j<3;j++)
                {
                    printf("%f\t",m[i][j]);
                }
                printf("\n");
            }
            printf("\n");
            c = m[1][1];
            for(i=1;i<2;i++)
            {
                for(j=0;j<3;j++)
                {
                    d = m[i][j]/c;
                    m[i][j]=d;
                }
            }
            for(i=0;i<2;i++) /// hicimos unos la 2da fiña
            {
                for(j=0;j<3;j++)
                {
                    printf("%f\t",m[i][j]);
                }
                printf("\n");
            }
  printf("\n");
            e = m[0][1];
            for(i=1;i<2;i++)
            {
                for(j=0;j<3;j++)
                {
                f = m[i][j]*-1*e;
                m[0][j]=m[0][j]+f;
                }
            }
             for(i=0;i<2;i++)
            {
                for(j=0;j<3;j++)
                {
                    printf("%f\t",m[i][j]);
                }
                printf("\n");
            }
            printf("\n");
            float F2, F5, F3;
            F2 = m[0][2];
            F5 = m[1][2];
            printf("\n Con ello, hemos conseguido los valores de F2 = %f    y F5 = %f\n", F2, F5);
            printf("\n Finalmente pasamos al divisor, mediante un despeje podemos conocer el valor de F3\n");
            F3 = F1-F2;
            printf("\n F3 = %f\n",F3);
            printf("\n Y el balance de Materia esta terminado :)\n");
                break;
            }
        }

        printf("\n\n          Que desea realizar?\n");
        printf("\n                1 = Realizar nuevo calculo                2 = Regresar al menu principal\n                             ");
        int a;
        scanf("%d",&a);
        switch(a)
        {
        case 1:
            {
                goto balance;
                break;
            }
        case 2:
            {
                system("cls");
                goto menu;
                break;
            }
        default:
            {
                system("cls");
                goto menu;
            }
        }
        break;
        }
    }
Termodinamica: /// INTERPOLACIONES EN TABLAS DE PRESION Y VAPOR PROCESOS TERMODINAMICOS
    {
case 2:
    {
        system("cls");
        system("COLOR 0b");
        printf("\n\n\n  INTERPOLACION EN TABLAS DE PRESION Y TEMPERATURA EN PROCESOS TERMODINAMICOS\n");
        printf("\n  Este rubro tiene como aplicacion el poder encontrar valores de presion de agua saturada\n a partir de la temperatura, y poder utilizar estos valores en calculos de energia en\n                 procesos isotermicos, isometricos y politropicos.");
        printf("\n\n");
        printf("\n                                                Que deseas calcular?\n                   ");
        printf("\n                   1  = Presion a partir de temperatura                2 = Temperatura  a partir de presion\n                                  Cualquier tecla = Regresar al menu principal\n");
        int a;
        scanf("%d",&a);
        switch(a)
        {
            ptot:
            {
        case 1: /// PRESION A PARTIR DE TEMPERATURA
            {
                 printf("\n\n\n  INTERPOLACION EN TABLAS DE PRESION Y TEMPERATURA EN PROCESOS TERMODINAMICOS\n");
        printf("\n  Este rubro tiene como aplicacion el poder encontrar valores de presion de agua saturada\n a partir de la temperatura, y poder utilizar estos valores en calculos de energia en\n                 procesos isotermicos, isometricos y politropicos.");
                printf("\nTemperatura(°C) \t\t Presion(Kpa)\n");
                printf("0.01 \t\t\t\t 0.6117\n");
                printf("5 \t\t\t\t 0.8725\n");
                printf("10 \t\t\t\t 1.2281\n");
                printf("15 \t\t\t\t 1.7057\n");
                printf("20 \t\t\t\t 2.3392\n");
                printf("25 \t\t\t\t 3.1698\n");
                printf("30 \t\t\t\t 4.2469\n");
                printf("35 \t\t\t\t 5.6291\n");
                printf("40 \t\t\t\t 7.3851\n");
                printf("45 \t\t\t\t 9.5953\n");
               /* printf("\n Que tipo de interpolacion deseas realizar?");
                printf("\n\n 1 = Lineal (2 Datos)             3 = Cubica (4 datos)   \n");
                printf("\n   2 = Cuadratica(3 datos)          4 = Cuarta (5 datos)   \n");
                int a;
                scanf("%d",&a); */
                printf("\n Por favor ingresa el valor de X que deseas conocer la presion\n");
                int contador=0;
                float X;
                float z;
                float x[5]={0, 0, 0, 0, 0};
                scanf("%f",&X);
                printf("\n Por favor ingrese los datos para X en forma consecutiva (Coloca -1 para terminar)\n");
                int i;
                for(i=0;i<5;i++)
                {
                    scanf("%f",&z);
                   if(z>0)
                   {
                       x[i]=z;
                       contador=contador+1;
                   }
                   else
                {
                    i=5;
                }
                }
                printf("\n Numero de coeficientes ingresados para X = %d\n\n", contador);
                printf("\n Por favor ingrese los datos para f(x) en forma consecutiva (Coloca -1 para terminar)\n");
                contador=0;
                int j;
                float zi, f[5]={0, 0, 0, 0, 0};
                for(i=0;i<5;i++)
                {
                    scanf("%f",&zi);
                   if(zi>0)
                   {
                       f[i]=zi;
                       contador=contador+1;
                   }
                   else
                {
                    i=5;
                }
                }
                printf("\n Numero de coeficientes ingresados para f(x) = %d\n\n", contador);
                float L[5]={0,0,0,0,0};
                float a, b=1;
                for(i=0;i<contador;i++)
                {
                    for(j=0;j<contador;j++)
                    {
                        if(i==j)
                        {

                        }
                        else{
                            a = (X-x[j])/(x[i]-x[j]);
                            b = a*b;
                        }
                    }
                    if(contador==2)
                    {
                         L[i]=a;
                    }
                    else
                    {
                        L[i]=b;
                        b=1;
                    }
                }
                for(i=0;i<contador;i++)
                {
                    printf("\nL = %f\n",L[i]);
                }
                float I, suma, total=0;
                for(i=0;i<contador;i++)
                {
                    for(j=0;j<contador;j++)
                    {

                        suma=L[i]*f[i];
                    }
                    //printf("%f",suma);
                    total = suma + total;
                }
                I = total;
                printf("\n\n El valor de la presion a la temperatura de %f Celsius  = %f\n",X, I);
                printf("\n\n          Deseas realizar mas calculos?\n\n     1 = Si   \n\n     Cualquier numero = Regresar al menu principal\n\n");
                int y;
                scanf("%d",&y);
                switch(y)
                {
                case 1:
                    {
                        system("cls");
                        goto ptot;
                    }
                    default:
                    {
                        system("cls");
                        goto menu;
                    }
                }


                }
                break;
            }
        case 2: /// TEMPERATURA A PARTIR DE PRESION
            {ttop:
                {
                     printf("\n\n\n  INTERPOLACION EN TABLAS DE PRESION Y TEMPERATURA EN PROCESOS TERMODINAMICOS\n");
        printf("\n  Este rubro tiene como aplicacion el poder encontrar valores de presion de agua saturada\n a partir de la temperatura, y poder utilizar estos valores en calculos de energia en\n                 procesos isotermicos, isometricos y politropicos.");


        float b0, b1, b2, b3;
float x, x0, x1, x2, x3;
float fx0, fx1, fx2, fx3, f2, f3;
int deseo;
printf("\n Presion(Kpa) \t\t Temperatura(°C)\n");
                printf(" 1.0  \t\t           6.97\n");
                printf(" 1.5  \t\t           13.02\n");
                printf(" 2.0  \t\t           17.50\n");
                printf(" 2.5  \t\t           21.08\n");
                printf(" 3.0  \t\t           24.08\n");
                printf(" 4.0  \t\t           28.96\n");
                printf(" 5.0  \t\t           32.87\n");
                printf(" 7.5  \t\t           40.29\n");
                printf(" 10   \t\t           45.81\n\n\n");
                printf("Presiona\n");
                printf("\ 1 para realizar una interpolacion cuadratica\n");
                printf("\ 2 para realizar una interpolacion cubica\n");
                scanf("%d",&deseo);
                switch(deseo)
                {//corchete inicio del swich

                 case 1:
                     {//corchete inicio de case 1
                         printf("Ingresa el valor de presion de que deseas calcular\n");
                         scanf("%f",&x);
                         printf("Declara la presion del primer valor\n");
                         scanf("%f",&x0);
                         printf("Declara la temperatura del primer valor\n");
                         scanf("%f",&fx0);
                         printf("Declara la presion del segundo valor\n");
                         scanf("%f",&x1);
                         printf("Declara la temperatura del segundo valor\n");
                         scanf("%f",&fx1);
                         printf("Declara la presion del tercer valor\n");
                         scanf("%f",&x2);
                         printf("Declara la temperatura del tercer valor\n");
                         scanf("%f",&fx2);
                         b0=fx0;
                         b1=((fx1-fx0)/(x1-x0));
                         b2=(((fx2-fx1)/(x2-x1))-((fx1-fx0)/(x1-x0)))/(x2-x0);
                         f2=b0+(b1)*(x-x0)+(b2)*(x-x0)*(x-x1);
                         printf("El valor de la temperatura es %f \n", f2);

                     break;}//corchete fin de case 1
                 case 2:
                   {

                    printf("Ingresa el valor de presion de que deseas calcular\n");
                         scanf("%f",&x);
                         printf("Declara la presion del primer valor\n");
                         scanf("%f",&x0);
                         printf("Declara la temperatura del primer valor\n");
                         scanf("%f",&fx0);
                         printf("Declara la presion del segundo valor\n");
                         scanf("%f",&x1);
                         printf("Declara la temperatura del segundo valor\n");
                         scanf("%f",&fx1);
                         printf("Declara la presion del tercer valor\n");
                         scanf("%f",&x2);
                         printf("Declara la temperatura del tercer valor\n");
                         scanf("%f",&fx2);
                        printf("Declara la presion del cuarto valor\n");
                         scanf("%f",&x3);
                         printf("Declara la temperatura del cuarto valor\n");
                         scanf("%f",&fx3);
                         b0=fx0;
                         b1=((fx1-fx0)/(x1-x0));
                         b2=(((fx2-fx1)/(x2-x1))-((fx1-fx0)/(x1-x0)))/(x2-x0);
                         b3=(((((fx3-fx2)/(x3-x2))-((fx2-fx1)/(x2-x1)))/(x3-x1))-((((fx2-fx1)/(x2-x1))-((fx1-fx0)/(x1-x0)))/(x2-x0)))/(x3-x0);
                         f3=b0+(b1)*(x-x0)+(b2)*(x-x0)*(x-x1)+(b3)*(x-x0)*(x-x1)*(x-x2);
                         printf("El valor de la temperatura es %f \n", f3);
                   break;}
                }//corchete fin del swich

                printf("\n\n    Que deseas realizar?\n\n         1 =    Realizar otro calculo       Cualquier numero = Regresar al menu");
                int o;
                scanf("%d",&o);
                switch(o)
                {
             case 1:
                {
                    system("cls");
                    goto ttop;
                }
             default:
                {
                    system("cls");
                    goto menu;
                }

                }
                }break;
            }
        default:
        {
            system("cls");
            goto menu;
        }
        }
        break;
    }
}
case 3:
            {
    ingresomatrices: /// COMIENZA CALCULADORA DE MATRICES
        {
        system("COLOR 0d");
        system("cls");
printf("\n   ****    CALCULADORA DE MATRICES    ****\n");
    int m,n;
    printf("\n Por favor ingresa no. de filas y columnas de la matriz A\n");
    scanf("%d",&m);
    scanf("%d",&n);
    int A[m][n];
    int i,j, v;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Ingresa valor para la posicion %d %d  =  ",i, j);
            scanf("%d",&v);
            A[i][j]=v;
        }
    } // Termina ingreso MATRIZ A

        int a,b, v1;
    printf("\n Por favor ingresa no. de filas y columnas de la matriz B\n");
    scanf("%d",&a);
    scanf("%d",&b);
    int B[a][b];
    int q,w, v2;
    for(q=0;q<a;q++)
    {
        for(w=0;w<b;w++)
        {
            printf("Ingresa valor para la posicion %d %d  =  ",q, w);
            scanf("%d",&v1);
            B[q][w] = v1;
        }
    }// Termina ingreso MATRIZ b
    menumatricial:
        {
    int i,j,C[m][b]; // Para multiplicacion
    for(i=0;i<m;i++)
    {
        for(j=0;j<b;j++)
        {
            C[i][j]=0;
        }
    }

    int deseo;

    printf("\n       Que deseas realizar con las matrices?\n");
    printf("  ||===================================================||\n");
    printf("  || 1 = Sumar Matrices       6 = Determinante de A    ||\n");
    printf("  || 2 = Restar Matrices      7 = Determinante de B    ||\n");
    printf("  || 3 = Multiplicar matrices 8 = Reingresar matrices  ||\n");
    printf("  || 4 = Traspuesta de A      9 = Volver al Menu       ||\n");
    printf("  || 5 = Traspuesta de B                               ||\n");
    printf("  ||===================================================||\n");
    printf("                           ");
    scanf("%d",&deseo);
    switch(deseo)
    {
    case 1:
        {
            int C[m][n]; // Matriz resultado
            printf("\n El resultado de la matriz es:\n");
            for(i=0;i<a;i++)
            {
                for(j=0;j<b;j++)
                {
                    C[i][j] = A[i][j]+ B[i][j];
                    printf("    %d\t",C[i][j]);
                }
                printf("   \n");


                }
                int x;
            printf("\n\n\nQue quieres hacer?\n");
   printf("\n  1 = Regresar al menu matricial        2 = Salir de la aplicacion\n                  ");
   scanf("%d",&x);
   switch(x)
   {
   case 1:
    {
        system("cls");
        goto menumatricial;
        break;
    }
   case 2:
    {
        system("cls");
        return 0;
        break;
    }
   }

            break;
        } // TERMINA SUMA
    case 2:
        {

            int C[m][n]; // Matriz resultado
            printf("\n El resultado de la matriz es:\n");
            for(i=0;i<a;i++)
            {
                for(j=0;j<b;j++)
                {
                    C[i][j] = A[i][j]- B[i][j];
                    printf("    %d\t",C[i][j]);
                }
                printf("   \n");
            }
                        printf("\n\n\nQue quieres hacer?\n");
   printf("\n  1 = Regresar al menu matricial        2 = Salir de la aplicacion\n                  ");
   int x;
   scanf("%d",&x);
   switch(x)
   {
   case 1:
    {
        system("cls");
        goto menumatricial;
        break;
    }
   case 2:
    {
        system("cls");
        return 0;
        break;
    }
   }

            break;
        } // termina RESTA;
    case 3:
        {
            int k;
            printf("\n El resultado de la multiplicacion es : \n");
            if(n==a)
            {
                for(i=0;i<m;i++)
    {
                    for (j=0;j<b;j++)
                    {
                        for (k=0;k<n;k++)
                        {
                        C[i][j]=C[i][j]+A[i][k]*B[k][j];
                            //printf ("%d\t",c[i][j]);
                        }
                        //printf("\n");
                        }
                        //printf("\n");

                        //para imprimir

                        }
                         for (i=0;i<m;i++)
                        {
                            for (j=0;j<b;j++)
                            {
                            printf ("%d\t",C[i][j]);
                            }
                            printf("\n");
                            }
            }
            else
            {
                printf("\n No se pueden realizar la multiplicacion (No de columnas de A no es igual a no. de filas de B\n");
                                                   printf("\n\n\nQue quieres hacer?\n");
   printf("\n  1 = Regresar al menu matricial        2 = Salir de la aplicacion\n                  ");
   int x;
   scanf("%d",&x);
   switch(x)
   {
   case 1:
    {
        system("cls");
        goto menumatricial;
        break;
    }
   case 2:
    {
        system("cls");
        return 0;
        break;
    }
   }
            }

            break;
        }// termina MULTIPLICACION
   case 4:
    {
        printf("La traspuesta de A es : \n");
        int i, j;
        for(j=0;j<n;j++)
        {
            for(i=0;i<m;i++)
            {
                printf("%d\t",A[i][j]);
            }
            printf("\n");
        }

                                                   printf("\n\n\nQue quieres hacer?\n");
   printf("\n  1 = Regresar al menu matricial        2 = Salir de la aplicacion\n                  ");
   int x;
   scanf("%d",&x);
   switch(x)
   {
   case 1:
    {
        system("cls");
        goto menumatricial;
        break;
    }
   case 2:
    {
        system("cls");
        return 0;
        break;
    }
   }
        break;
    }// Aqui termina TRASPUESTA A
   case 5:
        {
        printf("La traspuesta de B es : \n");
        int i, j, q, w;
        for(w=0;w<b;w++)
        {
            for(q=0;q<a;q++)
            {
                printf("%d\t",B[q][w]);
            }
            printf("\n");
        }

   printf("\n\n\nQue quieres hacer?\n");
   printf("\n  1 = Regresar al menu matricial        2 = Salir de la aplicacion\n                  ");
   int x;
   scanf("%d",&x);
   switch(x)
   {
   case 1:
    {
        system("cls");
        goto menumatricial;
        break;
    }
   case 2:
    {
        system("cls");
        return 0;
        break;
    }
   }
        break;
    }// Aqui termina TRASPUESTA B
   case 6:
    {
        printf("\n El determinante de A seria : \n");
        if(m==n)
        {
            if(m==2)// Para matrices 2x2
            {
                int aux;
                aux = (A[0][0]*A[1][1])-(A[0][1]*A[1][0]);
                printf(" Determinante = %d", aux);
            }
            else // Para matrices 3x3
            {
             int aux2;
             aux2=((A[0][0]*A[1][1]*A[2][2])+(A[1][0]*A[2][1]*A[0][2])+(A[2][0]*A[0][1]*A[1][2]))-((A[0][2]*A[1][1]*A[2][0])+(A[1][2]*A[2][1]*A[0][0])+(A[2][2]*A[0][1]*A[1][0]));
             printf("\n Determinante = %d",aux2);
            }
 printf("\n\n\nQue quieres hacer?\n");
   printf("\n  1 = Regresar al menu matricial        2 = Salir de la aplicacion\n                  ");
   int x;
   scanf("%d",&x);
   switch(x)
   {
   case 1:
    {
        system("cls");
        goto menumatricial;
        break;
    }
   case 2:
    {
        system("cls");
        return 0;
        break;
    }
   }
        }
        else
        {
            printf("\nSolo las matrices cuadradas tienend determinantes\n");
 printf("\n\n\nQue quieres hacer?\n");
   printf("\n  1 = Regresar al menu matricial        2 = Salir de la aplicacion\n                  ");
   int x;
   scanf("%d",&x);
   switch(x)
   {
   case 1:
    {
        system("cls");
        goto menumatricial;
        break;
    }
   case 2:
    {
        system("cls");
        return 0;
        break;
    }
   }
        }

    }//TERMINA EL DETERMINANTE DE A

   case 7:
    {
                printf("\n El determinante de A seria : \n");
        if(a==b)
        {
            if(a==2)// Para matrices 2x2
            {
                int aux;
                aux = (B[0][0]*B[1][1])-(B[0][1]*B[1][0]);
                printf(" Determinante = %d", aux);
            }
            else // Para matrices 3x3
            {
             int aux2;
             aux2=((B[0][0]*B[1][1]*B[2][2])+(B[1][0]*B[2][1]*B[0][2])+(B[2][0]*B[0][1]*B[1][2]))-((B[0][2]*B[1][1]*B[2][0])+(B[1][2]*B[2][1]*B[0][0])+(B[2][2]*B[0][1]*B[1][0]));
             printf("\n Determinante = %d",aux2);
            }
 printf("\n\n\nQue quieres hacer?\n");
   printf("\n  1 = Regresar al menu matricial        2 = Salir de la aplicacion\n                  ");
   int x;
   scanf("%d",&x);
   switch(x)
   {
   case 1:
    {
        system("cls");
        goto menumatricial;
        break;
    }
   case 2:
    {
        system("cls");
        return 0;
        break;
    }
   }
        }
        else
        {
            printf("\nSolo las matrices cuadradas tienend determinantes\n");
             printf("\n\n\nQue quieres hacer?\n");
   printf("\n  1 = Regresar al menu matricial        2 = Salir de la aplicacion\n                  ");
   int x;
   scanf("%d",&x);
   switch(x)
   {
   case 1:
    {
        system("cls");
        goto menumatricial;
        break;
    }
   case 2:
    {
        system("cls");
        return 0;
        break;
    }
   }
        }
break;
    }// termina DETERMINANTE B;
   case 8:
    {
        system("cls");
        goto ingresomatrices;
        break;
    }
   case 9:
    {
        system("cls");
        goto menu;
        break;
    }
    }





}// termina MENUMATRICIAL
                break;
            }
            } // Termina matrices
viscosidad: /// CALCULOS DE VISCOSIDAD DE MUESTRAS EN VISCOSIMETRO DE OSTWALD
    {
   case 4:
    {
        system("COLOR 0c");
        system("cls");
        printf("\n\n\n  INTERPOLACION EN TABLAS DE VISCOSIDAD Y CALCULOS DE VISCOSIDAD DE MUESTRAS \n");
        printf("\nEste rubro tiene como proposito aplicar calculos de viscosidad del agua a una temp. dada y despues aplicar\nla formula del viscosimetro de Ostwald\n");
                printf("\nTemperatura(°C) \t\t Viscosidad(Poise = N*s/m^2\n");
                printf("0 \t\t\t\t 1.781\n");
                printf("5 \t\t\t\t 1.518\n");
                printf("10 \t\t\t\t 1.306\n");
                printf("15 \t\t\t\t 1.139\n");
                printf("20 \t\t\t\t 1.002\n");
                printf("25 \t\t\t\t 0.890\n");
                printf("30 \t\t\t\t 0.798\n");
                printf("40 \t\t\t\t 0.653\n");
                printf("50 \t\t\t\t 0.547\n");
                printf("60 \t\t\t\t 0.466\n");
                  printf("\n Por favor ingresa el valor de X que deseas conocer la presion\n");
                int contador=0;
                float X;
                float z;
                float x[5]={0, 0, 0, 0, 0};
                scanf("%f",&X);
                printf("\n Por favor ingrese los datos para X en forma consecutiva (Coloca -1 para terminar)\n");
                int i;
                for(i=0;i<5;i++)
                {
                    scanf("%f",&z);
                   if(z>0)
                   {
                       x[i]=z;
                       contador=contador+1;
                   }
                   else
                {
                    i=5;
                }
                }
                printf("\n Numero de coeficientes ingresados para X = %d\n\n", contador);
                printf("\n Por favor ingrese los datos para f(x) en forma consecutiva (Coloca -1 para terminar)\n");
                contador=0;
                int j;
                float zi, f[5]={0, 0, 0, 0, 0};
                for(i=0;i<5;i++)
                {
                    scanf("%f",&zi);
                   if(zi>0)
                   {
                       f[i]=zi;
                       contador=contador+1;
                   }
                   else
                {
                    i=5;
                }
                }
                printf("\n Numero de coeficientes ingresados para f(x) = %d\n\n", contador);
                float L[5]={0,0,0,0,0};
                float a, b=1;
                for(i=0;i<contador;i++)
                {
                    for(j=0;j<contador;j++)
                    {
                        if(i==j)
                        {

                        }
                        else{
                            a = (X-x[j])/(x[i]-x[j]);
                            b = a*b;
                        }
                    }
                    if(contador==2)
                    {
                         L[i]=a;
                    }
                    else
                    {
                        L[i]=b;
                        b=1;
                    }
                }
                for(i=0;i<contador;i++)
                {
                    printf("\nL = %f\n",L[i]);
                }
                float I, suma, total=0;
                for(i=0;i<contador;i++)
                {
                    for(j=0;j<contador;j++)
                    {

                        suma=L[i]*f[i];
                    }
                    //printf("%f",suma);
                    total = suma + total;
                }
                I = total;
                printf("\n\n El valor de la viscosidad en Temp. de %f Celsius  = %f Poises\n",X, I);
                float tm, ta, pa = 998, pm;
                printf("\n Ingresa el tiempo que tardo la muestra en recorrer el capilar\n");
                scanf("%f",&tm);
                printf("\n Ingresa el tiempo que tardo el agua en recorrer el capilar\n");
                scanf("%f",&ta);
                printf("\n Ingresa la densidad de la muestra\n");
                scanf("%f",&pm);
                float vis;
                vis = (pm*tm*I)/(pa*ta);
                printf("\n\n El valor de la viscosidad de la muestra es %f Poises\n\n",vis);
                printf("\n\n          Deseas realizar mas calculos?\n\n     1 = Si   \n\n     Cualquier numero = Regresar al menu principal\n\n");
                int y;
                scanf("%d",&y);
                switch(y)
                {
                case 1:
                    {
                        system("cls");
                        goto ptot;
                    }
                    default:
                    {
                        system("cls");
                        goto menu;
                    }
                }

break;
                }
electronegatividad: /// TABLA PERIODICA Y CALCULADORA DE ELECTRONEGATIVIDAD
    {
    case 5:
    {
        system("cls");
        system("color 0a");
                        int z,a,i,o,b;
	float e1, e2, et;
	float e;
	char elemento[20]="";
	printf("\t\tTabla Periodica");
	printf("\n \n Bienvenido este progrma tiene la finalidad de que logres encontrar mas rapido ciertos datos de la tabla periodica\n ");
	printf("\n\nSelecciona una opcion segun el dato que tu conozcas:");
	printf("\n\n1.Numero Atomico");
	printf("\n\n2.Simbolo Quimico");
	printf("\n\n3.Nombre Quimico");
	printf("\n\n");
	scanf("%d", & o);
	switch(o){
		case 1:
	printf("\n Cuantos elementos quimicos deseas conocer\n");
	scanf("%d", & a);
	for (i=0;i<a;i++){
		printf("\n Cual es el numero Z de tu elemento quimico\n");
		scanf("%d", & z);
	switch(z){
			case 1: e=2.1; printf("\n Simbolo: H\n Nombre: HIDROGENO\n Oxidacion:+-1\n Peso atomico: 1.00794\n Z: 1\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 2: e=0; printf("\n Simbolo: He\n Nombre: HELIO\n Oxidacion: 0\n Peso atomico: 4.0026\n Z: 2\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 3: e=1.0; printf("\n Simbolo: Li\n Nombre: LITIO\n Oxidacion: 1\n Peso atomico: 6.941\n Z: 3\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 4: e=1.5; printf("\n Simbolo: Be\n Nombre:BERILIO\n Oxidacion: 2\n Peso atomico: 9.0122\n Z: 4\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 5: e=2.0; printf("\n Simbolo: B\n Nombre: BORO\n Oxidacion: 3\n Peso atomico: 10.811\n Z: 5\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 6: e=2.5; printf("\n Simbolo: C\n Nombre: CARBONO\n Oxidacion: +-4,2\n Peso atomico: 12.0107\n Z: 6\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 7: e=3.0; printf("\n Simbolo: N\n Nombre: NITROGENO\n Oxidacion: +-3,5,4,2\n Peso atomico: 14.0067\n Z: 7\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 8: e=3.5; printf("\n Simbolo: O\n Nombre: OXIGENO\n Oxidacion: -2\n Peso atomico: 15.9994\n Z: 8\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 9: e=4.0; printf("\n Simbolo: F\n Nombre: FLUOR\n Oxidacion: -1\n Peso atomico: 18.9984\n Z: 9\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 10: e=0; printf("\n Simbolo: Ne\n Nombre: NEON\n Oxidacion: 0\n Peso atomico: 20.183\n Z: 10\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 11: e=0.9; printf("\n Simbolo: Na\n Nombre: SODIO\n Oxidacion: 1\n Peso atomico: 22.9898\n Z: 11\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 12: e=1.2; printf("\n Simbolo: Mg\n Nombre: MAGNESIO\n Oxidacion: 2\n Peso atomico: 24.305\n Z: 12\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 13: e=1.5; printf("\n Simbolo: Al\n Nombre: ALUMINIO\n Oxidacion: 3\n Peso atomico: 26.9815\n Z: 13\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 14: e=1.8; printf("\n Simbolo: Si\n Nombre: SILICIO\n Oxidacion: 4\n Peso atomico: 28.0855\n Z: 14\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 15: e=2.1; printf("\n Simbolo: P\n Nombre: FOSFORO\n Oxidacion: +-3,5,4\n Peso atomico: 30.9738\n Z: 15\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 16: e=2.5; printf("\n Simbolo: S\n Nombre: AZUFRE\n Oxidacion: -2,4,3,6\n Peso atomico: 32.065\n Z: 16\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 17: e=3.0; printf("\n Simbolo: Cl\n Nombre: CLORO\n Oxidacion: +-1,3,4,5,6,7\n Peso atomico: 35.453\n Z: 17\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 18: e=0; printf("\n Simbolo: Ar\n Nombre: ARGON\n Oxidacion: 0\n Peso atomico: 39.948\n Z: 18\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 19: e=0.8; printf("\n Simbolo: K\n Nombre: POTASIO\n Oxidacion: 1\n Peso atomico: 39.102\n Z: 19\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 20: e=1.0; printf("\n Simbolo: Ca\n Nombre: CALCIO\n Oxidacion: 2\n Peso atomico: 40.08\n Z: 20\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 21: e=1.3; printf("\n Simbolo: Sc\n Nombre: ESCANDIO\n Oxidacion: 3\n Peso atomico: 44.956\n Z: 21\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 22: e=1.4; printf("\n Simbolo: Ti\n Nombre: TITANIO\n Oxidacion: 4,3\n Peso atomico: 47.90\n Z: 22\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 23: e=1.6; printf("\n Simbolo: V\n Nombre: VANADIO\n Oxidacion: 5,4,3,2\n Peso atomico: 50.942\n Z: 23\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 24: e=1.6; printf("\n Simbolo: Cr\n Nombre: CROMO\n Oxidacion: 6,3,2\n Peso atomico: 51.996\n Z: 24\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 25: e=1.5; printf("\n Simbolo: Mn\n Nombre: MANGANESO\n Oxidacion: 7,6,4,2,3\n Peso atomico: 54.9381\n Z: 25\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 26: e=1.8; printf("\n Simbolo: Fe\n Nombre: HIERRO\n Oxidacion: 2,3\n Peso atomico: 55.847\n Z: 26\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 27: e=1.8; printf("\n Simbolo: Co\n Nombre: COBALTO\n Oxidacion: 2,3\n Peso atomico: 58.9332\n Z: 27\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 28: e=1.8; printf("\n Simbolo: Ni\n Nombre: NIQUEL\n Oxidacion: 2,3\n Peso atomico: 58.71\n Z: 28\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 29: e=1.9; printf("\n Simbolo: Cu\n Nombre: COBRE\n Oxidacion: 2,1\n Peso atomico: 63.546\n Z: 29\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 30: e=1.6; printf("\n Simbolo: Zn\n Nombre: ZINC\n Oxidacion: 2\n Peso atomico: 63.37\n Z: 30\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 31: e=1.6; printf("\n Simbolo: Ga\n Nombre: GALIO\n Oxidacion: 3\n Peso atomico: 69.72\n Z: 31\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 32: e=1.8; printf("\n Simbolo: Ge\n Nombre: GERMANIO\n Oxidacion: 4\n Peso atomico: 72.59\n Z: 32\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 33: e=2.0; printf("\n Simbolo: As\n Nombre: ARSENICO\n Oxidacion: +-3,5\n Peso atomico: 74.9216\n Z: 33\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 34: e=2.4; printf("\n Simbolo: Se\n Nombre: SELENIO\n Oxidacion: 6,4,2\n Peso atomico: 78.96\n Z: 34\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 35: e=2.8; printf("\n Simbolo: Br\n Nombre: BROMO\n Oxidacion: 1,3,5\n Peso atomico: 79.909\n Z: 35\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 36: e=0; printf("\n Simbolo: Kr\n Nombre: KRIPTON\n Oxidacion: 0\n Peso atomico: 83.80\n Z: 36\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 37: e=0.8; printf("\n Simbolo: Rb\n Nombre: RUBIDIO\n Oxidacion: 1\n Peso atomico: 85.467\n Z: 37\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 38: e=1.0; printf("\n Simbolo: Sr\n Nombre: ESTRONCIO\n Oxidacion: 2\n Peso atomico: 87.62\n Z: 38\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 39: e=1.2; printf("\n Simbolo: Y\n Nombre: ITRIO\n Oxidacion: 3\n Peso atomico: 88.905\n Z: 39\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 40: e=1.4; printf("\n Simbolo: Zr\n Nombre: ZIRCONIO\n Oxidacion: 4\n Peso atomico: 91.22\n Z: 40\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 41: e=1.6; printf("\n Simbolo: Nb\n Nombre: NIOBIO\n Oxidacion: 5,3\n Peso atomico: 92.906\n Z: 41\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 42: e=1.8; printf("\n Simbolo: Mo\n Nombre: MOLIBDENO\n Oxidacion: 6,5,4,3,2\n Peso atomico: 95.94\n Z: 42\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 43: e=1.9; printf("\n Simbolo: Tc\n Nombre: TECNECIO\n Oxidacion: 7\n Peso atomico: 99\n Z: 43\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 44: e=2.2; printf("\n Simbolo: Ru\n Nombre: RUTENIO\n Oxidacion: 2,3,4,6,8\n Peso atomico: 101.07\n Z: 44\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 45: e=2.2; printf("\n Simbolo: Rh\n Nombre: RODIO\n Oxidacion: 2,3,4\n Peso atomico: 102.905\n Z: 45\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 46: e=2.2; printf("\n Simbolo: Pd\n Nombre: PALADIO\n Oxidacion: 2,4\n Peso atomico: 106.42\n Z: 46\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 47: e=1.9; printf("\n Simbolo: Ag\n Nombre: PLATA\n Oxidacion: 1\n Peso atomico: 107.868\n Z: 47\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 48: e=1.7; printf("\n Simbolo: Cd\n Nombre: CADMIO\n Oxidacion: 2\n Peso atomico: 112.40\n Z: 48\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 49: e=1.7; printf("\n Simbolo: In\n Nombre: INDIO\n Oxidacion: 3\n Peso atomico: 114.82\n Z: 49\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 50: e=1.8; printf("\n Simbolo: Sn\n Nombre: ESTAÑO\n Oxidacion: 4,2\n Peso atomico: 118.69\n Z: 50\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 51: e=1.9; printf("\n Simbolo: Sb\n Nombre: ANTIMONIO\n Oxidacion: +-3,5\n Peso atomico: 121.75\n Z: 51\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 52: e=2.1; printf("\n Simbolo: Te\n Nombre: TELURIO\n Oxidacion: 6,4,-2\n Peso atomico: 127.60\n Z: 52\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 53: e=2.5; printf("\n Simbolo: I\n Nombre: YODO\n Oxidacion: +-1,3,5,7\n Peso atomico: 126.9044\n Z: 53\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 54: e=0; printf("\n Simbolo: Xe\n Nombre: XENON\n Oxidacion: 0\n Peso atomico: 131.30\n Z: 54\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 55: e=0.7; printf("\n Simbolo: Cs\n Nombre: CESIO\n Oxidacion: 1\n Peso atomico: 132.905\n Z: 55\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 56: e=0.9; printf("\n Simbolo: Ba\n Nombre: BARIO\n Oxidacion: 2\n Peso atomico: 137.34\n Z: 56\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 57: e=1.1; printf("\n Simbolo: La\n Nombre: LANTANO\n Oxidacion: 3\n Peso atomico: 138.905\n Z: 57\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 58: e=1.12; printf("\n Simbolo: Ce\n Nombre: CERIO\n Oxidacion: 3,4\n Peso atomico: 140.12\n Z: 58\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 59: e=1.13; printf("\n Simbolo: Pr\n Nombre: PRASEODIMIO\n Oxidacion: 3,4\n Peso atomico: 140.9\n Z: 59\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 60: e=1.14; printf("\n Simbolo: Nd\n Nombre: NEODIMIO\n Oxidacion: 3\n Peso atomico: 144.24\n Z: 60\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 61: e=1.13; printf("\n Simbolo: Pm\n Nombre: PROMETIO\n Oxidacion: 3\n Peso atomico: 147\n Z: 61\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 62: e=1.17; printf("\n Simbolo: Sm\n Nombre: SAMARIO\n Oxidacion: 3,2\n Peso atomico: 150.35\n Z: 62\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 63: e=1.1; printf("\n Simbolo: Eu\n Nombre: EUROPIO\n Oxidacion: 3,2\n Peso atomico: 151.965\n Z: 63\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 64: e=1.1; printf("\n Simbolo: Gd\n Nombre: GADOLINIO\n Oxidacion: 3\n Peso atomico: 157.25\n Z: 64\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 65: e=1.1; printf("\n Simbolo: Tb\n Nombre: TERBIO\n Oxidacion: 3,4\n Peso atomico: 158.924\n Z: 65\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 66: e=1.1;printf("\n Simbolo: Dy\n Nombre: DISPROSIO\n Oxidacion: 3\n Peso atomico: 162.5\n Z: 66\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 67: e=1.1;printf("\n Simbolo: Ho\n Nombre: HOLMIO\n Oxidacion: 3\n Peso atomico: 164.930\n Z: 67\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 68: e=1.1;printf("\n Simbolo: Er\n Nombre: ERBIO\n Oxidacion: 3\n Peso atomico: 167.26\n Z: 68\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 69: e=1.1;printf("\n Simbolo: Tm\n Nombre: TULIO\n Oxidacion: 3,2\n Peso atomico: 168.934\n Z: 69\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 70: e=1.1;printf("\n Simbolo: Yb\n Nombre: ITERBIO\n Oxidacion: 3,2\n Peso atomico: 173.04\n Z: 70\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 71: e=1.27;printf("\n Simbolo: Lu\n Nombre: LUTECIO\n Oxidacion: 3\n Peso atomico: 174.97\n Z: 71\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 72: e=1.3;printf("\n Simbolo: Hf\n Nombre: HAFNIO\n Oxidacion: 4\n Peso atomico: 178.49\n Z: 72\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 73: e=1.5;printf("\n Simbolo: Ta\n Nombre: TANTALIO\n Oxidacion: 5\n Peso atomico: 180.947\n Z: 73\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 74: e=1.7;printf("\n Simbolo: W\n Nombre: TUNGSTENO\n Oxidacion: 6,5,4,3,2\n Peso atomico: 183.85\n Z: 74\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 75: e=1.9;printf("\n Simbolo: Re\n Nombre: RENIO\n Oxidacion: 7,6,4,2,-1\n Peso atomico: 186.21\n Z: 75\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 76: e=2.2;printf("\n Simbolo: Os\n Nombre: OSMIO\n Oxidacion: 2,3,4,6,8\n Peso atomico: 190.2\n Z: 76\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 77: e=2.2;printf("\n Simbolo: Ir\n Nombre: IRIDIO\n Oxidacion: 2,3,4,6\n Peso atomico: 192.2\n Z: 77\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 78: e=2.2;printf("\n Simbolo: Pt\n Nombre: PLATINO\n Oxidacion: 2,4\n Peso atomico: 195.09\n Z: 78\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 79: e=2.4;printf("\n Simbolo: Au\n Nombre: ORO\n Oxidacion: 3,1\n Peso atomico: 196.967\n Z: 79\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 80: e=1.9;printf("\n Simbolo: Hg\n Nombre: MERCURIO\n Oxidacion: 2,1\n Peso atomico: 200.59\n Z: 80\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 81: e=1.8;printf("\n Simbolo: Tl\n Nombre: TALIO\n Oxidacion: 3,1\n Peso atomico: 204.3833\n Z: 81\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 82: e=1.8;printf("\n Simbolo: Pb\n Nombre: PLOMO\n Oxidacion: 4,2\n Peso atomico: 207.19\n Z: 82\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 83: e=1.9;printf("\n Simbolo: Bi\n Nombre: BISMUTO\n Oxidacion: 3,5\n Peso atomico: 208.98\n Z: 83\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 84: e=2.0;printf("\n Simbolo: Po\n Nombre: POLONIO\n Oxidacion: 4,2\n Peso atomico: 209\n Z: 84\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 85: e=2.2;printf("\n Simbolo: At\n Nombre: ASTATO\n Oxidacion: +-1,3,5,7\n Peso atomico: 210\n Z: 85\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 86: e=0;printf("\n Simbolo: Rn\n Nombre: RADON\n Oxidacion: O\n Peso atomico: 222\n Z: 86\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 87: e=0.7;printf("\n Simbolo: Fr\n Nombre: FRANCIO\n Oxidacion: 1\n Peso atomico: 223\n Z: 87\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 88: e=0.7;printf("\n Simbolo: Ra\n Nombre: RADIO\n Oxidacion: 2\n Peso atomico: 226\n Z: 88\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 89: e=1.1;printf("\n Simbolo: Ac\n Nombre: ACTINIO\n Oxidacion: 3\n Peso atomico: 227.027\n Z: 89\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 90: e=1.3;printf("\n Simbolo: Th\n Nombre: TORIO\n Oxidacion: 4\n Peso atomico: 232.038\n Z: 90\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 91: e=1.4;printf("\n Simbolo: Pa\n Nombre: PROTACTINIO\n Oxidacion: 5,4\n Peso atomico: 231.035\n Z: 91\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 92: e=1.4;printf("\n Simbolo: U\n Nombre: URANIO\n Oxidacion: 6,5,4,3\n Peso atomico: 238.03\n Z: 92\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 93: e=1.4;printf("\n Simbolo: Np\n Nombre: NEPTUNIO\n Oxidacion: 6,5,4,3\n Peso atomico: 237.0482\n Z: 93\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 94: e=1.22;printf("\n Simbolo: Pu\n Nombre: PLUTONIO\n Oxidacion: 6,5,4,3\n Peso atomico: 244\n Z: 94\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 95: e=1.3;printf("\n Simbolo: Am\n Nombre: AMERICIO\n Oxidacion: 6,5,4,3\n Peso atomico: 243\n Z: 95\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 96: e=1.3;printf("\n Simbolo: Cm\n Nombre: CURIO\n Oxidacion: 3\n Peso atomico: 247\n Z: 96\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 97: e=1.3;printf("\n Simbolo: Bk\n Nombre: BERKELIO\n Oxidacion: 4,3\n Peso atomico: 247\n Z: 97\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 98: e=1.3;printf("\n Simbolo: Cf\n Nombre: CALIFORNIO\n Oxidacion: 3\n Peso atomico: 251\n Z: 98\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 99: e=1.3;printf("\n Simbolo: Es\n Nombre: EINSTENIO\n Oxidacion: \n Peso atomico: 252\n Z: 99\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 100: e=1.3;printf("\n Simbolo: Fm\n Nombre: FERMIO\n Oxidacion: \n Peso atomico: 257\n Z: 100\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 101: e=1.3;printf("\n Simbolo: Md\n Nombre: MENDELEVIO\n Oxidacion: \n Peso atomico: 258\n Z: 101\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 102: e=1.3;printf("\n Spimbolo: No\n Nombre: NOBELIO\n Oxidacion: \n Peso atomico: 259\n Z: 102\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 103: e=0;printf("\n Simbolo: Lr\n Nombre: LAWRENCIO\n Oxidacion: \n Peso atomico: 260\n Z: 103\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 104: e=0;printf("\n Simbolo: Rf\n Nombre: RUTHERFORDIO\n Oxidacion: \n Peso atomico: 257\n Z: 104\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 105: e=0;printf("\n Simbolo: Db\n Nombre: DUBNIO\n Oxidacion: \n Peso atomico: 260\n Z: 105\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 106: e=0;printf("\n Simbolo: Sg\n Nombre: SEABORGIO\n Oxidacion: \n Peso atomico: 263\n Z: 106\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 107: e=0;printf("\n Simbolo: Bh\n Nombre: BOHRIO\n Oxidacion: \n Peso atomico: 262\n Z: 107\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 108: e=0;printf("\n Simbolo: Hs\n Nombre: HASSIO\n Oxidacion: \n Peso atomico: 265\n Z: 108\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 109: e=0;printf("\n Simbolo: Mt\n Nombre: MEITNERIO\n Oxidacion: \n Peso atomico: 266\n Z: 109\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 110: e=0;printf("\n Simbolo: Ds\n Nombre: DARMSTADTIO\n Oxidacion: +-2,4\n Peso atomico: 269\n Z: 110\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 111: e=0;printf("\n Simbolo: Rg\n Nombre: ROENTGENIO\n Oxidacion: 3,2\n Peso atomico: 269\n Z: 111\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 112: e=0;printf("\n Simbolo: Da\n Nombre: DARWANZIO\n Oxidacion: 4,5,4,3\n Peso atomico: 264\n Z: 112\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 113: e=0;printf("\n Simbolo: Tf\n Nombre: TUSTRANO\n Oxidacion: 3\n Peso atomico: 272\n Z: 113\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 114: e=0;printf("\n Simbolo: Eo\n Nombre: ERRISTENEO\n Oxidacion: 4,6,4,2\n Peso atomico: 276\n Z: 114\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 115: e=0;printf("\n Simbolo: Me\n Nombre: MERCHEL\n Oxidacion: 5,4,5,1\n Peso atomico: 279\n Z: 115\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 116: e=0;printf("\n Simbolo: Nc\n Nombre: NECTARTEN\n Oxidacion: 5,4,5,3\n Peso atomico: 282\n Z: 116\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 117: e=0;printf("\n Simbolo: El\n Nombre: EFELIO\n Oxidacion: 2,3,2,1\n Peso atomico: 286\n Z: 117\n Electronegatividad de Pauling=%f\n",e);
			break;
			case 118: e=0;printf("\n Simbolo: On\n Nombre: OBERON\n Oxidacion: 4,7\n Peso atomico: 288\n Z: 118\n Electronegatividad de Pauling=%f\n",e);
			break;
			default: printf("solo existen 118 elementos\n");
		}
	}
	break;
	case 2:printf("\n Cuantos elementos quimicos deseas conocer\n");
	scanf("%d", & a);
	for (i=0;i<a;i++){
	printf("\nDigita el simbolo de tu elemento quimico, recuerda que solo la primer letra es mayuscula\n");
	scanf("%s",&elemento);
if(strcmp(elemento,"H")==0){e=2.1; printf("\n Simbolo: H\n Nombre: HIDROGENO\n Oxidacion:+-1\n Peso atomico: 1.00794\n Z: 1\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"He")==0){e=0; printf("\n Simbolo: He\n Nombre: HELIO\n Oxidacion: 0\n Peso atomico: 4.0026\n Z: 2\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Li")==0){e=1.0; printf("\n Simbolo: Li\n Nombre: LITIO\n Oxidacion: 1\n Peso atomico: 6.941\n Z: 3\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Be")==0){e=1.5; printf("\n Simbolo: Be\n Nombre:BERILIO\n Oxidacion: 2\n Peso atomico: 9.0122\n Z: 4\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"B")==0){e=2.0; printf("\n Simbolo: B\n Nombre: BORO\n Oxidacion: 3\n Peso atomico: 10.811\n Z: 5\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"C")==0){e=2.5; printf("\n Simbolo: C\n Nombre: CARBONO\n Oxidacion: +-4,2\n Peso atomico: 12.0107\n Z: 6\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"N")==0){e=3.0; printf("\n Simbolo: N\n Nombre: NITROGENO\n Oxidacion: +-3,5,4,2\n Peso atomico: 14.0067\n Z: 7\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"O")==0){e=3.5; printf("\n Simbolo: O\n Nombre: OXIGENO\n Oxidacion: -2\n Peso atomico: 15.9994\n Z: 8\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"F")==0){e=4.0; printf("\n Simbolo: F\n Nombre: FLUOR\n Oxidacion: -1\n Peso atomico: 18.9984\n Z: 9\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Ne")==0){e=0; printf("\n Simbolo: Ne\n Nombre: NEON\n Oxidacion: 0\n Peso atomico: 20.183\n Z: 10\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Na")==0){e=0.9; printf("\n Simbolo: Na\n Nombre: SODIO\n Oxidacion: 1\n Peso atomico: 22.9898\n Z: 11\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Mg")==0){e=1.2; printf("\n Simbolo: Mg\n Nombre: MAGNESIO\n Oxidacion: 2\n Peso atomico: 24.305\n Z: 12\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Al")==0){e=1.5; printf("\n Simbolo: Al\n Nombre: ALUMINIO\n Oxidacion: 3\n Peso atomico: 26.9815\n Z: 13\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Si")==0){e=1.8; printf("\n Simbolo: Si\n Nombre: SILICIO\n Oxidacion: 4\n Peso atomico: 28.0855\n Z: 14\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"P")==0){e=2.1; printf("\n Simbolo: P\n Nombre: FOSFORO\n Oxidacion: +-3,5,4\n Peso atomico: 30.9738\n Z: 15\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"S")==0){e=2.5; printf("\n Simbolo: S\n Nombre: AZUFRE\n Oxidacion: -2,4,3,6\n Peso atomico: 32.065\n Z: 16\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Cl")==0){e=3.0; printf("\n Simbolo: Cl\n Nombre: CLORO\n Oxidacion: +-1,3,4,5,6,7\n Peso atomico: 35.453\n Z: 17\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Ar")==0){e=0; printf("\n Simbolo: Ar\n Nombre: ARGON\n Oxidacion: 0\n Peso atomico: 39.948\n Z: 18\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"K")==0){e=0.8; printf("\n Simbolo: K\n Nombre: POTASIO\n Oxidacion: 1\n Peso atomico: 39.102\n Z: 19\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Ca")==0){e=1.0; printf("\n Simbolo: Ca\n Nombre: CALCIO\n Oxidacion: 2\n Peso atomico: 40.08\n Z: 20\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Sc")==0){e=1.3; printf("\n Simbolo: Sc\n Nombre: ESCANDIO\n Oxidacion: 3\n Peso atomico: 44.956\n Z: 21\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Ti")==0){e=1.4; printf("\n Simbolo: Ti\n Nombre: TITANIO\n Oxidacion: 4,3\n Peso atomico: 47.90\n Z: 22\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"V")==0){e=1.6; printf("\n Simbolo: V\n Nombre: VANADIO\n Oxidacion: 5,4,3,2\n Peso atomico: 50.942\n Z: 23\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Cr")==0){e=1.6; printf("\n Simbolo: Cr\n Nombre: CROMO\n Oxidacion: 6,3,2\n Peso atomico: 51.996\n Z: 24\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Mn")==0){e=1.5; printf("\n Simbolo: Mn\n Nombre: MANGANESO\n Oxidacion: 7,6,4,2,3\n Peso atomico: 54.9381\n Z: 25\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Fe")==0){e=1.8; printf("\n Simbolo: Fe\n Nombre: HIERRO\n Oxidacion: 2,3\n Peso atomico: 55.847\n Z: 26\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Co")==0){e=1.8; printf("\n Simbolo: Co\n Nombre: COBALTO\n Oxidacion: 2,3\n Peso atomico: 58.9332\n Z: 27\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Ni")==0){e=1.8; printf("\n Simbolo: Ni\n Nombre: NIQUEL\n Oxidacion: 2,3\n Peso atomico: 58.71\n Z: 28\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Cu")==0){e=1.9; printf("\n Simbolo: Cu\n Nombre: COBRE\n Oxidacion: 2,1\n Peso atomico: 63.546\n Z: 29\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Zn")==0){e=1.6; printf("\n Simbolo: Zn\n Nombre: ZINC\n Oxidacion: 2\n Peso atomico: 63.37\n Z: 30\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Ga")==0){e=1.6; printf("\n Simbolo: Ga\n Nombre: GALIO\n Oxidacion: 3\n Peso atomico: 69.72\n Z: 31\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Ge")==0){e=1.8; printf("\n Simbolo: Ge\n Nombre: GERMANIO\n Oxidacion: 4\n Peso atomico: 72.59\n Z: 32\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"As")==0){e=2.0; printf("\n Simbolo: As\n Nombre: ARSENICO\n Oxidacion: +-3,5\n Peso atomico: 74.9216\n Z: 33\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Se")==0){e=2.4; printf("\n Simbolo: Se\n Nombre: SELENIO\n Oxidacion: 6,4,2\n Peso atomico: 78.96\n Z: 34\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Br")==0){e=2.8; printf("\n Simbolo: Br\n Nombre: BROMO\n Oxidacion: 1,3,5\n Peso atomico: 79.909\n Z: 35\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Kr")==0){e=0; printf("\n Simbolo: Kr\n Nombre: KRIPTON\n Oxidacion: 0\n Peso atomico: 83.80\n Z: 36\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Rb")==0){e=0.8; printf("\n Simbolo: Rb\n Nombre: RUBIDIO\n Oxidacion: 1\n Peso atomico: 85.467\n Z: 37\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Sr")==0){e=1.0; printf("\n Simbolo: Sr\n Nombre: ESTRONCIO\n Oxidacion: 2\n Peso atomico: 87.62\n Z: 38\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Y")==0){e=1.2; printf("\n Simbolo: Y\n Nombre: ITRIO\n Oxidacion: 3\n Peso atomico: 88.905\n Z: 39\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Zr")==0){e=1.4; printf("\n Simbolo: Zr\n Nombre: ZIRCONIO\n Oxidacion: 4\n Peso atomico: 91.22\n Z: 40\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Nb")==0){e=1.6; printf("\n Simbolo: Nb\n Nombre: NIOBIO\n Oxidacion: 5,3\n Peso atomico: 92.906\n Z: 41\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Mo")==0){e=1.8; printf("\n Simbolo: Mo\n Nombre: MOLIBDENO\n Oxidacion: 6,5,4,3,2\n Peso atomico: 95.94\n Z: 42\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Tc")==0){e=1.9; printf("\n Simbolo: Tc\n Nombre: TECNECIO\n Oxidacion: 7\n Peso atomico: 99\n Z: 43\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Ru")==0){e=2.2; printf("\n Simbolo: Ru\n Nombre: RUTENIO\n Oxidacion: 2,3,4,6,8\n Peso atomico: 101.07\n Z: 44\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Rh")==0){e=2.2; printf("\n Simbolo: Rh\n Nombre: RODIO\n Oxidacion: 2,3,4\n Peso atomico: 102.905\n Z: 45\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Pd")==0){e=2.2; printf("\n Simbolo: Pd\n Nombre: PALADIO\n Oxidacion: 2,4\n Peso atomico: 106.42\n Z: 46\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Ag")==0){e=1.9; printf("\n Simbolo: Ag\n Nombre: PLATA\n Oxidacion: 1\n Peso atomico: 107.868\n Z: 47\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Cd")==0){e=1.7; printf("\n Simbolo: Cd\n Nombre: CADMIO\n Oxidacion: 2\n Peso atomico: 112.40\n Z: 48\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"In")==0){e=1.7; printf("\n Simbolo: In\n Nombre: INDIO\n Oxidacion: 3\n Peso atomico: 114.82\n Z: 49\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Sn")==0){e=1.8; printf("\n Simbolo: Sn\n Nombre: ESTAÑO\n Oxidacion: 4,2\n Peso atomico: 118.69\n Z: 50\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Sb")==0){e=1.9; printf("\n Simbolo: Sb\n Nombre: ANTIMONIO\n Oxidacion: +-3,5\n Peso atomico: 121.75\n Z: 51\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Te")==0){e=2.1; printf("\n Simbolo: Te\n Nombre: TELURIO\n Oxidacion: 6,4,-2\n Peso atomico: 127.60\n Z: 52\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"I")==0){e=2.5; printf("\n Simbolo: I\n Nombre: YODO\n Oxidacion: +-1,3,5,7\n Peso atomico: 126.9044\n Z: 53\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Xe")==0){e=0; printf("\n Simbolo: Xe\n Nombre: XENON\n Oxidacion: 0\n Peso atomico: 131.30\n Z: 54\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Cs")==0){e=0.7; printf("\n Simbolo: Cs\n Nombre: CESIO\n Oxidacion: 1\n Peso atomico: 132.905\n Z: 55\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Ba")==0){e=0.9; printf("\n Simbolo: Ba\n Nombre: BARIO\n Oxidacion: 2\n Peso atomico: 137.34\n Z: 56\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"La")==0){e=1.1; printf("\n Simbolo: La\n Nombre: LANTANO\n Oxidacion: 3\n Peso atomico: 138.905\n Z: 57\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Ce")==0){e=1.12; printf("\n Simbolo: Ce\n Nombre: CERIO\n Oxidacion: 3,4\n Peso atomico: 140.12\n Z: 58\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Pr")==0){e=1.13; printf("\n Simbolo: Pr\n Nombre: PRASEODIMIO\n Oxidacion: 3,4\n Peso atomico: 140.9\n Z: 59\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Nd")==0){e=1.14; printf("\n Simbolo: Nd\n Nombre: NEODIMIO\n Oxidacion: 3\n Peso atomico: 144.24\n Z: 60\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Pm")==0){e=1.13; printf("\n Simbolo: Pm\n Nombre: PROMETIO\n Oxidacion: 3\n Peso atomico: 147\n Z: 61\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Sm")==0){e=1.17; printf("\n Simbolo: Sm\n Nombre: SAMARIO\n Oxidacion: 3,2\n Peso atomico: 150.35\n Z: 62\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Eu")==0){e=1.1; printf("\n Simbolo: Eu\n Nombre: EUROPIO\n Oxidacion: 3,2\n Peso atomico: 151.965\n Z: 63\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Gd")==0){e=1.1; printf("\n Simbolo: Gd\n Nombre: GADOLINIO\n Oxidacion: 3\n Peso atomico: 157.25\n Z: 64\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Tb")==0){e=1.1; printf("\n Simbolo: Tb\n Nombre: TERBIO\n Oxidacion: 3,4\n Peso atomico: 158.924\n Z: 65\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Dy")==0){e=1.1;printf("\n Simbolo: Dy\n Nombre: DISPROSIO\n Oxidacion: 3\n Peso atomico: 162.5\n Z: 66\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Ho")==0){e=1.1;printf("\n Simbolo: Ho\n Nombre: HOLMIO\n Oxidacion: 3\n Peso atomico: 164.930\n Z: 67\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Er")==0){e=1.1;printf("\n Simbolo: Er\n Nombre: ERBIO\n Oxidacion: 3\n Peso atomico: 167.26\n Z: 68\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Tm")==0){e=1.1;printf("\n Simbolo: Tm\n Nombre: TULIO\n Oxidacion: 3,2\n Peso atomico: 168.934\n Z: 69\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Yb")==0){e=1.1;printf("\n Simbolo: Yb\n Nombre: ITERBIO\n Oxidacion: 3,2\n Peso atomico: 173.04\n Z: 70\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Lu")==0){e=1.27;printf("\n Simbolo: Lu\n Nombre: LUTECIO\n Oxidacion: 3\n Peso atomico: 174.97\n Z: 71\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Hf")==0){e=1.3;printf("\n Simbolo: Hf\n Nombre: HAFNIO\n Oxidacion: 4\n Peso atomico: 178.49\n Z: 72\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Ta")==0){e=1.5;printf("\n Simbolo: Ta\n Nombre: TANTALIO\n Oxidacion: 5\n Peso atomico: 180.947\n Z: 73\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"W")==0){e=1.7;printf("\n Simbolo: W\n Nombre: TUNGSTENO\n Oxidacion: 6,5,4,3,2\n Peso atomico: 183.85\n Z: 74\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Re")==0){e=1.9;printf("\n Simbolo: Re\n Nombre: RENIO\n Oxidacion: 7,6,4,2,-1\n Peso atomico: 186.21\n Z: 75\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Os")==0){e=2.2;printf("\n Simbolo: Os\n Nombre: OSMIO\n Oxidacion: 2,3,4,6,8\n Peso atomico: 190.2\n Z: 76\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Ir")==0){e=2.2;printf("\n Simbolo: Ir\n Nombre: IRIDIO\n Oxidacion: 2,3,4,6\n Peso atomico: 192.2\n Z: 77\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Pt")==0){e=2.2;printf("\n Simbolo: Pt\n Nombre: PLATINO\n Oxidacion: 2,4\n Peso atomico: 195.09\n Z: 78\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Au")==0){e=2.4;printf("\n Simbolo: Au\n Nombre: ORO\n Oxidacion: 3,1\n Peso atomico: 196.967\n Z: 79\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Hg")==0){e=1.9;printf("\n Simbolo: Hg\n Nombre: MERCURIO\n Oxidacion: 2,1\n Peso atomico: 200.59\n Z: 80\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Tl")==0){e=1.8;printf("\n Simbolo: Tl\n Nombre: TALIO\n Oxidacion: 3,1\n Peso atomico: 204.3833\n Z: 81\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Pb")==0){e=1.8;printf("\n Simbolo: Pb\n Nombre: PLOMO\n Oxidacion: 4,2\n Peso atomico: 207.19\n Z: 82\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Bi")==0){e=1.9;printf("\n Simbolo: Bi\n Nombre: BISMUTO\n Oxidacion: 3,5\n Peso atomico: 208.98\n Z: 83\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Po")==0){e=2.0;printf("\n Simbolo: Po\n Nombre: POLONIO\n Oxidacion: 4,2\n Peso atomico: 209\n Z: 84\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"At")==0){e=2.2;printf("\n Simbolo: At\n Nombre: ASTATO\n Oxidacion: +-1,3,5,7\n Peso atomico: 210\n Z: 85\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Rn")==0){e=0;printf("\n Simbolo: Rn\n Nombre: RADON\n Oxidacion: O\n Peso atomico: 222\n Z: 86\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Fr")==0){e=0.7;printf("\n Simbolo: Fr\n Nombre: FRANCIO\n Oxidacion: 1\n Peso atomico: 223\n Z: 87\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Ra")==0){e=0.7;printf("\n Simbolo: Ra\n Nombre: RADIO\n Oxidacion: 2\n Peso atomico: 226\n Z: 88\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Ac")==0){ e=1.1;printf("\n Simbolo: Ac\n Nombre: ACTINIO\n Oxidacion: 3\n Peso atomico: 227.027\n Z: 89\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Th")==0){e=1.3;printf("\n Simbolo: Th\n Nombre: TORIO\n Oxidacion: 4\n Peso atomico: 232.038\n Z: 90\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Pa")==0){e=1.4;printf("\n Simbolo: Pa\n Nombre: PROTACTINIO\n Oxidacion: 5,4\n Peso atomico: 231.035\n Z: 91\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"U")==0){e=1.4;printf("\n Simbolo: U\n Nombre: URANIO\n Oxidacion: 6,5,4,3\n Peso atomico: 238.03\n Z: 92\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Np")==0){e=1.4;printf("\n Simbolo: Np\n Nombre: NEPTUNIO\n Oxidacion: 6,5,4,3\n Peso atomico: 237.0482\n Z: 93\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Pu")==0){e=1.22;printf("\n Simbolo: Pu\n Nombre: PLUTONIO\n Oxidacion: 6,5,4,3\n Peso atomico: 244\n Z: 94\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Am")==0){e=1.3;printf("\n Simbolo: Am\n Nombre: AMERICIO\n Oxidacion: 6,5,4,3\n Peso atomico: 243\n Z: 95\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Cm")==0){e=1.3;printf("\n Simbolo: Cm\n Nombre: CURIO\n Oxidacion: 3\n Peso atomico: 247\n Z: 96\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Bk")==0){e=1.3;printf("\n Simbolo: Bk\n Nombre: BERKELIO\n Oxidacion: 4,3\n Peso atomico: 247\n Z: 97\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Cf")==0){e=1.3;printf("\n Simbolo: Cf\n Nombre: CALIFORNIO\n Oxidacion: 3\n Peso atomico: 251\n Z: 98\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Es")==0){e=1.3;printf("\n Simbolo: Es\n Nombre: EINSTENIO\n Oxidacion: \n Peso atomico: 252\n Z: 99\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Fm")==0){e=1.3;printf("\n Simbolo: Fm\n Nombre: FERMIO\n Oxidacion: \n Peso atomico: 257\n Z: 100\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Md")==0){e=1.3;printf("\n Simbolo: Md\n Nombre: MENDELEVIO\n Oxidacion: \n Peso atomico: 258\n Z: 101\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"No")==0){e=1.3;printf("\n Spimbolo: No\n Nombre: NOBELIO\n Oxidacion: \n Peso atomico: 259\n Z: 102\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Lr")==0){e=0;printf("\n Simbolo: Lr\n Nombre: LAWRENCIO\n Oxidacion: \n Peso atomico: 260\n Z: 103\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Rf")==0){e=0;printf("\n Simbolo: Rf\n Nombre: RUTHERFORDIO\n Oxidacion: \n Peso atomico: 257\n Z: 104\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Db")==0){e=0;printf("\n Simbolo: Db\n Nombre: DUBNIO\n Oxidacion: \n Peso atomico: 260\n Z: 105\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Sg")==0){e=0;printf("\n Simbolo: Sg\n Nombre: SEABORGIO\n Oxidacion: \n Peso atomico: 263\n Z: 106\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Bh")==0){e=0;printf("\n Simbolo: Bh\n Nombre: BOHRIO\n Oxidacion: \n Peso atomico: 262\n Z: 107\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Hs")==0){e=0;printf("\n Simbolo: Hs\n Nombre: HASSIO\n Oxidacion: \n Peso atomico: 265\n Z: 108\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Mt")==0){e=0;printf("\n Simbolo: Mt\n Nombre: MEITNERIO\n Oxidacion: \n Peso atomico: 266\n Z: 109\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Ds")==0){e=0;printf("\n Simbolo: Ds\n Nombre: DARMSTADTIO\n Oxidacion: +-2,4\n Peso atomico: 269\n Z: 110\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Rg")==0){e=0;printf("\n Simbolo: Rg\n Nombre: ROENTGENIO\n Oxidacion: 3,2\n Peso atomico: 269\n Z: 111\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Da")==0){e=0;printf("\n Simbolo: Da\n Nombre: DARWANZIO\n Oxidacion: 4,5,4,3\n Peso atomico: 264\n Z: 112\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Tf")==0){e=0;printf("\n Simbolo: Tf\n Nombre: TUSTRANO\n Oxidacion: 3\n Peso atomico: 272\n Z: 113\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Eo")==0){e=0;printf("\n Simbolo: Eo\n Nombre: ERRISTENEO\n Oxidacion: 4,6,4,2\n Peso atomico: 276\n Z: 114\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Me")==0){e=0;printf("\n Simbolo: Me\n Nombre: MERCHEL\n Oxidacion: 5,4,5,1\n Peso atomico: 279\n Z: 115\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"Nc")==0){e=0;printf("\n Simbolo: Nc\n Nombre: NECTARTEN\n Oxidacion: 5,4,5,3\n Peso atomico: 282\n Z: 116\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"El")==0){e=0;printf("\n Simbolo: El\n Nombre: EFELIO\n Oxidacion: 2,3,2,1\n Peso atomico: 286\n Z: 117\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"On")==0){e=0;printf("\n Simbolo: On\n Nombre: OBERON\n Oxidacion: 4,7\n Peso atomico: 288\n Z: 118\n Electronegatividad de Pauling=%f\n",e);

}
else{
	printf("\nSin Datos");
}
}
	break;
	case 3:
printf("\n Cuantos elementos quimicos deseas conocer\n");
	scanf("%d", & a);
	for (i=0;i<a;i++){
	printf("\nDigita el nombre de tu elemento quimico\n");
	printf("\nEl nombre del elemento debe ir en mayusculas y sin acentos, ni caracteres especiales");
	scanf("%s",&elemento);
if(strcmp(elemento,"HIDROGENO")==0){e=2.1; printf("\n Simbolo: H\n Nombre: HIDROGENO\n Oxidacion:+-1\n Peso atomico: 1.00794\n Z: 1\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"HELIO")==0){e=0; printf("\n Simbolo: He\n Nombre: HELIO\n Oxidacion: 0\n Peso atomico: 4.0026\n Z: 2\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"LITIO")==0){e=1.0; printf("\n Simbolo: Li\n Nombre: LITIO\n Oxidacion: 1\n Peso atomico: 6.941\n Z: 3\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"BERILIO")==0){e=1.5; printf("\n Simbolo: Be\n Nombre:BERILIO\n Oxidacion: 2\n Peso atomico: 9.0122\n Z: 4\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"BORO")==0){e=2.0; printf("\n Simbolo: B\n Nombre: BORO\n Oxidacion: 3\n Peso atomico: 10.811\n Z: 5\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"CARBONO")==0){e=2.5; printf("\n Simbolo: C\n Nombre: CARBONO\n Oxidacion: +-4,2\n Peso atomico: 12.0107\n Z: 6\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"NITROGENO")==0){e=3.0; printf("\n Simbolo: N\n Nombre: NITROGENO\n Oxidacion: +-3,5,4,2\n Peso atomico: 14.0067\n Z: 7\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"OXIGENO")==0){e=3.5; printf("\n Simbolo: O\n Nombre: OXIGENO\n Oxidacion: -2\n Peso atomico: 15.9994\n Z: 8\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"FLUOR")==0){e=4.0; printf("\n Simbolo: F\n Nombre: FLUOR\n Oxidacion: -1\n Peso atomico: 18.9984\n Z: 9\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"NEON")==0){e=0; printf("\n Simbolo: Ne\n Nombre: NEON\n Oxidacion: 0\n Peso atomico: 20.183\n Z: 10\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"SODIO")==0){e=0.9; printf("\n Simbolo: Na\n Nombre: SODIO\n Oxidacion: 1\n Peso atomico: 22.9898\n Z: 11\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"MAGNESIO")==0){e=1.2; printf("\n Simbolo: Mg\n Nombre: MAGNESIO\n Oxidacion: 2\n Peso atomico: 24.305\n Z: 12\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"ALUMINIO")==0){e=1.5; printf("\n Simbolo: Al\n Nombre: ALUMINIO\n Oxidacion: 3\n Peso atomico: 26.9815\n Z: 13\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"SILICIO")==0){e=1.8; printf("\n Simbolo: Si\n Nombre: SILICIO\n Oxidacion: 4\n Peso atomico: 28.0855\n Z: 14\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"FOSFORO")==0){e=2.1; printf("\n Simbolo: P\n Nombre: FOSFORO\n Oxidacion: +-3,5,4\n Peso atomico: 30.9738\n Z: 15\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"AZUFRE")==0){e=2.5; printf("\n Simbolo: S\n Nombre: AZUFRE\n Oxidacion: -2,4,3,6\n Peso atomico: 32.065\n Z: 16\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"CLORO")==0){e=3.0; printf("\n Simbolo: Cl\n Nombre: CLORO\n Oxidacion: +-1,3,4,5,6,7\n Peso atomico: 35.453\n Z: 17\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"ARGON")==0){e=0; printf("\n Simbolo: Ar\n Nombre: ARGON\n Oxidacion: 0\n Peso atomico: 39.948\n Z: 18\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"POTASIO")==0){e=0.8; printf("\n Simbolo: K\n Nombre: POTASIO\n Oxidacion: 1\n Peso atomico: 39.102\n Z: 19\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"CALCIO")==0){e=1.0; printf("\n Simbolo: Ca\n Nombre: CALCIO\n Oxidacion: 2\n Peso atomico: 40.08\n Z: 20\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"ESCANDIO")==0){e=1.3; printf("\n Simbolo: Sc\n Nombre: ESCANDIO\n Oxidacion: 3\n Peso atomico: 44.956\n Z: 21\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"TITANIO")==0){e=1.4; printf("\n Simbolo: Ti\n Nombre: TITANIO\n Oxidacion: 4,3\n Peso atomico: 47.90\n Z: 22\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"VANADIO")==0){e=1.6; printf("\n Simbolo: V\n Nombre: VANADIO\n Oxidacion: 5,4,3,2\n Peso atomico: 50.942\n Z: 23\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"CROMO")==0){e=1.6; printf("\n Simbolo: Cr\n Nombre: CROMO\n Oxidacion: 6,3,2\n Peso atomico: 51.996\n Z: 24\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"MANGANESO")==0){e=1.5; printf("\n Simbolo: Mn\n Nombre: MANGANESO\n Oxidacion: 7,6,4,2,3\n Peso atomico: 54.9381\n Z: 25\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"HIERRO")==0){e=1.8; printf("\n Simbolo: Fe\n Nombre: HIERRO\n Oxidacion: 2,3\n Peso atomico: 55.847\n Z: 26\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"COBALTO")==0){e=1.8; printf("\n Simbolo: Co\n Nombre: COBALTO\n Oxidacion: 2,3\n Peso atomico: 58.9332\n Z: 27\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"NIQUEL")==0){e=1.8; printf("\n Simbolo: Ni\n Nombre: NIQUEL\n Oxidacion: 2,3\n Peso atomico: 58.71\n Z: 28\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"COBRE")==0){e=1.9; printf("\n Simbolo: Cu\n Nombre: COBRE\n Oxidacion: 2,1\n Peso atomico: 63.546\n Z: 29\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"ZINC")==0){e=1.6; printf("\n Simbolo: Zn\n Nombre: ZINC\n Oxidacion: 2\n Peso atomico: 63.37\n Z: 30\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"GALIO")==0){e=1.6; printf("\n Simbolo: Ga\n Nombre: GALIO\n Oxidacion: 3\n Peso atomico: 69.72\n Z: 31\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"GERMANIO")==0){e=1.8; printf("\n Simbolo: Ge\n Nombre: GERMANIO\n Oxidacion: 4\n Peso atomico: 72.59\n Z: 32\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"ARSENICO")==0){e=2.0; printf("\n Simbolo: As\n Nombre: ARSENICO\n Oxidacion: +-3,5\n Peso atomico: 74.9216\n Z: 33\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"SELENIO")==0){e=2.4; printf("\n Simbolo: Se\n Nombre: SELENIO\n Oxidacion: 6,4,2\n Peso atomico: 78.96\n Z: 34\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"BROMO")==0){e=2.8; printf("\n Simbolo: Br\n Nombre: BROMO\n Oxidacion: 1,3,5\n Peso atomico: 79.909\n Z: 35\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"KRIPTON")==0){e=0; printf("\n Simbolo: Kr\n Nombre: KRIPTON\n Oxidacion: 0\n Peso atomico: 83.80\n Z: 36\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"RUBIDIO")==0){e=0.8; printf("\n Simbolo: Rb\n Nombre: RUBIDIO\n Oxidacion: 1\n Peso atomico: 85.467\n Z: 37\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"ESTRONCIO")==0){e=1.0; printf("\n Simbolo: Sr\n Nombre: ESTRONCIO\n Oxidacion: 2\n Peso atomico: 87.62\n Z: 38\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"ITRIO")==0){e=1.2; printf("\n Simbolo: Y\n Nombre: ITRIO\n Oxidacion: 3\n Peso atomico: 88.905\n Z: 39\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"ZIRCONIO")==0){e=1.4; printf("\n Simbolo: Zr\n Nombre: ZIRCONIO\n Oxidacion: 4\n Peso atomico: 91.22\n Z: 40\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"NIOBIO")==0){e=1.6; printf("\n Simbolo: Nb\n Nombre: NIOBIO\n Oxidacion: 5,3\n Peso atomico: 92.906\n Z: 41\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"MOLIBDENO")==0){e=1.8; printf("\n Simbolo: Mo\n Nombre: MOLIBDENO\n Oxidacion: 6,5,4,3,2\n Peso atomico: 95.94\n Z: 42\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"TECNECIO")==0){e=1.9; printf("\n Simbolo: Tc\n Nombre: TECNECIO\n Oxidacion: 7\n Peso atomico: 99\n Z: 43\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"RUTENIO")==0){e=2.2; printf("\n Simbolo: Ru\n Nombre: RUTENIO\n Oxidacion: 2,3,4,6,8\n Peso atomico: 101.07\n Z: 44\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"RODIO")==0){e=2.2; printf("\n Simbolo: Rh\n Nombre: RODIO\n Oxidacion: 2,3,4\n Peso atomico: 102.905\n Z: 45\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"PALADIO")==0){e=2.2; printf("\n Simbolo: Pd\n Nombre: PALADIO\n Oxidacion: 2,4\n Peso atomico: 106.42\n Z: 46\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"PLATA")==0){e=1.9; printf("\n Simbolo: Ag\n Nombre: PLATA\n Oxidacion: 1\n Peso atomico: 107.868\n Z: 47\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"CADMIO")==0){e=1.7; printf("\n Simbolo: Cd\n Nombre: CADMIO\n Oxidacion: 2\n Peso atomico: 112.40\n Z: 48\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"INDIO")==0){e=1.7; printf("\n Simbolo: In\n Nombre: INDIO\n Oxidacion: 3\n Peso atomico: 114.82\n Z: 49\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"ESTAÑO")==0){e=1.8; printf("\n Simbolo: Sn\n Nombre: ESTAÑO\n Oxidacion: 4,2\n Peso atomico: 118.69\n Z: 50\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"ANTIMONIO")==0){e=1.9; printf("\n Simbolo: Sb\n Nombre: ANTIMONIO\n Oxidacion: +-3,5\n Peso atomico: 121.75\n Z: 51\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"TELURIO")==0){e=2.1; printf("\n Simbolo: Te\n Nombre: TELURIO\n Oxidacion: 6,4,-2\n Peso atomico: 127.60\n Z: 52\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"YODO")==0){e=2.5; printf("\n Simbolo: I\n Nombre: YODO\n Oxidacion: +-1,3,5,7\n Peso atomico: 126.9044\n Z: 53\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"XENON")==0){e=0; printf("\n Simbolo: Xe\n Nombre: XENON\n Oxidacion: 0\n Peso atomico: 131.30\n Z: 54\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"CESIO")==0){e=0.7; printf("\n Simbolo: Cs\n Nombre: CESIO\n Oxidacion: 1\n Peso atomico: 132.905\n Z: 55\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"BARIO")==0){e=0.9; printf("\n Simbolo: Ba\n Nombre: BARIO\n Oxidacion: 2\n Peso atomico: 137.34\n Z: 56\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"LANTANO")==0){e=1.1; printf("\n Simbolo: La\n Nombre: LANTANO\n Oxidacion: 3\n Peso atomico: 138.905\n Z: 57\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"CERIO")==0){e=1.12; printf("\n Simbolo: Ce\n Nombre: CERIO\n Oxidacion: 3,4\n Peso atomico: 140.12\n Z: 58\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"PRASEODIMIO")==0){e=1.13; printf("\n Simbolo: Pr\n Nombre: PRASEODIMIO\n Oxidacion: 3,4\n Peso atomico: 140.9\n Z: 59\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"NEODIMIO")==0){e=1.14; printf("\n Simbolo: Nd\n Nombre: NEODIMIO\n Oxidacion: 3\n Peso atomico: 144.24\n Z: 60\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"PROMETIO")==0){e=1.13; printf("\n Simbolo: Pm\n Nombre: PROMETIO\n Oxidacion: 3\n Peso atomico: 147\n Z: 61\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"SAMARIO")==0){e=1.17; printf("\n Simbolo: Sm\n Nombre: SAMARIO\n Oxidacion: 3,2\n Peso atomico: 150.35\n Z: 62\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"EUROPIO")==0){e=1.1; printf("\n Simbolo: Eu\n Nombre: EUROPIO\n Oxidacion: 3,2\n Peso atomico: 151.965\n Z: 63\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"GADOLINIO")==0){e=1.1; printf("\n Simbolo: Gd\n Nombre: GADOLINIO\n Oxidacion: 3\n Peso atomico: 157.25\n Z: 64\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"TERBIO")==0){e=1.1; printf("\n Simbolo: Tb\n Nombre: TERBIO\n Oxidacion: 3,4\n Peso atomico: 158.924\n Z: 65\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"DISPROSIO")==0){e=1.1;printf("\n Simbolo: Dy\n Nombre: DISPROSIO\n Oxidacion: 3\n Peso atomico: 162.5\n Z: 66\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"HOLMIO")==0){e=1.1;printf("\n Simbolo: Ho\n Nombre: HOLMIO\n Oxidacion: 3\n Peso atomico: 164.930\n Z: 67\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"ERBIO")==0){e=1.1;printf("\n Simbolo: Er\n Nombre: ERBIO\n Oxidacion: 3\n Peso atomico: 167.26\n Z: 68\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"TULIO")==0){e=1.1;printf("\n Simbolo: Tm\n Nombre: TULIO\n Oxidacion: 3,2\n Peso atomico: 168.934\n Z: 69\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"ITERBIO")==0){e=1.1;printf("\n Simbolo: Yb\n Nombre: ITERBIO\n Oxidacion: 3,2\n Peso atomico: 173.04\n Z: 70\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"LUTECIO")==0){e=1.27;printf("\n Simbolo: Lu\n Nombre: LUTECIO\n Oxidacion: 3\n Peso atomico: 174.97\n Z: 71\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"HAFNIO")==0){e=1.3;printf("\n Simbolo: Hf\n Nombre: HAFNIO\n Oxidacion: 4\n Peso atomico: 178.49\n Z: 72\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"TANTALIO")==0){e=1.5;printf("\n Simbolo: Ta\n Nombre: TANTALIO\n Oxidacion: 5\n Peso atomico: 180.947\n Z: 73\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"TUNGSTENO")==0){e=1.7;printf("\n Simbolo: W\n Nombre: TUNGSTENO\n Oxidacion: 6,5,4,3,2\n Peso atomico: 183.85\n Z: 74\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"RENIO")==0){e=1.9;printf("\n Simbolo: Re\n Nombre: RENIO\n Oxidacion: 7,6,4,2,-1\n Peso atomico: 186.21\n Z: 75\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"OSMIO")==0){e=2.2;printf("\n Simbolo: Os\n Nombre: OSMIO\n Oxidacion: 2,3,4,6,8\n Peso atomico: 190.2\n Z: 76\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"IRIDIO")==0){e=2.2;printf("\n Simbolo: Ir\n Nombre: IRIDIO\n Oxidacion: 2,3,4,6\n Peso atomico: 192.2\n Z: 77\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"PLATINO")==0){e=2.2;printf("\n Simbolo: Pt\n Nombre: PLATINO\n Oxidacion: 2,4\n Peso atomico: 195.09\n Z: 78\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"ORO")==0){e=2.4;printf("\n Simbolo: Au\n Nombre: ORO\n Oxidacion: 3,1\n Peso atomico: 196.967\n Z: 79\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"MERCURIO")==0){e=1.9;printf("\n Simbolo: Hg\n Nombre: MERCURIO\n Oxidacion: 2,1\n Peso atomico: 200.59\n Z: 80\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"TALIO")==0){e=1.8;printf("\n Simbolo: Tl\n Nombre: TALIO\n Oxidacion: 3,1\n Peso atomico: 204.3833\n Z: 81\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"PLOMO")==0){e=1.8;printf("\n Simbolo: Pb\n Nombre: PLOMO\n Oxidacion: 4,2\n Peso atomico: 207.19\n Z: 82\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"BISMUTO")==0){e=1.9;printf("\n Simbolo: Bi\n Nombre: BISMUTO\n Oxidacion: 3,5\n Peso atomico: 208.98\n Z: 83\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"POLONIO")==0){e=2.0;printf("\n Simbolo: Po\n Nombre: POLONIO\n Oxidacion: 4,2\n Peso atomico: 209\n Z: 84\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"ASTATO")==0){e=2.2;printf("\n Simbolo: At\n Nombre: ASTATO\n Oxidacion: +-1,3,5,7\n Peso atomico: 210\n Z: 85\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"RADON")==0){e=0;printf("\n Simbolo: Rn\n Nombre: RADON\n Oxidacion: O\n Peso atomico: 222\n Z: 86\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"FRANCIO")==0){e=0.7;printf("\n Simbolo: Fr\n Nombre: FRANCIO\n Oxidacion: 1\n Peso atomico: 223\n Z: 87\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"RADIO")==0){e=0.7;printf("\n Simbolo: Ra\n Nombre: RADIO\n Oxidacion: 2\n Peso atomico: 226\n Z: 88\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"ACTINIO")==0){ e=1.1;printf("\n Simbolo: Ac\n Nombre: ACTINIO\n Oxidacion: 3\n Peso atomico: 227.027\n Z: 89\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"TORIO")==0){e=1.3;printf("\n Simbolo: Th\n Nombre: TORIO\n Oxidacion: 4\n Peso atomico: 232.038\n Z: 90\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"PROTACTINIO")==0){e=1.4;printf("\n Simbolo: Pa\n Nombre: PROTACTINIO\n Oxidacion: 5,4\n Peso atomico: 231.035\n Z: 91\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"URANIO")==0){e=1.4;printf("\n Simbolo: U\n Nombre: URANIO\n Oxidacion: 6,5,4,3\n Peso atomico: 238.03\n Z: 92\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"NEPTUNIO")==0){e=1.4;printf("\n Simbolo: Np\n Nombre: NEPTUNIO\n Oxidacion: 6,5,4,3\n Peso atomico: 237.0482\n Z: 93\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"PLUTONIO")==0){e=1.22;printf("\n Simbolo: Pu\n Nombre: PLUTONIO\n Oxidacion: 6,5,4,3\n Peso atomico: 244\n Z: 94\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"AMERICIO")==0){e=1.3;printf("\n Simbolo: Am\n Nombre: AMERICIO\n Oxidacion: 6,5,4,3\n Peso atomico: 243\n Z: 95\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"CURIO")==0){e=1.3;printf("\n Simbolo: Cm\n Nombre: CURIO\n Oxidacion: 3\n Peso atomico: 247\n Z: 96\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"BERKELIO")==0){e=1.3;printf("\n Simbolo: Bk\n Nombre: BERKELIO\n Oxidacion: 4,3\n Peso atomico: 247\n Z: 97\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"CALIFORNIO")==0){e=1.3;printf("\n Simbolo: Cf\n Nombre: CALIFORNIO\n Oxidacion: 3\n Peso atomico: 251\n Z: 98\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"EINSTENIO")==0){e=1.3;printf("\n Simbolo: Es\n Nombre: EINSTENIO\n Oxidacion: \n Peso atomico: 252\n Z: 99\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"FERMIO")==0){e=1.3;printf("\n Simbolo: Fm\n Nombre: FERMIO\n Oxidacion: \n Peso atomico: 257\n Z: 100\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"MENDELEVIO")==0){e=1.3;printf("\n Simbolo: Md\n Nombre: MENDELEVIO\n Oxidacion: \n Peso atomico: 258\n Z: 101\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"NOBELIO")==0){e=1.3;printf("\n Spimbolo: No\n Nombre: NOBELIO\n Oxidacion: \n Peso atomico: 259\n Z: 102\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"LAWRENCIO")==0){e=0;printf("\n Simbolo: Lr\n Nombre: LAWRENCIO\n Oxidacion: \n Peso atomico: 260\n Z: 103\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"RUTHERFORDIO")==0){e=0;printf("\n Simbolo: Rf\n Nombre: RUTHERFORDIO\n Oxidacion: \n Peso atomico: 257\n Z: 104\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"DUBNIO")==0){e=0;printf("\n Simbolo: Db\n Nombre: DUBNIO\n Oxidacion: \n Peso atomico: 260\n Z: 105\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"SEABORGIO")==0){e=0;printf("\n Simbolo: Sg\n Nombre: SEABORGIO\n Oxidacion: \n Peso atomico: 263\n Z: 106\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"BOHRIO")==0){e=0;printf("\n Simbolo: Bh\n Nombre: BOHRIO\n Oxidacion: \n Peso atomico: 262\n Z: 107\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"HASSIO")==0){e=0;printf("\n Simbolo: Hs\n Nombre: HASSIO\n Oxidacion: \n Peso atomico: 265\n Z: 108\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"MEITNERIO")==0){e=0;printf("\n Simbolo: Mt\n Nombre: MEITNERIO\n Oxidacion: \n Peso atomico: 266\n Z: 109\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"DARMSTADTIO")==0){e=0;printf("\n Simbolo: Ds\n Nombre: DARMSTADTIO\n Oxidacion: +-2,4\n Peso atomico: 269\n Z: 110\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"ROENTGENIO")==0){e=0;printf("\n Simbolo: Rg\n Nombre: ROENTGENIO\n Oxidacion: 3,2\n Peso atomico: 269\n Z: 111\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"DARWANZIO")==0){e=0;printf("\n Simbolo: Da\n Nombre: DARWANZIO\n Oxidacion: 4,5,4,3\n Peso atomico: 264\n Z: 112\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"TUSTRANO")==0){e=0;printf("\n Simbolo: Tf\n Nombre: TUSTRANO\n Oxidacion: 3\n Peso atomico: 272\n Z: 113\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"ERRISTENEO")==0){e=0;printf("\n Simbolo: Eo\n Nombre: ERRISTENEO\n Oxidacion: 4,6,4,2\n Peso atomico: 276\n Z: 114\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"MERCHEL")==0){e=0;printf("\n Simbolo: Me\n Nombre: MERCHEL\n Oxidacion: 5,4,5,1\n Peso atomico: 279\n Z: 115\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"NECTARTEN")==0){e=0;printf("\n Simbolo: Nc\n Nombre: NECTARTEN\n Oxidacion: 5,4,5,3\n Peso atomico: 282\n Z: 116\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"EFELIO")==0){e=0;printf("\n Simbolo: El\n Nombre: EFELIO\n Oxidacion: 2,3,2,1\n Peso atomico: 286\n Z: 117\n Electronegatividad de Pauling=%f\n",e);

}
else if(strcmp(elemento,"OBERON")==0){e=0;printf("\n Simbolo: On\n Nombre: OBERON\n Oxidacion: 4,7\n Peso atomico: 288\n Z: 118\n Electronegatividad de Pauling=%f\n",e);

}
else{
	printf("\nSin Datos");
}
	}
break;
default: printf("Solo puedes seleccioner 1, 2 o 3\n");
}

printf("\n\n\n");
if(a>1){
	printf("\nAhora deseas saber la diferencia de electronegatividades de 2 de los elementos que ya conociste");
	printf("\n1.Si");
	printf("\n2.No\n\n");
	scanf("%d", & b);
	printf("\n\n\n");
	switch(b){
	case 1:
		printf("\ndigita la electronegatividad de tu primer elemento:  ");
		scanf("%f", & e1);
		printf("\n");
		printf("\ndigita la electronegatividad de tu segundo elemento:  ");
		scanf("%f", & e2);
		printf("\n");
		et=e1-e2;
		if(et<0){
		et=-et;
		printf("\n La electronegatividad del elenace es de =  %f\n",et);

		}
		else{
		et=et;
		printf("\n La electronegatividad del elenace es de =%f\n",et);
		}
		if (et<=0.5){
			printf("\n Tu enlace es no polar\n");
		}
		else if (et>0.5 && et<=2){
			printf("\n Tu enlace es polar\n");
		}
		else if (et > 2)
		{printf("\n Tu enlace es ionico\n");}
	break;
	case 2:
	break;
	}
}
printf("\n\n          Deseas realizar mas calculos?\n\n     1 = Si   \n\n     Cualquier numero = Regresar al menu principal\n\n");
                int y;
                scanf("%d",&y);
                switch(y)
                {
                case 1:
                    {
                        system("cls");
                        goto electronegatividad;
                    }
                    default:
                    {
                        system("cls");
                        goto menu;
                    }
                }
                        break;
                    }

    }

    }
                default:
                    {
                        goto menu;
                    }
    }
}
return 0;


}

