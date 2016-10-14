#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "p8Static.h"

int main()
{
    char sArr[32];
    char *ptr = sArr;
    double dRes;
    int iRes,iResp;
    int iOpcion;


    printf("Que desea hacer?\n");
    printf("1 para BinaryToInt\n");
    printf("2 para HexToInt\n");
    printf("3 para asciiToDouble\n");
    printf("4 para Salir\n");
    scanf("%i",&iOpcion);
    do{


          if(iOpcion == 1)
            {
            printf("Teclea una secuencia de 0s y 1s\n");
            scanf("%s",sArr);
            //iSize = strlen(sArr);
            //printf("%i\n",iSize);
            iResp = asciiBinaryToInt(ptr);
             printf("%i\n",iResp);
            }
          else
            if(iOpcion == 2)
          {
           printf("Teclea una secuencia Hecadecimal\n");
            scanf("%s",sArr);
            //iSize = strlen(sArr);
            iRes = asciiHEXToInt(ptr);
            printf("%i\n",iRes);
          }
          else
            if(iOpcion == 3)
          {
            printf("Teclea un numero double\n");
            scanf("%s",sArr);

           // iSize = strlen(sArr);
            dRes = asciiToDouble(ptr);
            if(dRes !=0){
                printf("%.2f",dRes);
            }


          }
    printf("Que desea hacer?\n");
    printf("1 para BinaryToInt\n");
    printf("2 para HexToInt\n");
    printf("3 para asciiToDouble\n");
    printf("4 para Salir\n");
    scanf("%i",&iOpcion);

    }while(iOpcion != 4);



    //printf("%s",*ptr);


    return 0;
}
