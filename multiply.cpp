#include<iostream>
#include<cmath>
#include<fstream>
#include<string>
using namespace std;
int main()
{
int i,j,x,y;
int sum,multiply;
cout<<"Input # of rows of first matrix: ";
cin>>i;
cout<<"Input # of columns of first matrix: ";
cin>>j;
cout<<"Input # of rows of second matrix: ";
cin>>x;
cout<<"Input # of columns of second matrix: ";
cin>>y;
int m1[i][j],m2[x][y];
cout<<"Input first matrix:\n";
for(int a=0;a<i;a++)
{
for(int b=0;b<j;b++)
{
cin>>m1[a][b];
}
}
cout<<"Input second matrix:\n";
for(int a=0;a<x;a++)
{
for(int b=0;b<y;b++)
{
cin>>m2[a][b];
}
}
if(j==x)								//condition for multiplication of matrices # of col of first matrix
										// must be eaqual to # of rows of of second
{
for(int k=0;k<i;k++)
{
for(int l=0;l<y;l++)
{
sum=0;
j=-1;
for(int m=0;m<x;m++)
{
j++;
{
multiply=m1[k][j]*m2[m][l];
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
