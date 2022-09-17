#include<windows.h>
#include<iostream>
#include<string>

using namespace std;
int main(){
char inp , y, n, Y, N;
string name , gtkey;
int age;



	cout<<"\t\t WELCOME TO CHATBOX \n\n";
	cout<<"To continue the program type 'Y' and to End type 'N' - \n ";
	cout<<"-->";
	cin>>inp;
	//condition whether its y or n.
	if(inp == 'y' || inp=='Y')
	{
		cout<<"\n WELCOME HERE !";
		
		
}
	else{
	
	
		cout<<"\n Thanks for coming";
		return 0;
	}
	system("cls"); ///clean out the terminal
	 if(gtkey != "bi")
	{
		cout<<"\t NAMASTEY USERS \n";
				cout<<"-->";

		cin>>gtkey;
		cout<<" \n What is your name ? \n";
				cout<<"-->";

		cin>>name;
		cout<<" \n What is your age? \n";
				cout<<"-->";

		cin>>age;
		
		
		switch( age){
			case  18:
				cout<<"\n you are young ";
				break;
				case 30:
					cout<<"\n you are adult";
				break;
					default:
						cout<<"\n Nothing to say about you age";
		}
		cout<<"\n bye  bye  "<<name<<"\n";
		cout<<"-->";
		cin>>gtkey;
	}
	system("cls");
	cout<<"\t\t\t\t  PROGRAM END HERE";
	return 0; 
	}
