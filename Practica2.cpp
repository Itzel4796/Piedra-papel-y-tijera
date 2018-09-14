#include <stdio.h>
#include <conio.h>
int main ()
{
    int J1,J2;
    printf("\n     ** OPCIONES DE JUEGO **");
    printf("\n           1.-PIEDRA");
    printf("\n           2.-PAPEL");
    printf("\n           3.-TIJERA");
     
    printf("\n\n\n JUGADOR 1, SELECCIONA TU JUGaDA:  ");
    scanf("%d",&J1);
    printf("\n\n JUGADOR 2, SELECCIONA TU JUGADA:  ");
    scanf("%d",&J2);
if(J1==J2)
 {
 printf("Empate");
 }
if (J1==1)
  {
  if (J2==2)
   {
   	printf("Gana el jugador 2 porque PAPEL gana a PIEDRA");
   }
  }
if (J1==1)
  {
  if (J2==3)
   {
   	printf("Gana el jugador 1 porque PIEDRA gana a TIJERA");
   }
  }
if (J1==2)
  {
  if (J2==1)
   {
   	printf("Gana el jugador 1 porque PAPEL gana a PIEDRA");
   }
  }
if (J1==2)
  {
  if (J2==3)
   {
   	printf("Gana el jugador 2 porque TIJERA gana a PAPEL");
   }
  }
 if (J1==3)
  {
  if (J2==1)
   {
   	printf("Gana el jugador 2 porque PIEDRA gana a TIJERA");
   }
  } 
if (J1==3)
  {
  if (J2==2)
   {
   	printf("Gana el jugador 1 porque TIJERA gana a PAPEL");
   }
  }
getch();
}
