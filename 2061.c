#include <stdio.h>

int main()
{
    int n = -1, m = 0;
    char acao[7];

    while(n < 0)
    {
        scanf("%d%d", &n, &m);
    }
    for(int i = 0; i < m; i++)
    {
        scanf("%s", acao);
        
        if(acao[0] == 'c')
        {
            n-=1;
            
        }
        else
        {
            n+=1;
           
        }
    }
    printf("%d\n", n);
}