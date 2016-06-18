#include <iostream>
using namespace std;

// check divisibility of 'a' by 'b', if yes, divide 'a' by highest possible power of 'b', which divides 'a'.
int divisible(int a, int b)
{
     while(a%b == 0)
          a /= b;
     return a;
}

bool is_ugly(int num)
{
     num = divisible(num, 2);
     num = divisible(num, 3);
     num = divisible(num, 5);
     
     return ((num == 1) ? true : false);
}

int main()
{
     int n;
	cin >> n;
	int i = 1;
	n--;
	while(n > 0)
	{
          i++;
          if(is_ugly(i))
	          n--;
	}
	cout << i << endl;
	return 0;
}
