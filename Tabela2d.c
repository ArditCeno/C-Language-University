//Shkruani nje program ne c qe lexon 2 numra n dhe m nga perdoruesi dhe nderton nje tabel 2dimensionale me n rreshta dhe m kolona.
//Te mbushet kjo tabele me elemente nga perdoruesi

#include <stdio.h>
int main(){
	int i, j;
	int n, m;           //n quajm rreshtat dhe m kolonat
	printf("Jep nr e rreshtave n");    //kerkojm vlerat per rreshta
	scanf("%d", &n);            //marim vlerat per rreshta
	printf("Jep nr e shtyllve m");    //kerkojm clerat per shtylla
	scanf("%d", &m);         //marim vlera per shtylla
	
	//mbushja tabeles
	int tabela[n][m];    //krijimi i tabeles me n rreshta dhe m kolona
	printf("Jep elementet; \n");    //kerkohet elementi ne rreshtin 1 kolona 1 ose me index [0][0]
	for( i=0; i<n; i++){         //sherben per krijim e rreshtave ne momentin qe shkojm te rreshti fundit mbyllet
		for( j=0; j<m; j++ ){     //krijim e shtyllave ne momentin qe sjhkojm te shtylla fundit kalojm ne rresht te ri
			printf("tabela[%d][%d] = ", i, j);   //kerkimi i tabeles ca do kemi krijuar
			scanf("%d", &tabela[i][j]);     //marim vlera
		}
	}
	//Afishimin e tabeles
	printf("Tabela eshte: ");      //tregon tabelen
	for( i=0; i<n; i++){      //bredhia e tabeles ne rreshta
		for( j=0; j<m; j++ ){   //bredhia e tabeles ne shtylla
			printf("%d", tabela[i][j]);    //afishimi i tabeles
		}
		printf("\n");
    }
    return 0;                     //SEPSE KEMI VLERA PER TE KTHYER NGA TIPI I TE DHENAVE QE JANE INT
}
