#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	string s;
	char b{};
	int count {};
	cout<<"Enter a string: "<<endl;
	getline(cin,s);

	b = tolower(b);
	cout<<"Enter a sign: "<<endl;
	cin >> b;
	for (int i=0; i<s.size();i++){
		s[i] = tolower(s[i]);
		if(s[i] == b){
			count++;
		}
	}
	cout<<"Liczba powtorzen znaku "<<b<<" to: "<<count<<endl;
}
