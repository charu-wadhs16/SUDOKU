#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int checkforit(int arr[9][9])
{   int c=0;
	for (int i = 0; i < 9; i++) 
	{
		for (int j = 0; j < 9; j++)
		{
		    if(arr[i][j]==0)
			{
			c++;
			break;	
			}
		}
	}
	return c;
}
int validInput(int arr[9][9])
{
for (int i = 0; i < 9;i++) 
{
		for (int j = 0; j < 9;j++) 
		{
			if (arr[i][j] < 0 || arr[i][j] > 9) 
			{
				return 0;
			}
		}
}
return 1;
}
int checkRepetition(int arr[9][9], int m, int n, int x)
{
   for (int k = 0; k<9; k++)
   {
		if (arr[m][k] ==x)
		{
		   return 0;
		}
   }
	for (int k = 0; k <9; k++)
	{
		if (arr[k][n] == x)
		{
			return 0;
		}
	}
	int R = m - (m % 3), C = n - (n % 3);
    for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i + R][j +C] == x)
			{
			return 0;
			}
		}
	}
return 1;	
}
int Suduko(int arr[9][9], int m, int n)
{
	if (m == 8 && n == 9)
	{
	return 1;
	}
	if (n == 9) 
	{
		m++;
		n = 0;
	}
	if (arr[m][n] > 0)
	{
	return Suduko(arr, m, n + 1);
	}
    for (int x = 1; x <10; x++) 
	{
		if (checkRepetition(arr, m, n, x)) 
		{
			arr[m][n] = x;
			if (Suduko(arr, m, n + 1))
			{
				return 1;
		    }
		}
		arr[m][n] = 0;
	}
return 0;
}

int main()
{
int i,j;
int arr[9][9];
for(i=0;i<9;i++)
{
	for(j=0;j<9;j++)
	{
		cin>>arr[i][j];
	}
}
if (validInput(arr)==0)
{
cout<<"\nInvalid Input\n";
}
else if(checkforit(arr)==0)
{
cout<<"\nYour entered sudoku seems to be full!\n";
}
else
{
int p=Suduko(arr, 0, 0);
if (p)
{
cout<<endl;
cout<<"SUDOKU SOLUTION\n";
cout<<endl;
for (int i = 0; i < 9; i++) 
{
	for (int j = 0; j < 9; j++)
	cout << arr[i][j] << " ";
	cout << endl;
}
}
else
cout << "\nSUDOKU SOLUTION DOES NOT EXIST " << endl;
}
}

