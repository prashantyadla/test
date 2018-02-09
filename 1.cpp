#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int T ;
	cin >> T ;
	int N;
	int i,j;
	while(T--)
	{
		cin >> N ;
		int A[N];
		int B[N];
		for(i=0;i<N;i++)
		{
			cin >> A[i];
		}
		for(i=0;i<N;i++)
		{
			cin >> B[i];
		}
		int ans = 0;
		i=0;
		if((A[i]-0) >= B[i])
			ans++;

		for(i=1;i<N;i++)
		{
			if(A[i]-A[i-1] >= B[i])
			{
				ans++;
			}
		}
		cout << ans << endl;
	}


	

	return 0;
}