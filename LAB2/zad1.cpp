#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;
int MatrixSum(vector<vector<int>> matrix, int r, int c)
{
	int sum{0};
	for(int i=0; i<r;i++){
		for(int j=0;j<c;j++){
			if(i%2==1 || j%2==0){
				sum+=matrix[i][j];
			}

		}
	}
	return sum;
}

int main()
{
	int r{};
	int c{};
	int randomNumber;
	srand(static_cast<unsigned int>(time(0)));
	cout<<"Give a number of rows"<<endl;
	cin>>r;
	cout<<"Give a number of columns"<<endl;
	cin>>c;
	vector<vector<int>> matrix(r,vector<int>(c));
	for(int i=0;i<r;i++){

		for(int j=0; j<c;j++){

			
			matrix[i][j] = rand()%10;
			cout<<matrix[i][j]<<" ";

		}
		cout<<"\n";
	}
	cout<<"The sum of matrix is:" <<MatrixSum(matrix,r,c)<<endl;
	return 0;
}
