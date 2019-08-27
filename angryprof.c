#include<stdio.h>
int main()
{
  int a[1000],n,k,t,i,j,m,c;
  scanf("%d",&t);
  for(i=0;i<t;i++)
  {
  c=0;
    scanf("%d %d",&n,&k);
    
    for(j=0;j<n;j++)
    {
    scanf("%d",&a[j]);
    }
   for(j=0;j<n;j++)
   {
     
      m=fun(a[j]);
     if(m==1)
     {
       c=c+1;
     }
   }
        if(c>=k)
    {
            printf("NO\n");
    }
        else
    {
           printf("YES\n");
    }
   
   }
   
  return 0;
}

int fun(int a)
{  
    if(a<=0)
    {
      return 1;
    }
    else
    return 0;
   
}
