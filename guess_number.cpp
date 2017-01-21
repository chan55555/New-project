#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	srand (time(NULL));
	int a,count=0;
	int r=rand()%100+1;
	cout<<"Guess a number between 1 to 100 \n";
	cout<<"\n";
	while(1)
	{
		count++;
	    cin>>a;
		if(r>a)	
		cout<<"oh!!Guess some bigger number \n";
	
		else if(r<a)
		cout<<"oh!! Guess some lesser number\n";

		else {
		cout<<"Wow !!Great !!!You guessed the number\n";
		cout<<"\n";
		cout<<"You took "<<count<<" attempts to guess the number\n";
		}
		cout<<"\n";
	}
	
}


