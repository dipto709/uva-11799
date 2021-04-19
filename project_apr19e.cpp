#include<stdio.h>
main()
{
    int n,a,k=0,t,max;
    scanf("%d",&t);
    while(t--){
        max = 0; 
        
        k++;    
        scanf("%d",&n);
        while(n--){
                                 scanf("%d",&a);
            if(a>max){
                max = a;
            }
        }
        printf("Case %d: %d\n",k,max);
    }
    return 0;
}