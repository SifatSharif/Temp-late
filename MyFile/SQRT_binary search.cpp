#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define eps 1e-6
/*__________Functions_________*/
 void SQRT (int n)
{
   ld low=0,hi= 1e6;

   while (hi-low>=eps)
   {
      ld mid = (low+hi)/2;

      ld sq_mid= mid*mid;
      
      if(sq_mid>n)
      
      {
        hi=mid;
      }
      else {
          low=mid;
      }
   }
  
     printf("%llf \n",low);
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
   int n;
   while(scanf("%d",&n)==1)
   {
      SQRT(n);
  
   }
     

  return 0;
}