// Assesssment for  OOPS langanuge.

#include<iostream>
#include<ctime>//for time and date
using namespace std;

//welcome display---> bank,time and date.
class welcome{
	
	public:
		welcome()//default constructor
		{
		
	cout<<"                    WELCOME TO ATM                   "<<endl<<endl;
	cout<<"-----------------------------------------------------"<<endl<<endl;
	
	time_t current_dt =time(0);
	char* result = ctime(&current_dt); // this is syntax ( told by sir)
	
	cout<<"          Current date :" <<result<<"          "<<endl;
	
	cout<<"------------------------------------------------------"<<endl<<endl;
		}
};

//bank info
class bankaccount{
	private:
			string name,typ_of_acc;
	 		long long int acc_no,balance;
			string address, location;
			long int deposit,withdrawal;
	public:
				void name_of_depo(string name)
				{
					this->name =name;
				}
				void address_of_depo(string address)
				{
					this->address = address;
				}
				void location_of_depo(string location)
				{
					this->location = location;
				}
				void accountno(long long int acc_no)
				{
					this->acc_no =acc_no;
				}

				void balance_value(long long int bal)
				{
					balance = bal;
				}
				void deposit_value(long long int deposit)
				{
					this->deposit = deposit;
				}
				void display()
				{
					cout<<"The Name of Account holder is :"<<name<<endl;
					display1();
					cout<<"Enter the Amount to be Deposited Rs."<<deposit<<endl;
					putdata1();
					cout<<"              Thank you!               ";
				}
				void display1()
				{
					cout<<"Present available balance : RS."<<balance<<endl;
				}
				//for deposit of money
				void getdata1(long int deposit)
				{
					balance += deposit;
				}
				void putdata1()
				{
					cout<<"Your new available Balanced Amount is Rs."<<balance<<endl;
				}
				
				//for withdrawal
				void getdata2(long int withdrawal)
				{
			
				if (withdrawal<=balance)
				{
					balance -= withdrawal ;
					cout<<"After withdrawal , the total balance in account is :"<<balance<<endl;
				}
				else
				{
					cout<<"Insufficient Available Balance in your account."<<endl
					
					<<"                      Sorry !!                  "<<endl;
				}
			}
	
		};

//main menu of ATM
class main_menu : public bankaccount{//inherite bankaccount
	private:
		
		friend class PAKC; // it is use to access the properties of main_menu in PAKC
		int num;
		public:
			
