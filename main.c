#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{   int t0, t1, t2, t3, t4, t5;
    int resultado = 0;
    printf(" ___________  \n");
    printf("|           | \n");
    printf("| B I D U   | \n");
    printf("|___________| \n");
    printf("(\\__/)||      \n");
    printf("(O^O)_||      \n");
    printf("/   /         \n");
    printf("=================================================================== \n\n");

    printf("PENSE EM UM NUMERO ENTRE 0 E 63...\n\n");

    printf("O NUMERO QUE VOCE PENSOU ESTA NESSA TELA? \n 1-SIM 2-NAO \n\n");
    printf("\t 1  3  5  7\n");
    printf("\t 9 11 13 15\n");
    printf("\t17 19 21 23\n");
    printf("\t25 27 29 31\n");
    printf("\t33 35 37 39\n");
    printf("\t41 43 45 47\n");
    printf("\t49 51 53 55\n");
    printf("\t57 59 61 63\n");

    scanf("%d", &t0);
    if (t0 == 1){
        resultado = 1;
    }

   printf("\n O NUMERO QUE VOCE PENSOU ESTA NESSA TELA? \n 1-SIM 2-NAO \n\n");

    printf("\t 2  3  5  7\n");
    printf("\t10 11 14 15\n");
    printf("\t18 19 22 23\n");
    printf("\t26 27 30 31\n");
    printf("\t34 35 38 39\n");
    printf("\t42 43 46 47\n");
    printf("\t50 51 54 55\n");
    printf("\t58 59 62 63\n");

    scanf("%d", &t1);
    if(t1 == 1){
        resultado += 2;
    }

printf("\n O NUMERO QUE VOCE PENSOU ESTA NESSA TELA? \n 1-SIM 2-NAO \n\n");
    printf("\t 4  5  6  7\n");
    printf("\t12 13 14 15\n");
    printf("\t20 21 22 23\n");
    printf("\t28 29 30 31\n");
    printf("\t36 37 38 39\n");
    printf("\t44 45 46 47\n");
    printf("\t52 53 54 55\n");
    printf("\t60 61 62 63\n");

  scanf("%d", &t2);
    if(t2 == 1){
        resultado += 4;
    }
printf("\n O NUMERO QUE VOCE PENSOU ESTA NESSA TELA? \n 1-SIM 2-NAO \n\n");
    printf("\t 8   9  10  12\n");
    printf("\t12  13  14  15\n");
    printf("\t24  25  26  27\n");
    printf("\t28  29  30  31\n");
    printf("\t40  41  42  43\n");
    printf("\t44  45  46  47\n");
    printf("\t56  57  58  59\n");
    printf("\t60  61  62  63\n");

  scanf("%d", &t3);
    if(t3 == 1){
        resultado += 8;
    }


printf("\n O NUMERO QUE VOCE PENSOU ESTA NESSA TELA? \n 1-SIM 2-NAO \n\n");
    printf("\t16  17  18  19\n");
    printf("\t20  21  22  23\n");
    printf("\t24  25  26  27\n");
    printf("\t28  29  30  31\n");
    printf("\t48  49  50  51\n");
    printf("\t52  53  54  55\n");
    printf("\t56  57  58  59\n");
    printf("\t60  61  62  63\n");

  scanf("%d", &t4);
    if(t4 == 1){
        resultado += 16;
    }

printf("\n O NUMERO QUE VOCE PENSOU ESTA NESSA TELA? \n 1-SIM 2-NAO \n\n");
    printf("\t32  33  34  35\n");
    printf("\t36  37  38  39\n");
    printf("\t40  41  42  43\n");
    printf("\t44  45  46  47\n");
    printf("\t48  49  50  51\n");
    printf("\t52  53  54  55\n");
    printf("\t56  57  58  59\n");
    printf("\t60  61  62  63\n");
  scanf("%d", &t5);
    if(t5 == 1){
        resultado += 32;
    }
    printf("\n ================================================================== \n\n");

    printf("O NUMERO QUE VOCE PENSOU FOI: %d  ", resultado);

    printf("\n ================================================================== \n\n");
    printf("|----------------------------------|\n");
    printf("|                                  |       __\n");
    printf("| F I M                            |-------|  \\       ______\n");
    printf("|                                  |       --- \\_____/**|_|_\\____  |\n");
    printf("|----------------------------------|         \\_______ --------- __>-}\n");
    printf("                                                /  \\_____|_____/   |\n");
    printf("                                               *         |\n");
    printf("                                                        {O}\n");







}
