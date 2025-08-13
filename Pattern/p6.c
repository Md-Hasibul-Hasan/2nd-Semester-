   #include <stdio.h>

   int main()
   {
       int n,i,temp,j,flag=0;

       scanf("%d", &n);

       for(i=2;i<=n;i++)
       {
           for(j=2;j<=i; j++)
           {
               if(i%j==0)
               {
                   flag=1;
                   break;
               }
           }
           if(flag==1) {continue;}
           while(n%i==0)
           {
               n=n/i;
               printf("%d ");
           }


       }


   }
