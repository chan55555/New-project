#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	srand (time(NULL));
	int a,count=0;
	int r=rand()%100+1;
	cout<<"1 se 100 k bich ka ek number mai sochta hu ,guess kar\n";
	cout<<"\n";
	while(1)
	{
		count++;
	    cin>>a;
		if(r>a)	
		cout<<"Chutiye isse bada number daal\n";
	
		else if(r<a)
		cout<<"chutiye isse chhota number daal\n";

		else {
		cout<<"Wah !! kya baat!! kya baat!!\n";
		cout<<"\n";
		cout<<"Sale guess krne me "<<count<<" attempts laga diye, laanat hai tere pe\n";
		}
		cout<<"\n";
	}
	
}


