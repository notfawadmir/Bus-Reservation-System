#include<iostream>
#include<string>
using namespace std;
int main()
{
	
	int a,b,c,d,e,f,g,h,i,j,k;
	string aa,bb,num1,num2;

	start:
	start1:
		cout<<endl;
	             cout<<"                                               WELL TO THE BUS STATION!"<<endl;
	             
				 cout<<"========================================================================================================================"<<endl;  
	
	             cout<<"How Can I Help You!"<<endl;
	
	cout<<endl;
	sss:
	             cout<<"1.Select Bus Route."<<endl;
	             cout<<"2.Bus Information."<<endl;
	             cout<<"3.To Reserve A Seat."<<endl;
				 cout<<"Option Selected: ";
				 cin>>i;
				 	
	if(i==1)
	{
		goto bus_route;
	}
	
	else if(i==2)
	{
		goto bus_iii;
	}
	
	else if(i==3)
	{
		goto seat_selection;
	}
	else
	{
		cout<<"Invalid Response!"<<endl;
		cout<<endl;
		goto sss;
	}
	bus_route:
		
	cout<<endl;
	cout<<endl;
	
	
	cout<<"Select Your Route"<<endl;
	cout<<endl;
    
    cout<<"From ---->";
	cin>>aa;
	
	cout<<"To   ---->";
	cin>>bb;
	
	cout<<"<-------------------------------->  ";
	
	     
	cout<<endl;
	

	if(aa==bb)
	{
	cout<<endl;
	cout<<"Invalid Route!"<<endl;
	goto bus_route;
    }
	else
	{
	  cout<<"There Are 2 Buses Available For This Route From  ''"<<aa<<"'' "<<"To  ''"<<bb<<"''."<<endl;
	}  
	cout<<endl;
	
 bus_iii:
 cout<<endl;	
	             cout<<"========================================================================================================================"<<endl;
	
	bus_info:
	cout<<endl;
	cout<<"Press 1 For Bus Information"<<endl;
	cout<<"Press 0 To Go Back To The Main Menu"<<endl;
	cout<<"Option Selected: ";
	cin>>f;
	
	
	
	if(f==0)
	{
	error:	
	cout<<endl;
	cout<<"Thank You For Using This Program"<<endl;
	cout<<"Return To The Main Menu"<<endl;
	cout<<"1.Yes"<<endl;
	cout<<"2.No"<<endl;
	cout<<"Option Selected:";
	cin>>c;
	if(c==1)
	{
		goto start1;
	}
	if(c==2)
	{
		goto bus_info;
	}
}

	else if(f==1)
		{
		         cout<<"========================================================================================================================"<<endl;
    	cout<<"                                                    ######   BUS INFORMATION   #####"<<endl;
    	cout<<endl;
    ggg:
	cout<<endl;	
	cout<<"Which Bus Would You Like To Select"<<endl;
	cout<<endl;
	cout<<"1.Small Bus"<<endl;
	cout<<"2.Big Bus"<<endl;
	cout<<"Option Selected: ";
	cin>>a;
	cout<<endl;
	}
	
		else
	{
		cout<<endl;
		cout<<"Invalid Command!"<<endl;
		cout<<endl;
		goto bus_info;
	}
	
	
		if(a==1)
	
	{
		cout<<"There Are 19 Seats Available Out Of 30 Seats!"<<endl;
		cout<<"The Bus Number Plate Is: 5467"<<endl;
		cout<<"The Bus Will Leave At 7 O' Clock In The Morning"<<endl;
		cout<<endl;
	}
	
	
	else if(a==2)
	{
		cout<<"There Are 28 Seats Available Out Of 50 Seats"<<endl;
		cout<<"The Bus Number Plate Is: 2398"<<endl;
		cout<<"The Bus Will Leave At 9 O' Clock In The Morning"<<endl;
		cout<<endl;
	}
	
	else
	{
		cout<<endl;
	    cout<<"Invalid response!"<<endl;
	    goto ggg;
	}	
	

	seat_reservation:
	cout<<endl;	
	cout<<"Press 1 To Go To Seat Reservation Section"<<endl;
	cout<<"Press 0 If You Want To Return To The Main Menu"<<endl;
	cout<<"Option Selected: ";
	cin>>g;
	

	
	if(g==0)
	{lala:
	cout<<endl;	
	cout<<"Return To The Main Menu"<<endl;
	cout<<"1.Yes"<<endl;
	cout<<"2.No"<<endl;
	cout<<"Option Selected:";
	cin>>c;
	if(c==1)
	{
		goto start1;
	}
	else if(c==2)
	{
		goto seat_reservation;
	}
	
	else
	{
		cout<<endl;
		cout<<"Invalid Response!"<<endl;
		goto seat_reservation;
	}
	
	
	}
	

		if(g==1)
	{
	seat_selection:
	cout<<endl;

			         cout<<"========================================================================================================================"<<endl;
    	cout<<"                                                   #####  Seat Revervation   #####"<<endl;
	             hhh:
				 cout<<"Do you want to reserve a seat "<<endl;
	             cout<<"1.Yes"<<endl;
	             cout<<"2.No"<<endl;
	             cout<<"Option Selected: ";
				 cin>>b;
				 cout<<endl;
	}
	
seat_selection2:	

	
if(b==2)
{
	cout<<"Thank You For Using This Program"<<endl;
	cout<<"Return To The Main Menu"<<endl;
	cout<<"1.Yes"<<endl;
	cout<<"2.No"<<endl;
	cout<<"Option Selected:";
	cin>>c;
	if(c==1)
	{
		goto hhh;
	}
}
	else if(b==1)
{

	cout<<"1.Small Bus"<<endl;
	cout<<"2.Big Bus"<<endl;
	cout<<"Option Selected: ";
	cin>>h;
	cout<<endl;
}	
	
	if(h==1)
	
	{lala3:
		cout<<endl;
	cout<<"Seat Selection:"<<endl;
	cout<<"1.Front Seats"<<endl;
	cout<<"2.Middle Seats"<<endl;
	cout<<"3.Back Seats"<<endl;
	cout<<"Option Selected: ";
	cin>>j;
	cout<<endl;
	
	

	
		if(j==1)
			{
			
			cout<<"Seat Number ' 4 ' Has Been Reserved!"<<endl;
			
		    }
		
		
		else if(j==2)
		{
				
		    cout<<"Seat Number ' 17 ' Has Been Reserved!"<<endl;
		   
		}
		
		
		else if(j==3)
			{
			
			cout<<"Seat Number ' 29 ' Has Been Reserved!"<<endl;
			
		    }
		else
		{
			cout<<"Invalid Response!"<<endl;
			cout<<endl;
			goto lala3;
			}    
		
		}	
	

 else if(h==2)
	{lala2:
		cout<<endl;
	cout<<"Seat Selection:"<<endl;
	cout<<"1.Front Seats"<<endl;
	cout<<"2.Middle Seats"<<endl;
	cout<<"3.Back Seats"<<endl;
	cout<<"Option Selected: ";
	cin>>k;
	cout<<endl;	
	
	{
		if(k==1)
			{
			
			cout<<"Seat Number ' 5 ' Has Been Reserved!"<<endl;
			
			}
		
		
		else if(k==2)
			{
			
		    cout<<"Seat Number ' 21 ' Has Been Reserved!"<<endl;
		   
		    }
		
		
		else if(k==3)
			{
			
			cout<<"Seat Number ' 44 ' Has Been Reserved!"<<endl;
			
		    }
		else
		{
		cout<<endl;
	      cout<<"Invalid Response!"<<endl;
	      cout<<endl;
	      goto lala2;
	
		}	
			
	}
	
	}
		
	
else
{cout<<endl;
	cout<<"Invalid Response!"<<endl;
	goto seat_selection;
}	

	
	cout<<endl;
	cout<<"========================================================================================================================"<<endl;
	cout<<"                                                     #####   Payment Section   #####"<<endl;
	cout<<endl;
	cout<<"Your Ticket Price is Rs: 300!"<<endl;
	cout<<endl;
haha:
	cout<<"Select Payment Method:"<<endl;
	cout<<endl;
	cout<<"1.Easypaisa / JazzCash"<<endl;
	cout<<"2.Bank Account"<<endl;
	cout<<"Select Option:";
	cin>>e;

		
	if(e==1)
	
	{acc_easyjazz:
		
		const int length=10;
		
		cout<<"Input Your 10 Digit Easypaisa / JazzCash account number: ";
		cin>>num1;
		
		if(num1.length()>length)
		{
			cout<<endl;
			cout<<"Invalid Account Number!"<<endl;
			goto acc_easyjazz;
		}
		
		if(num1.length()<length)
		{
		    cout<<endl;
			cout<<"Invalid Account Number!"<<endl;
			cout<<endl;
			goto acc_easyjazz;
		}

		}
		
	else if(e==2)
	
	{acc_bank:	
		const int length=16;
		
		cout<<"Input Your 16 Digit Bank Account Number: ";
		cin>>num1;
		
		if(num1.length()>length)
		{
			cout<<endl;
			cout<<"Invalid Account Number!Try Again"<<endl;
			goto acc_bank;
		}
		
		if(num1.length()<length)
		{
			cout<<endl;
			cout<<"Invalid Account Number!Try Again"<<endl;
			cout<<endl;
			goto acc_bank;
		}

		}
		
			else
		{
			cout<<endl;
			cout<<"Invalid Response!"<<endl;
			cout<<endl;
			goto haha;
		}
			
		cout<<"Your Account Number is : "<<num1<<endl;
		cout<<endl;
		
		pin:
		cout<<"Enter Your 4 Digit Pin:"<<endl;
		cin>>num2;
		
		const int length=4;
		if(num2.length()>length)
		{
			cout<<endl;
			cout<<"Invalid Pin Try Again!"<<endl;
			cout<<endl;
			goto pin;
			
		}
		
		if(num2.length()<length)
		{
			cout<<endl;
			cout<<"Invalid Pin Try Again!"<<endl;
			cout<<endl;
			goto pin;
			}
		

			
	
	cout<<"Account Inforamtion Recieved Successfully!"<<endl;
	cout<<endl;
	cout<<"Your Account Number Is: '' "<<num1<<" ''"<<endl;
	cout<<"Your Pin Is: ''"<<num2<<" ''"<<endl;
	cout<<endl;
	cout<<"                                        #####  You have Bought The Ticket Successfully  ######"<<endl;
	cout<<endl;
	cout<<"========================================================================================================================"<<endl;
	geto:
	cout<<endl;
	cout<<"Thank You For Using Bus Reservation System  :)"<<endl;
	cout<<endl;
	cout<<"Press 0 If You Want To Return To The Main Menu"<<endl;
	cout<<"Press 1 If You Want To End The Program"<<endl;
	cout<<"Press 2 If You Want To Reserve Another Seat"<<endl;
	cout<<"Option Selected: ";
	cin>>d;
	cout<<endl;
	
	if(d==1)
	{
		cout<<"PRESS ENTER TO END THE PROGRAM!";
		cout<<endl;
	}
	else if(d==2)
	{
		goto seat_selection;
	}
	
	else if(d==0)
	{
		goto lala;
	}
	
	else
	{
		cout<<endl;
		cout<<"Invalid Command!"<<endl;
		goto geto;
	}
	return 99;
}
