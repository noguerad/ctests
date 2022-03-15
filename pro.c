#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  int botiga;
  int *ip;
  printf("Num botiga: ");
  scanf("%d", &botiga);
  ip = &botiga;
  printf("La botiga introduida es: %d i la memoria es %x\n", botiga, ip);
  printf("Lo guardat en memoria es: %d", *ip);


  write(1,"Hello World!", 12); 
  /*free ip;*/
  return 0;
}
