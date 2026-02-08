#include <stdio.h>
#include<conio.h>

int main() {
    int v[] = {7, 3, 9, 10, 15};  
    int n = sizeof(v) / sizeof(v[0]); 
    
    int i;
    for (i = 0; i < n - 1; i++) {  
        if (v[i] + v[i + 1] == 12) {  
            printf("Elementet: %d dhe %d (pozicionet %d dhe %d)\n", v[i], v[i + 1], i, i + 1);
            return 0;  
        }
    }

    printf("Nuk u gjet asnjë çift i tillë.\n");
    getch();
    return 0;
}
