#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
void test_case(){

}
int main(){
Faster;

  int n; cin>>n;
  int ar[n];
   for (int i=0;i<n;i++)
   {
       cin>>ar[i];
   }
   int k; cin>>k;
   int l=0,r=n-1;
   int _index=-1;

   while (l<=r)
   {
       int mid= l+((r-l)/2);
       if(ar[mid]==k)
       {
          _index= mid;
          break;
       }
       if(ar[mid]<k)
       {
           l=mid+1;
       }
       else
       {
         r=mid-1;
       }
   }
   cout<<_index<<endl;

    return 0;
}