			main_menu()
			{
				cout<<"                  ATM Main Menu Screen                "<<endl<<endl;
				
				cout<<"Enter [1] To Deposit Cash                   "<<endl
					<<"Enter [2] To Withdraw Cash                  "<<endl
					<<"Enter [3] To Balance Inquiry                "<<endl
					<<"Enter [0] To Exit ATM                       "<<endl<<endl
					
					<<"PLEASE ENTER A SELECTION AND PRESS RETURN KEY :"<<endl;
					
				cin>>num;
					
				switch(num)
				{
					case 1:
						{
							string name,typ_of_acc;
							long long int acc_no,bal,deposit,withdrawal;
							string address,location;
							cout<<"The Name of the Account Holders are:";
							cin.ignore(); //// Clear the buffer before getline
							getline(cin,name);
							
							cout<<"The Account Holders' address is: ";
							cin.ignore();
							getline(cin,address);
							
							cout<<"The Branch location is: ";
							cin.ignore();
							getline(cin,location);
							
							cout<<"Enter your account number:";
							cin>>acc_no;

							cout<<"Enter your current amount:";
							cin>>bal;
							cout<<"Enter the amount you want to deposit:";
							cin>>deposit;
							
							name_of_depo(name);
							address_of_depo(address);
							location_of_depo(location);
							accountno(acc_no);
							balance_value(bal);
							deposit_value(deposit);
							getdata1(deposit);
							//for diaplay
							display();
					break;
				}
					
					case 2:
						{
							string name,typ_of_acc;
							long long int acc_no,bal,deposit,withdrawal;
							string address,location;
							cout<<"The Name of the Account Holders are:";
							//cin>>name;
							cin.ignore(); //// Clear the buffer before getline
							getline(cin,name);
							
							cout<<"The Account Holders' address is: ";
							cin.ignore();
							getline(cin,address);
							
							cout<<"The Branch location is: ";
							cin.ignore();
							getline(cin,location);
							
							cout<<"Enter your account number:";
							cin>>acc_no;
							
							cout<<"Enter your current amount:";
							cin>>bal;
							
							cout<<"Enter the amount you want to withdraw from your account:";
							cin>>withdrawal;
							
							name_of_depo(name);
							address_of_depo(address);
							location_of_depo(location);
							accountno(acc_no);
							balance_value(bal);
							//for display
							getdata2(withdrawal);
					break;
				}
										
					case 3:
						{
							string name,typ_of_acc;
							long long int acc_no,bal,deposit,withdrawal;
							string address,location;
							cout<<"The Name of the Account Holders are:";
							//cin>>name;
							cin.ignore(); //// Clear the buffer before getline
							getline(cin,name);
							
							cout<<"The Account Holders' address is: ";
							cin.ignore();
							getline(cin,address);
							
							cout<<"The Branch location is: ";
							cin.ignore();
							getline(cin,location);
							
							cout<<"Enter your account number:";
							cin>>acc_no;
							
							cout<<"Enter your current amount:";
							cin>>bal;
							name_of_depo(name);
							address_of_depo(address);
							location_of_depo(location);
							accountno(acc_no);
							balance_value(bal);
							//for diaplay
							display1();
					break;
				}
					
					case 0:
						{
						cout << "           Thank you! Visit Again :)" << endl;
						break;
				}
				
				default:
					cout<<"Invalid value! ";
					break;
			}
		}
			
};


//this class will help to take any number from user
class PAKC{
	public:
		char ch;
	//friend class start; --> not necessary. I can access it by obj called
	//Friendship is useful for accessing private or protected members, not public ones.
		void PAKC_()
		{
			cout<<"Press any key to continue . . .(only Alphebat)"<<endl<<endl;
			cin>>ch;
			
			if ((ch>=65 && ch<=90)|| (ch>=95 && ch<=122))
			{
				main_menu();
			}
			else
			{
				cout<<"PLEASE LEAVE ME!  ";
			}
		}
};

//it will start the working of ATM
class start{
	public:
		int num,pin_;
		start()//CONSTRUTOR
		{
		cout<<"Press 1 and Then Press Enter to Access Your Account Via Pin Number"<<endl<<endl
		<<"                                          or                            "<<endl
		<<"Press 0 and press Enter to get Help.                                    "<<endl<<endl;
		
		cin>>num;
		const int pin = 12345;
		
		if(num == 1)
		{
			cout<<"                   ATM ACCOUNT ACCESS                   "<<endl;
			cout<<"Enter your Acc Pin Access Number! [Only one attept is allowed]"<<endl<<endl;
			
			cin>>pin_; 
			switch(pin_) {
			    case 12345:
			        PAKC o1;//calling class with the help of object
					o1.PAKC_();
			        
			        break;
			    default:
			        cout<<"                THANK YOU                      "<< endl<<endl;
			        cout<<"You had made your attempt which failed !!! No More attempts allowed!!  Sorry !!"<<endl<<endl;
			        PAKC o2;
					o2.PAKC_();
					break;
			}

		}
		else
		{
			cout<<"                   ATM ACCOUNT STATUS                    "<<endl;
			cout<<"You must have the correct pin number to access this account. See your"<<endl
					<<"bank representative for assistance during bank opening hours"<<endl
							<<"Thanks for, your choice today !"<<endl;
			PAKC o1;
			o1.PAKC_();
		}
		}
};

int main()
{
	welcome w1;
	start s1;
	return 0;
}

