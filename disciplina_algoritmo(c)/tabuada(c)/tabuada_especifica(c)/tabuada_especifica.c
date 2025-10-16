#include <stdio.h>
int main(){
int multiplicador, resultado, num;
printf("Tabuada de qual numero: ");
scanf("%d", &num);
for(multiplicador=1; multiplicador<10; multiplicador++)
{
     resultado = num * multiplicador;
     printf("%d X %d = %d\n",num,multiplicador, resultado);
}
return 0;
}