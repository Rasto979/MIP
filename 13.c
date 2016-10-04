#include <stdio.h>

int main()
{
 char i;
 scanf("%c",&i);
 if (((65<=i)&&(i<=90)) || ((97<=i)&&(i<=122)) || ((48<=i)&&(i<=57))) {printf("Alfanumericky znak");}
 else {printf("Interpunkcny znak");}
 return 0;
}
