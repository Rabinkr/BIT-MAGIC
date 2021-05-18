//Count the total number of set bits
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0;
	cout<<"Enter any number"<<endl;
	cin>>n;
	while(n!=0)
	{
	if(n&1==1)
	{
	count++;
    }
	n=n>>1;	
	}
	cout<<"Total number of set bits:"<<count;
return 0;
}
//output:
Enter any number
8
Total number of set bits:1
--------------------------------
