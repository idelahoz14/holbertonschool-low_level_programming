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
    printf("El numero es positivo");
  }else{
    if(n == 0){
      printf("El numero es igual a 0");
    }else{
      if(n < 0){
	printf("El numero es negativo");
      }
  }
    putchar('\n');
  return (0);
}
