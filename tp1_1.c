#include <stdio.h>

int main()
{
    int *punteroNum;
    int num=8;

    punteroNum = &num;
    printf("\nHola Mundo\n")
    ;
    printf("Contenido del Puntero: %d\n",*punteroNum);

    printf("Direccion de Memoria Almacenada por el puntero: %p\n",punteroNum);

    printf("Direccion Variable: %p\n",&num);

    printf("Direccion Puntero: %p\n",&punteroNum);

    printf("Tmaño utilizado por la varibale: %d\n",sizeof(num));
    
    return 0;
}
