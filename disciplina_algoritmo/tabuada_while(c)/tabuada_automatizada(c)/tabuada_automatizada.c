#include <stdio.h>
int main(){
    int resp,contador = 1;
    while(contador < 10){
        resp = 2*contador;
        printf("%d \n", resp);
        contador++;
    }
    return 0;
}