#include<bits/stdc++.h>
#include<iomanip>
#define rep(i,s,n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long;
#define INF 100000000
int mx[4]={0,0,-1,1};int my[4]{-1,1,0,0};
template<typename T>
bool chmin(T &a,T b){
  if(a > b)
    a = b;
  return true;
}
struct corr {
  int cx;
  int cy;
  int cdepth;
};
bool xyok(int x,int y,int h,int w){return (x >= 0 && x < w && y >= 0 && y < h);}
void fix(int a) {cout << fixed << setprecision(a);}
void outYN(bool a){cout << (a ? "Yes" : "No") << endl;}
/*---------------------------------------------------------------------------------------------------------*/

int main(){
  
  ll s,n,q;
  cin >> s;
  srand(s);
  cin >> n;
  cin >> q;

  cout << n << endl;
  rep(i,0,n) cout << int(rand()%101) << " ";
  cout << endl;
  cout << q << endl;
  rep(i,0,q) cout << int(rand()%6)+1 << " ";
  return 0;
}