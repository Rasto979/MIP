#include <stdio.h>

int main()
{
  char a,b,c;
  scanf("%c %c %c",&a,&b,&c);
  if ((a==b) && (b==c) && (a==c)) {printf("Vsetky pismena su rovnake");}
  else if ((a==b) || (b==c) || (a==c)) {printf("Dve pismena su rovnake");}
  else {printf("Vsetky pismena su rozne");}
  return 0;
}
