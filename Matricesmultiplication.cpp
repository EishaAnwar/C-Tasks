#include<iostream>
#include<cmath>
#include<fstream>
#include<string>
using namespace std;
int main()
{
//this program is for multiplication of two matrices
int row1,col1,row2,col2;
int sum,multiply;
cout<<"Input # of rows of first matrix: ";
cin>>row1;
cout<<"Input # of columns of first matrix: ";
cin>>col1;
cout<<"Input # of rows of second matrix: ";
cin>>row2;
cout<<"Input # of columns of second matrix: ";
cin>>col2;
int m1[row1][col1],m2[row2][col2];
cout<<"Input first matrix:\n";
for(int i=0;i<row1;i++)
{
for(int j=0;j<col1;j++)
{
cin>>m1[i][j];
}
}
cout<<"Input second matrix:\n";
for(int i=0;i<row2;i++)
{
for(int j=0;j<col2;j++)
{
cin>>m2[i][j];
}
}
if(col1==row2)							//condition for multiplication of matrices # of col of first matrix
								// must be eaqual to # of rows of of second
{
for(int i=0;i<row1;i++)
{
for(int j=0;j<col2;j++)
{
sum=0;
col1=-1;
for(int k=0;k<row2;k++)
{
col1++;
{
multiply=m1[i][col1]*m2[k][j];
sum=sum+multiply;	
}
}
cout<<sum<<"\t";
}
cout<<endl;
}	
}
else
{
cout<<"Multiplication of these order matrices does not exist";
}
return 0;
}
