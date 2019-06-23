#include<iostream>
using namespace std;

struct bank
{
	int acc_number;
	float acc_balance;
};


void fundtransfer(struct bank&, struct bank&, float);

int main()
{
	float amount;

	struct bank b1 = { 101,1500};

	struct bank b2 = {102,3000};

	cin>>amount;
	cout<<"\n before transfer"<<b1.acc_balance;
	cout<<"\n before transfer"<<b2.acc_balance;


	fundtransfer(b1, b2, amount);

	cout<<"\n main after transfer";
	cout<<"\n lets see the balance for b1:  "<<b1.acc_balance;
	cout<<"\n lets see the balance for b2:   "<<b2.acc_balance;	

};

// taking the address as the input and also change it  while initilization but calling is
//direct object
void fundtransfer(struct bank &b1, struct bank &b2, float amount)
{
	b1.acc_balance = b1.acc_balance +amount;
	b2.acc_balance = b2.acc_balance +amount;
};
	
	
	
// taking pointers as inputs and change in while initialization and also
// while calling function in int main use the object directly

	
// void fundtransfer(struct bank *b1, struct bank  *b2, float amount)
// {
// 	b1->acc_balance = b1->acc_balance +amount;
// 	b2->acc_balance = b2->acc_balance +amount;
// };	
	