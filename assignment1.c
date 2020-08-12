#include <stdio.h>
#include <unistd.h>
int main()
{
    int n,i;
    printf("Enter a number: \n");     
    scanf("%d",&n);
    
    int dp[n+1];
    for(int i=0;i<=n;i++)
        dp[i] = 0;
    
    dp[0]=0;
    dp[1]=1;
    for(i=2;i<=n;i++)
    {
        dp[i]+=dp[i-1]+dp[i-2];
    }
    
    int p=fork();
    
    if(p>0){
        printf("Parent Process\n");
        printf("Nth fibonacci element is :%d\n",dp[n]);
    }
    
    else if(p==0)
    {
        int s=0;
        
        for(i=0;i<=n;i++)
            s+=dp[i];
        
        printf("Child Process\n");
        printf("Sum of n fibonacci elements is :%d\n",s);
    }
    else {
        printf("fork failed\n");
    }

    return 0;
}
