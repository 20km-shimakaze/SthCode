#include <bits/stdc++.h>
using namespace std;

struct Comp{
	double x , y;
	Comp( double _x = 0, double _y = 0. ){
		x = _x;
		y = _y;
	}
	Comp operator +(const Comp &b) {
		return Comp( x + b.x , y + b.y );
	}
	Comp operator -(const Comp &b) {
		return Comp( x - b.x , y - b.y );
	}
	Comp operator *(const Comp &b) {
		return Comp( x * b.x - y * b.y , x * b.y + y * b.x );
	}
};
const int maxn = 222222;
const double PI = acos(-1.);
int rev[maxn];
void FFT( Comp *a , int N , int inv ) 
// inv  1 DFT( val -> dot )
// inv -1 IDFT ( dot -> val )
{
	int bit = 0;
	for( ; (1 << bit) < N ; ++bit );
	
	for( int i = 0 ; i < N ; ++i ){
		rev[i] = (rev[i >> 1] >> 1) | ((i&1) << (bit - 1));
		if( i < rev[i] ) swap(a[i] , a[rev[i]]);
	}
	
	for( int mid = 1 ; mid < N ; mid <<= 1 ){
		Comp tmp( cos(PI / mid) , inv * sin(PI / mid) ); 
		for( int i = 0 ; i < N ; i += mid * 2 ){
			Comp omega(1.,0.);
			for( int j = 0 ; j < mid ; ++j , omega = omega * tmp ){
				Comp x = a[i + j] , y = omega * a[i + j + mid];
				a[i + j] = x + y , a[i + j + mid] = x - y;
			}
		} 
	}	
}
Comp a[maxn] , b[maxn];
string s;
int ans[maxn];
int main(){
	int N = 0;
	cin >> N;
	
	cin>>s; for( int i = 0 ; i < N ; ++i ) a[i].x = s[N - 1 - i] - '0';
	cin>>s; for( int i = 0 ; i < N ; ++i ) b[i].x = s[N - 1 - i] - '0';
	int len = 1;
	while( len < 2*N ) len <<= 1;
	FFT( a , len , 1 );
	FFT( b , len , 1 );
	for( int i = 0 ; i <= len ; ++i ) a[i] = a[i] * b[i];
	FFT( a , len ,-1 );
	for(int i=0;i<=len;i++){
        //ans[i]+=ceil(a[i].x/len);
        ans[i] += (int)(a[i].x / len + 0.5);
        if(ans[i]>=10){
            ans[i+1]+=ans[i]/10;
            ans[i]%=10;
            if(i==len)len++;
        }
    }
	while( 0 == ans[len] && len >= 1 ) --len;
	len++;
	while( --len >= 0 ) cout << ans[len];
	return 0;
}
