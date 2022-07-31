#include <bits/stdc++.h>
using namespace std;
//#define int long long
string getnum(int num)
{
	switch (num)
	{
	case 0: return "zero";
	case 1: return "one";
	case 2: return "two";
	case 3: return "three";
	case 4: return "four";
	case 5: return "five";
	case 6: return "six";
	case 7: return "seven";
	case 8: return "eight";
	case 9: return "nine";
	case 10: return "ten";
	case 11: return "eleven";
	case 12: return "twelve";
	case 13: return "thirteen";
	case 14: return "fourteen";
	case 15: return "fifteen";
	case 16: return "sixteen";
	case 17: return "seventeen";
	case 18: return "eighteen";
	case 19: return "nineteen";
	case 20: return "twenty";
	case 30: return "thirty";
	case 40: return "forty";
	case 50: return "fifty";
	default: return "null";
		break;
	}
}
void fun(int num)
{
	if(num<20){
		cout<<getnum(num);
		return;
	}
	else{
		int m=num%10;
		cout<<getnum(num/10*10)<<" ";
		if(m!=0)cout<<getnum(m);
	}
}
void slove()
{
	int h,m;
	cin>>h>>m;
	if(m==0){
		fun(h);
		cout<<" o'clock";
		return;
	}
	fun(h);
	cout<<" ";
	fun(m);
	return;
}
signed main()
{
	int __;
	//cin>>__;
	__ = 1;
	while (__--)
	{
		slove();
	}
	return 0;
}