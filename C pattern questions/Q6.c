
#include <stdio.h>

int main()
{
  int b=65,n;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=b;j<=b+n;j++){
        printf(" %c",j);
    }
    printf("\n");
} 

    return 0;
}
