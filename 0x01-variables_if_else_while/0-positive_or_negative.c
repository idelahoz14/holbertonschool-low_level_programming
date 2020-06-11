#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  /* your code goes there */
  if(n > 0){
    printf("El numero ",n" es positivo,\n");
  }else{
    if(n == 0){
      printf("El numero es igual a 0,\n");
    }else{
      if(n < 0){
	printf("El numero ",n" es negativo,\n");
      }
  } 
  return (0);
}
