#include <stdio.h>
#include <stdlib.h>

int main (){
    int num;
    printf ("== MENU ==\n");
    printf ("1 - Biscoito\n");
    printf ("2 - Chocolate\n");
    printf ("3 - Pizza\n");
    printf ("4 - Refrigerante\n");
    printf ("5 - Agua mineral\n");
    printf ("6 - Vinho\n");
    printf ("\n Digite uma opcao: ");
    scanf ("%i", &num);
    switch (num){
    case 1:
        printf ("Biscoito R$ 2,50 - 50 unidades");
        break;
    case 2:
        printf ("Chocolate R$ 4,20 - 30 unidades");
        break;
    case 3:
        printf ("Pizza R$ 25,90 - 80 unidades");
        break;
    case 4:
        printf ("Refrigerante R$ 3,00 - 60 unidades");
        break;
    case 5:
        printf ("Água mineral R$ 1,80 - 100 unidades");
        break;
    case 6:
        printf ("Vinho R$ 23,10 - 19 unidades");
        break;
    default:
        break;
    }
    return (0);
}