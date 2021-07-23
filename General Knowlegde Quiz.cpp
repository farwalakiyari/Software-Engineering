#include<iostream>
#include<string>

using namespace std;

int main()

{	

	string name;
	char game;
	char M,m,G,g; 
	
	cout<< "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t---------------WELCOME TO THE QUIZ----------------" <<endl;
	cout<<"Please Enter your name: ";
	cin >> name;
	
	cout<< "\nHey! "<< name; 
	cout<< " good to see you here."<<endl;
	cout<< "We have two types of Quizes for you \n\nPress M for Mathematical, \nPress G for General Knowledge \n\nWhich one would you like to play?" <<endl;
	cin>> game;
	
	//GENERAL KNOWLEGDE QUIZ
	if (game == 'G' )
	{	
		//QUESTION #1
		char Ans;
		cout<<"Question #1 : What is the Capital of Pakistan? \na) Karachi \nb) Lahore \nc) Islamabad \nd) Peshawar" <<endl;
		cin>> Ans;
		
		if(Ans == 'c')
		{
			cout<<"\nCorrect Answer\n\n"<<endl;
			
		}
		else 
			cout<<"\nWrong Answer.\n\n" << endl;
	
	 	
	 	//QUESTION #2
		cout<<"Question #2 : What is the National Animal of Pakistan? \na) Markhor \nb) Tiger \nc) Bear \nd) Deer" <<endl;
		cin>> Ans;
		
		if(Ans == 'a')
		{
			cout<<"\nCorrect Answer\n\n"<<endl;
			
		}
		else 
			cout<<"\nWrong Answer.\n\n" << endl;
	
		
		//QUESTION #3 
		cout<<"Question #3 : Who is the current Prime Minister of Pakistan? \na) Nawaz Shareef \nb) Shahrukh Khan \nc) Quad-e-Azam \nd) Imran Khan" <<endl;
		cin>> Ans;
		
		if(Ans == 'd')
		{
			cout<<"\nCorrect Answer\n\n"<<endl;
			
		}
		else 
			cout<<"\nWrong Answer.\n\n" << endl;
	
	
		//QUESTION #4
		cout<<"Question #4 : Which is the longest river in Pakistan? \na) Indus River \nb) Neelum River \nc) Jhelum River \nd) Kunhar River" <<endl;
		cin>> Ans;
		
		if(Ans == 'a')
		{
			cout<<"\nCorrect Answer\n\n"<<endl;
			
		}
		else 
			cout<<"\nWrong Answer.\n\n" << endl;
	
	
		//QUESTION #5
		cout<<"Question #5 : What is the National Language of Pakistan? \na) Punjabi \nb) Sindhi \nc) Urdu \nd) Pashto" <<endl;
		cin>> Ans;
		
		if(Ans == 'c')
		{
			cout<<"\nCorrect Answer\n\n"<<endl;
			
		}
		else 
			cout<<"\nWrong Answer.\n\n" << endl;
	
		cout<<"\nWell Done" << name;
		cout<<endl; 
	}
	
	
	//MATHEMATICS QUIZ
	else if(game == 'M' )
	{
		//QUESTION #1
		char Ans;
		cout<<"Question #1 : What is 2X2 \na) 10 \nb) 4 \nc) 100 \nd) none of these" <<endl;
		cin>> Ans;
		
		if(Ans == 'b')
		{
			cout<<"\nCorrect Answer\n\n"<<endl;
			
		}
		else 
			cout<<"\nWrong Answer.\n\n" << endl;
	
	 	
	 	//QUESTION #2
		cout<<"Question #2 : A boy had 10 apples, he gave 2 apples to his sister and 5 apples to his friend. How many apples are left with the boy? \na) 7 \nb) 2 \nc) 3 \nd) 9" <<endl;
		cin>> Ans;
		
		if(Ans == 'c')
		{
			cout<<"\nCorrect Answer\n\n"<<endl;
			
		}
		else 
			cout<<"\nWrong Answer.\n\n" << endl;
	
		
		//QUESTION #3 
		cout<<"Question #3 : if 1$ is equals to 160Rs than how many Rs will be for 3$ ? \na) 480 Rs \nb) 560 Rs \nc) 330 Rs \nd) 120 Rs" <<endl;
		cin>> Ans;
		
		if(Ans == 'a')
		{
			cout<<"\nCorrect Answer\n\n"<<endl;
			
		}
		else 
			cout<<"\nWrong Answer.\n\n" << endl;
	
	
		//QUESTION #4
		cout<<"Question #4 : 1 chips is for 20 rupess, salwa buys 7 chips from the shop. what will be total? \na) 70 Rs \nb) 120 Rs \nc) 280 Rs \nd) 140 Rs" <<endl;
		cin>> Ans;
		
		if(Ans == 'd')
		{
			cout<<"\nCorrect Answer\n\n"<<endl;
			
		}
		else 
			cout<<"\nWrong Answer.\n\n" << endl;
	
	
		//QUESTION #5
		cout<<"Question #5 : 2x3^2 is equals to ? \na) 12 \nb) 21 \nc) 13 \nd) 18" <<endl;
		cin>> Ans;
		
		if(Ans == 'd')
		{
			cout<<"\nCorrect Answer\n\n"<<endl;
			
		}
		else 
			cout<<"\nWrong Answer.\n\n" << endl;
	
		cout<<"\nWell done but You need to work hard " << name;
		cout<<endl; 
	}
	
	else 
		cout<<"THE CHARACTER YOU HAVE ENTERED IS INVALID, PLEASE ENTER IT AGAIN.";
}


