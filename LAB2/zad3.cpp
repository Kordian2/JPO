#include <iostream>
#include <string>

using namespace std;
int main(){
	string s1;

	cout<<"Enter a string"<<endl;
	getline(cin,s1);
	string s2(s1);
	string s3(s1);
	for (int i=0; i<s1.size();i++){
		s1[i] = s2[s1.size()-i-1];
	}
	if(s1==s2){
		cout<<"Your string is a palindrome"<<endl;
	}else{
		cout<<"Your string in not a palindrome"<<endl;
	}
	reverse(s3.begin(),s3.end());
	if(s2 == s3){
		cout<<"Your string is a palindrome"<<endl;
	}else{
		cout<<"Your string is not a palindrome"<<endl;
	}
	return 0;
}
