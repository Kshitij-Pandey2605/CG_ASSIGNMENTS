
#include <stdio.h>

int main()
{
  int n;
int z=65;
    scanf("%d",&n);
if (n<14){
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
            for(char k='A';k<='A'+2*i-2;k++){
                
                    printf("%c",k);
                
           
            }
        
        printf("\n");
    }
}
else
printf("invalid"); 

    return 0;
}
