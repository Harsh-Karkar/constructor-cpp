#include<iostream>
using namespace std;

class bank
{
	int tbalance=0,deposit_amt,withdrow_amt;
	public:
	void deposite()
	{
		cout<<"Enter Deposite amount:";
		cin>>deposit_amt;
		tbalance+=deposit_amt;
		cout<<"your deposite amount is:"<<deposit_amt<<endl;
	}
	void withdrawal()
	{
		cout<<"Enter Withdrawal Amount:";
		cin>>withdrow_amt;
		if(tbalance<withdrow_amt)
		{

			cout<<"Sorry Not Withdrawal Amount"<<endl;
		}
		else
		{
			tbalance-=withdrow_amt;
			cout<<"Your Withdrawal Amount is:"<<withdrow_amt<<endl;
		}
	}
	void showdata()
	{
		cout<<"Tota Balance="<<tbalance<<endl;
	}
};
int main()
{
	bank b;
	int ch;
	cout<<"1.deposite amount:"<<endl;
	cout<<"2.withdrawal amout:"<<endl;
	cout<<"3.show balance:"<<endl;
	cout<<"4.exit:"<<endl;
	do
	{
		cout<<"enter choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
			b.deposite();
			break;
			case 2:
			b.withdrawal();
			break;
			case 3:
			b.showdata();
			case 4:
			break;
			default:
			cout<<"wrong choice"<<endl;
			break;
		}
	}while(ch!=0);
}