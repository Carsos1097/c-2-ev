#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM_FILAS 10
#define NUM_COLU 10

int main(void) {
  char letras[NUM_FILAS][NUM_COLU];
  int fil,col;
  char nombre[]="ANTONIO";
  int seed;
  int fil_nombre,col_nombre;
  int interruptora=0;
  seed=time(0);
  srand(seed);
  //RELLENAMOS LA MATRIZ CON '0'
  for(fil=0;fil<NUM_FILAS;fil++){
    for(col=0;col<NUM_COLU;col++){
      letras[fil][col]='0';
    }
  }
  //ELEGIMOS LA POSICIÓN DONDE VAMOS A ESCRIBIR EL NOMBRE
  while(interruptora==0){
    fil_nombre=rand()%NUM_FILAS;
    col_nombre=rand()%NUM_COLU;
    printf("\nposicion: %d,%d",fil_nombre,col_nombre);
    if(col_nombre+7>=NUM_COLU){
     printf("\nnombre demasiado grande");
    }
    else{
      interruptora=1;
    }
  }
  //ESCRIBIMOS EL NOMBRE EN LA MATRIZ
  for(col=col_nombre;col<col_nombre+7;col++){
   
    letras[fil_nombre][col]=nombre[col-col_nombre];
    printf("\nCopio la letra %c",nombre[col]);
  }
 
  //MOSTRAMOS LA MATRIZ
  for(fil=0;fil<NUM_FILAS;fil++){
    printf("\n");
    for(col=0;col<NUM_COLU;col++){
      printf(" %c",letras[fil][col]);
    }
  }


  return 0;
}
