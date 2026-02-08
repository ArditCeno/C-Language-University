#include <stdio.h>
#include <windows.h>
int main(){
	
	int i, j;

	HANDLE hConsole;
	hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
	/*
	int k;
	for(int k=1;k<=255;k++){
		SetConsoleTextAttribute(hConsole,k);
		printf("%3d %s\n",k,"Tekst me ngjyra");
	}
	*/	
	int m,n,k,p;
	printf("Jep gjatesine e bishtit: ");
	scanf("%d",&m);
	printf("Jep gjeresine e bishtit: ");
	scanf("%d",&p);
	printf("Jep gjatesine e copes: ");
	scanf("%d",&k);
	printf("Jep gjeresine e copes: ");
	scanf("%d",&n);
	
	for( i=1;i<=k;i++){
		//afishojme pjesen e bishtit
		SetConsoleTextAttribute(hConsole,4);
		for( j=1;j<=p;j++){
			printf("+");
		}
		//afishojme pjesen e copes
		SetConsoleTextAttribute(hConsole,3);
		for( j=1;j<=n;j++){
			printf("*");
		}
		printf("\n");
	}
	//afisho pjesen e bishtit
	for( i=1;i<=m-k;i++){
		//afishojme pjesen e bishtit
		SetConsoleTextAttribute(hConsole,4);
		for( j=1;j<=p;j++){
			printf("+");
		}
		printf("\n");
	}
	
	
	
	
	SetConsoleTextAttribute(hConsole,13);
	
	
	return 0;

}
