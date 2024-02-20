/*un programa que contenga una función que nos diga si un número es divisible por 2, 3, 5 y 7*/

#include<stdio.h>
int es_divisible_2(int num){
  int respuesta=0;
  if(num%2==0){
    respuesta=1;
  }
  return(respuesta);
}
int es_divisible_3(int num){
  int respuesta=0;
  if(num%3==0){
    respuesta=1;
  }
  return(respuesta);
 
}
int es_divisible_5(int num){
  int respuesta=0;
  if(num%5==0){
    respuesta=1;
  }
  return(respuesta);

}
int es_divisible_7(int num){
  int respuesta=0;
  if(num%7==0){
    respuesta=1;
  }
  return(respuesta);

}
int es_divisible(num){
  int respuesta=0;
  int suma=0;
  suma=es_divisible_2(num)+es_divisible_3(num)+es_divisible_5(num)+es_divisible_7(num);
  if(suma==4){
    respuesta=1;
  }
  return(respuesta);
 
}

int main(void){
  int num;
  int respuesta=0;
  //Leemos un número
  printf("Introduce un numero: ");
  scanf(" %d",&num);
  respuesta=es_divisible(num);
  if(respuesta==1){
    printf("Es divisible por 2,3,5 y 7");
  }
  else{
    printf("No es divisible por estos números");
  }
  //lo enviamos a una función que nos dice si es divisible por 2
  //Lo mismo para el resto de los números
 
  return 0;
}
