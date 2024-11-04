#include <stdio.h>
#include <math.h>

int main(){
int e = 0, f = 0, xv = 0, xp = 0, mudouV = 0, mudouP = 0, i = 0;
float y = 0, y2 = 0, y3 = 0, pico = 0, vale = 0;
float a = 0, b = 0, c = 0, d = 0;

    scanf("%f %f %f %f %d %d", &a, &b, &c, &d, &e, &f);

    if (a > 0 || a < 0){
        y2 = (pow(e, 3) * a) + (pow(e, 2) * b) + (e * c) + d;
        y3 = y2;

        for (i = e + 1; i < f; i++){
            y = (pow(i, 3) * a) + (pow(i, 2) * b) + (i * c) + d;

            if (y3 < y2 && y < y2){
                xp = i - 1;
                mudouP++;
                pico = y2;
            }

            if (y3 > y2 && y > y2){
                xv = i - 1;
                mudouV++;
                vale = y2;
            }

            y3 = y2;
            y2 = y;
        }
    }

    if (a == 0){
        y2 = (pow(e, 2) * b) + (e * c) + d;
        y3 = y2;

        for (i = e + 1; i < f; i++){
            y = (pow(i, 3) * a) + (pow(i, 2) * b) + (i * c) + d;

            if (y3 < y2 && y < y2){
                xp = i - 1;
                mudouP++;
                pico = y2;
            }
            else if (y3 > y2 && y > y2){
                xv = i - 1;
                mudouV++;
                vale = y2;
            }
            y3 = y2;
            y2 = y;
        }
    }

    if (mudouP == 0 && mudouV == 0){
        printf("Nao ha pico\n");
        printf("Nao ha vale");
    }
    if (mudouP != 0 && mudouV == 0){
        printf("Pico em x=%d\n", xp);
        printf("Nao ha vale\n");
    }
    if (mudouP == 0 && mudouV != 0){
        printf("Vale em x=%d\n", xv);
        printf("Nao ha pico\n");
    }
    if (mudouP != 0 && mudouV != 0){
        if (xp < xv){
            printf("Pico em x=%d\n", xp);
            printf("Vale em x=%d\n", xv);
        }
        else{
            printf("Vale em x=%d\n", xv);
            printf("Pico em x=%d\n", xp);
        }
    }
}