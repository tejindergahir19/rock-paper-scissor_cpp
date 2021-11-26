#include <cstdlib> 
#include <ctime> 
#include <iostream>
#include <stdlib.h>
using namespace std;
int random()
{
	int i;
	srand((unsigned)time(0)); 
	i = (rand()%999)+1;
	return i;
}
void structure()
{
	cout<<"-----------------------------------------------\n\t      STONE PAPER SCISSOR\n-----------------------------------------------";
	cout<<"\n\t       Use Given Symbols\n-----------------------------------------------";
	cout<<"\n\t  R          |  \tROCK\n\t  P          |   \tPAPER\n\t  S          |   \tSCISSOR\n";
} 
void game(char opt)
{
	int b;
	b = random();
	cout<<endl;
	if(opt=='r' or opt=='R')
	{
		if(b%2==0)
		{
			cout<<"\nYou Choose        : ROCK";
			cout<<"\n\nComputer Choose   : PAPER";
			cout<<"\n\nResult            : Computer Win";
		}
		else
		{
			cout<<"\nYou Choose        : ROCK";
			cout<<"\n\nComputer Choose   : SCISSOR";
			cout<<"\n\nResult            : You Win";
		}
	}
	
	else if(opt=='p' or opt=='P')
	{
		if(b%2==0)
		{
			cout<<"\nYou Choose        : PAPER";
			cout<<"\n\nComputer Choose   : SCISSOR";
			cout<<"\n\nResult            : Computer Win";
		}
		else
		{
			cout<<"\nYou Choose        : PAPER";
			cout<<"\n\nComputer Choose   : ROCK";
			cout<<"\n\nResult            : You Win";
		}
	}
	
	else if(opt=='s' or opt=='S')
	{
		if(b%2==0)
		{
			cout<<"\nYou Choose        : SCISSOR";
			cout<<"\n\nComputer Choose   : ROCK";
			cout<<"\n\nResult            : Computer Win";
		}
		else
		{
			cout<<"\nYou Choose        : SCISSOR";
			cout<<"\n\nComputer Choose   : PAPER";
			cout<<"\n\nResult            : You Win";
		}
	}
	
	else 
	{
		cout<<"\n\t\tWrong Option";
	}
}			 
int main()
{
	structure();
	char opt,done;
	int t=1;
	while(t>0)
	{
		cout<<"-----------------------------------------------"<<endl;
		cout<<"Enter Your Choice : ";
	    cin>>opt;
	    game(opt);
	    cout<<"\n\n\nWant To Play Again(Y/N) : ";
	    cin>>done;
	    cout<<endl<<endl;
	    if(done=='n' or done=='N')
	    {
			break;
		}
		system("CLS");
		structure();
	}
	return 0;
}
