//Nje vektor qe mere parameter vektor T gjatesin e  tij dhe numeron elementet tek
#include <stdio.h>

int numeroTek(const int T[], int n){  //funksion qe numeron nr tek
	int count=0;                      // numeruesi i nr tek
	int i;
	for( i=0; i<n; i++){          // bredhjen ne vektor
		if(T[i] %2 != 0){            //kushti qe nr te jet tek   
			count++;                  //tek++ 1.2,3
		}
	}
	return count;                      //kthen sasine e nr tek
}

int main(){
	int n;                         //kekojm gjatesin e vektorit nga perdoruesi
	
	printf("Jep gjatesin");        //printon kerkimin e gjatesis
	scanf("%d", &n);               //mere vlera nga perdorusi
	
	int T[n];                     //krijohet vektori T me n vlera
	int i;
	printf("Jep elementet e  vek \n");   // kerkohet vlera ne indexin i
	for( i=0; i<n; i++){              // bredhja ne vektor per te shtuar vlerat ne cdo indeks duke nisur nga index 0.1.2...
		printf("T[%d] = ", i);          //printimi i te dhenave per cdo rresht qe ti trg perdoruesit qe ato qe ai po jep po mern
		scanf("%d", &T[i]);            // marja e infos nga jasht
	}
	printf("Nr i elementeve tek %d", &numeroTek(T, n));   //afishimi i shumes se nr tek
	return 0;                                       //do ket return sepse eshte int main dhe jo void dhe do marim vlera
}
