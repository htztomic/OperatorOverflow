//============================================================================
// Name        : Operator.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Name{
private:
	string firstName;
	string lastName;
	int wealth;
	string passcode;
public:
	Name(string x, string n , float deposit, string pass){
	firstName = x;
	lastName = n;
	wealth = deposit;
	passcode = pass;
	}

	void createPassCode(string pass){
		cout<<"create your password please:";
		passcode= pass;
		cout<<"Thanks";
	}
	int checkPasscode(string firstN){
		string passc;
		string lastN;
		int check = 0;
		if(firstN == firstName){
		cout<<"Please Enter Last Name on Account:";
		cin>>lastN;
			if(lastN == lastName){
		while(check != 1){
			cout<<"Please Enter Passcode or 1 to cancel:";
			cin>>passc;
			if(passc == passcode){
				return 1;
			}
			if(passc!= passcode){
				cout<<"Error wrong password:\n";
			}
			if(passc[0] == '1'){
				check =1;
			}
		}
			}
		}

		return 0;
	}
	void addCash(){
		int x;
		float amount;
		cout<< "Enter 1 to Deposit or Enter 0 for Withdraw:";
		cin>>x;
		if(x ==1){
			cout<<"Type amount to Deposit:";
			cin>>amount;
			wealth = amount +wealth;
			cout<<"Thank You\n";
		}
		if(x == 0){
			cout<<"Type amount to Withdraw:";
			cin>>amount;
			wealth = wealth - amount;
		}
		cout<<setprecision(2)<<"Total Money: "<<wealth<<endl;
	}

	//friend istream& operator >>(istream& ins, Name &amoount );



};

/*istream& operator >>(istream& ins, Name  &amoount){
	int amount;
	ins>>amount;
	amoount.addCash();
}*/


int main() {
	vector<Name> All;
	string firstName;
	string lastName;
	string passcode;
	float amountOfMoney;
	string checker;
	cout<<"Press 1 to create an Account, Press 2 to access an Account, or Press q to Quit: ";
	cin>> checker;
	while(checker[0] != 'q'){
		if( checker[0] == '1'){
			cout<<"Enter First Name:";
			cin>>firstName;
			cout<<"Enter Last Name:";
			cin>>lastName;
			cout<<"Amount of Money starting with:";
			cin>>amountOfMoney;
			cout<<"Enter New Passcode:";
			cin>>passcode;
			Name account(firstName,lastName,amountOfMoney, passcode);
			All.push_back(account);
		}
		if(checker[0] == '2'){
			string firstName;
			cout<<"Enter First Name of Account:";
			cin>>firstName;
			for(int i =0 ; i < All.size() ; i++){
				if(All[i].checkPasscode(firstName) ==1){
					cout<<"You Check Out\n";
					All[i].addCash();
				}
			}


		}
		cout<<"Press 1 to create an Account, Press 2 to access an Account, or Press q to Quit: ";
		cin>> checker;

	}



	return 0;
}
