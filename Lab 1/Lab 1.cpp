#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()

{

    int prov, count;
    double vol, Hige, Dia, area, r;
    char F;
    const double pi(acos(-1));              //Значение pi для формул

    printf("Calculate the volume of a x cylinders ");

    printf("Calculate the volume of a x cylinders  \nSpecify the number of cylinders: ");           //Объем x цилиндров
    prov = scanf_s("%d", &count);  

    while (prov != 1 || count <= 0) {
        rewind(stdin);
        printf("\nSpecify the number of cylinders: ");
        prov = scanf_s("%d", &count);
    }

    for (int i = 1; i <= count; i++) {

        printf("\nEnter high of %d cylinder: ", i);         //Ввод высоты через консоль
        prov = scanf_s("%lf", &Hige);        
       
        while (prov != 1 || Hige <= 0) {                    //Проверка высоты
            rewind(stdin);
            printf("\nEnter high of %d cylinder: ", i);
            prov = scanf_s("%lf", &Hige);
        }

        printf("Enter diametr of %d cylinder: ", i);        //Ввод диаметра через консоль
        prov = scanf_s("%lf", &Dia);
              
        while (prov != 1 || Dia <= 0) {                     //Проверка диаметра
            rewind(stdin);
            printf("Enter diametr of %d cylinder: ", i);
            prov = scanf_s("%lf", &Dia);
        }

        vol = pi * (pow(Dia, 2) / 4) * Hige;                //Подсчет объема цилиндра

        printf("\nAnswer %d = %lf\n", i, vol);              //Вывод ответа на консоль

        if (vol <= 5) {
            printf("If you like to calculate full area of cylinder number %d press F\n\n", i);

            rewind(stdin);
            prov = scanf_s("%c", &F);

            if (prov == 1 && (F == 'F' || F == 'f')) {

                area = 2 * pi * (Dia / 2) * (Hige + (Dia / 2));
                printf("\nFull area : %lf: \n", area);
            }
        }
        prov = 0;
    }
    return 0;
}