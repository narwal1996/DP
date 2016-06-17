#include <bits/stdc++.h>
using namespace std;

string toString (int a)
{
    ostringstream temp;
    temp<<a;
    return temp.str();
}

int main()
{
	// your code goes here
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++)
	     cin >> arr[i];
	
	int min_jumps[n], jumps[n];
	min_jumps[0] = 0;
	jumps[0] = -1;
	
	for(int i = 1; i < n; i++)
	{
	     min_jumps[i] = INT_MAX;
	     for(int j = 0; j < i; j++)
	     {
	          if(i <= j + arr[j])
	          {
	               if(min_jumps[i] > min_jumps[j] + 1)
	               {
	                    min_jumps[i] = min_jumps[j]+1;
	                    jumps[i] = j;
	               }
	          }
	     }
	}
	
	cout << min_jumps[n-1] << endl;
	
	int i = n-1;
	string path = "";
	while(i >= 0)
	{
	     path = toString(i) + path;
	     i = jumps[i];
	}
	
	cout << path << endl;
	
	return 0;
}