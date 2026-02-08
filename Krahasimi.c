#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    printf ("Vendosni 2 numra per tu krahasuar\n");
    printf ("Vendosni nr e pare; \n");
    scanf ("%d", &a);
    printf ("Vendosni nr e dyte: \n");
    scanf ("%d", &b);
    
    if (a>b){
             printf ("Nr i pare eshte me i madhe \n");
             }
    else if (a<b){
         printf ("Nr i dyte eshte me u madhe \n");
         }
    else {
         printf ("Nr jane te barabart");
         }
    getch ();
    return 0;
}
