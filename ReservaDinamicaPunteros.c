#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define NPALABRAS 10

//Escribe un programa que reciba 10 palabras
//Las guarde en una lista de punteros, haciendo reserva dinámica
//de memoria con malloc y las ordene por su longitud de menor a mayor

int main(void) {
  //Defino el vector de punteros
  char *palabras[NPALABRAS];
  char *pintercambio;
  char auxiliar[15];
  int cont;
  int longitud;
  int nveces;
  //Defino el resto de las variables
 

  //Leo las palabras
  for(cont=0;cont<NPALABRAS;cont++){
    printf("\nEscriba la palabra %d: ",cont+1);
    scanf(" %s", auxiliar);
    longitud=strlen(auxiliar);
    palabras[cont]=(char *) malloc(longitud*sizeof(char));
    strcpy(palabras[cont], auxiliar);
  }
  //Muestro la lista tal cual
  printf("************************");
  printf("*  LISTA DE PALABRAS   *");
  printf("************************");
  for(cont=0;cont<NPALABRAS;cont++){
    printf("\n %s",palabras[cont]);
  }
  //Ordeno la lista por su longitud por el método de la burbuja
  for(nveces=1;nveces>NPALABRAS-1;nveces++){
    for(cont=0;cont<NPALABRAS-2;cont

      if(strlen(palabras[cont])>strlen(palabras[cont+1])){
        pintercambio=palabras[cont];
        palabras[cont]=palabras[cont+1];
        palabras[cont+1]=pintercambio;
      }
    }
   
  }

  //Vuelvo a mostrar la lista
  printf("********************************");
  printf("*  LISTA DE PALABRAS ORDENADA  *");
  printf("********************************");
  for(cont=0;cont<NPALABRAS;cont++){
    printf("\n %s",palabras[cont]);
  }





  return 0;
}
