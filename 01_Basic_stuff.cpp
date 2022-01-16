//Print a string n number of times
//Print numbers from 1 to n
//Print numbers from n to 1
//Fibonacci numbers
#include<bits/stdc++.h>
using namespace std;
int ct = 0;

void print3(int i,int n)
{
	if (i == n)
		return;
	cout << i << "\n";
	i++;
	print3(i,n);
}
void print2(int n)
{
	if(n == 0)
		return;
	cout << n<<"\n";
	n--;
	print2(n);
}
void print(string s)
{
	if(ct >= 5)
		return;
	ct++;
	print(s);
	cout << s << "\n";
}
int fibonacci(int n)
{
	if(n==0 or n==1)
		return n;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
	
	string s;
	cin >> s;
	print(s);
	print2(10);
	print3(1,5);
	for (int i = 0; i < 11;i++)
		cout << fibonacci(i)<<" ";
	return 0;
}
