#include <stdio.h>
int main(){
    char estado[3][16] = {"CDMX", "Puebla", "Edo. de Mexico"};
    char mes[3][10] = {"Enero", "Febrero", "Marzo"};
    char a[2][5] = {"2019", "2020"};
    float datos [3][3][2];
    int i, j, k; //i es el estado (renglon), j es el mes (columna), k es el año (capa)
    float max = 0;
    int x = 0, y = 0, z = 0;
    float prom = 0;
    
    for(k = 0; k < 2; k ++){
        for(j = 0; j <3; j++){
            for (i = 0; i < 3; i ++){
                printf("Introduzca la temperatura [Estado][Mes][Anio]  [%i][%i][%i]\n", i+1, j+1, k+1);
                scanf("%f", &datos[i][j][k]);
            }
        }
    }
    
    for (k = 0; k < 2; k++){
        printf("            -------%s ------- \n \n", a[k]);
        for(i = 0; i <3; i++){
            printf("---%s--- \n \n", estado[i]);
            for (j = 0; j < 3; j ++){
                printf("%s -> ", mes[j]);
                prom += datos[i][j][k];
                printf("%.2f \t", datos[i][j][k]);
                if(datos[i][j][k]> max){
                    max = datos [i][j][k];
                    x = i;
                    y = j;
                    z = k;
                }
            }
            printf("\n");
            printf("\npromedio anual es de %.2f \n \n",prom/3);
            prom = 0;
        }
    }
    
    printf("\n");
    printf("La temperatura maxima fue %.2f en %s %s %s", max, estado[x], mes[y], a[z]);
    return 0;
}