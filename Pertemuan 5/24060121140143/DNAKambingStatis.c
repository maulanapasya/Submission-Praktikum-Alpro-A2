/* Nama File    : DNAKambingStatis.c */
/* Deskripsi    : Menghitung banyaknya kambing bersaudara tanpa array statis */
/* Pembuat      : <24060121140143-Sana Saffanah>
/* Tgl Pembuatan: Rabu, 30 Maret 2022 - 20.13 */

#include <stdio.h> /*header file*/
#include <stdlib.h>

/*Program Utama*/
int main(){
/*Kamus*/
    int N; // masukan
    int i;
    int j;
    int BS; // kambing tidak bersaudara
    int S; // kambing bersaudara
    int DNA[100]; // array of integer

/*Algoritma*/
    printf("masukkan nilai N : ");
    scanf("%d", &N);
    BS = 0;

	S = 0;

    for(i=0; i<N; i++){
        printf("Masukan DNA ke-%d : ",i+1);
        scanf("%d", &DNA[i]);
    }
    for(i=0; i<N-1; i++){
        for(j=i+1; j<N; j++){
            if(DNA[j] - DNA[i] < 3){
                S++;
            }
            else{
                BS++;
            }
        }
    }
    printf("Jumlah kambing yang bersaudara : %d \n", S);
    printf("Jumlah kambing yang tidak bersaudara : %d \n", BS);

  return 0;
}
