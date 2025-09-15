
#include <stdio.h>

int main()
{
   int n;
scanf("%d",&n);
  int counter = 1; 

    for (int r = 1; r <= n; r++) {
        for (int c = 1; c <= r; c++) {
            printf("%d ", counter);
            counter++;
        }
        printf("\n");
    }


    return 0;
}
