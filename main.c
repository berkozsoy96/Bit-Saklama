#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int binary(int sonuc){
    int kalan;
    int sayac = 0;

    while (sonuc>0) {
        kalan = sonuc%2;
        sonuc/=2;
        if(kalan == 1){
            sayac++;
        }
    }
    return sayac;
}

int main(){

    srand(time(NULL));

    int sayi;
    sayi=17+rand()%(1023-17+1);

    int girilenSayi;
    int hak = 10;
    while(hak>0){
        printf("Sayi giriniz: ");
        scanf("%d", &girilenSayi);

        if(girilenSayi != sayi){
            int sonuc = sayi&girilenSayi;
            int ayni = binary(sonuc);

            if(ayni%2 == 0){
               printf("ayni yerde cift sayida 1 vardir.\n");
               hak--;
               printf("Kalan Hak : %d\n",hak);
               printf("\n");
            }
            else{
                printf("ayni yerde tek sayida 1 vardir.\n");
                hak--;
                printf("Kalan Hak : %d\n",hak);
                printf("\n");
            }
        }
        else{
            printf("KAZANDINIZ...\n");
            break;
        }
        if(hak==0){
            printf("KAYBETTINIZ..!\n");
        }
    }

    return 0;
}
