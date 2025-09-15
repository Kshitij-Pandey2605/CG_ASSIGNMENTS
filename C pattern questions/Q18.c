
#include <stdio.h>

int main()
{
   int n;
scanf("%d",&n);
for(int i=n-1;i>=0;i--){
    for(int j='A';j<='A'+i;j++){
        printf("%c",j);
    }
    printf("\n");
} 

    return 0;
}
