#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

/*__________Functions_________*/

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

    vector<ll> v;
    v.push_back(1);
    sort(v.begin(),v.end());

    queue<int>q;
    q.push(1);
    q.pop();
    stack<int>st;
    st.push(1);
    st.pop();

    set<int>s;
    s.insert(11);
    for(int x:s) cout<<x<<endl;
    map<int,int>mp;
    mp[1]=2;
    cout<<mp[1]<<endl;
    for(auto [x,y]:mp)

    /*
    deque<int>dq;
    dq.pop_back();
    dq.pop_fornt();
   */


  return 0;
}