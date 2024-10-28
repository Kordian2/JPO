#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s1;

	cout<<"Enter a string"<<endl;
	getline(cin,s1);

	string s2(s1);
	for(int i = 0; i < s1.size();i++){
		s1[i] = s2[s1.size()-i-1];
}
	cout<<"Manually: "<<s1<<endl;
	reverse(s2.begin(),s2.end());
	cout<<"Function: "<<s2<<endl;
}
