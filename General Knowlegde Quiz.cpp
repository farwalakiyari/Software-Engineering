#include<iostream>
#include<string>

using namespace std;

int main()

{	

	string name;
	char game;
	char C,S,M,G; // removed unused characters and added two more characters for Computer And Science Quiz.  
	
	cout<< "---------------WELCOME TO THE QUIZ----------------" <<endl;
	cout<<"Please Enter your name: ";
	cin >> name;
	
	cout<< "\nHey! "<< name; 
	cout<< " good to see you here."<<endl;
	cout<< "We have two types of Quizes for you \n\nPress C for Computer Science, \nPress S for Science \nPress M for Mathematical, \nPress G for General Knowledge \n\nWhich one would you like to play?" <<endl;
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
			cout<<"\nCorrect Answer\n\n" <<endl;
			
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
	
		cout<<"\nWell Done,"<< name;
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
	
	//COMPUTER SCIENCE QUIZ
	if (game == 'C' )
	{	
		//QUESTION #1
		char Ans;
		cout<<"Question #1 : What does CPU stands for? \na) Common procedure unit \nb) Central processing unit \nc) Central programming unit \nd) None of these" <<endl;
		cin>> Ans;
		
		if(Ans == 'b')
		{
			cout<<"\nCorrect Answer\n\n" <<endl;
			
		}
		else 
			cout<<"\nWrong Answer.\n\n" << endl;
	
	 	
	 	//QUESTION #2
		cout<<"Question #2 : Who is known as father of Computer? \na) Bill gates \nb) Mark Zuckerburg \nc) Charles Babbage \nd) Tim Berner's Lee" <<endl;
		cin>> Ans;
		
		if(Ans == 'c')
		{
			cout<<"\nCorrect Answer\n\n"<<endl;
			
		}
		else 
			cout<<"\nWrong Answer.\n\n" << endl;
	
		
		//QUESTION #3 
		cout<<"Question #3 : When was C Language developed? \na) 1972 \nb) 1872 \nc) 1992 \nd) 1927" <<endl;
		cin>> Ans;
		
		if(Ans == 'a')
		{
			cout<<"\nCorrect Answer\n\n"<<endl;
						
		}
		else 
			cout<<"\nWrong Answer.\n\n" << endl;
	
	
		//QUESTION #4
		cout<<"Question #4 : What does ROM stands for? \na) Random Only Mode \nb) Read Only Mode \nc) Random Only Memory \nd) Read Only Memory" <<endl;
		cin>> Ans;
		
		if(Ans == 'd')
		{
			cout<<"\nCorrect Answer\n\n"<<endl;
			
		}
		else 
			cout<<"\nWrong Answer.\n\n" << endl;
	
	
		//QUESTION #5
		cout<<"Question #5 : What type of operating system is MS-DOS? \na) GUI  \nb) Multitasking \nc) CLI \nd) Menu driven interface" <<endl;
		cin>> Ans;
		
		if(Ans == 'c')
		{
			cout<<"\nCorrect Answer\n\n"<<endl;
			
		}
		else 
			cout<<"\nWrong Answer.\n\n" << endl;
	
		cout<<"\nWell Done,"<< name;
		cout<<endl; 
		
	}
	
	//GENERAL SCIENCE QUIZ
	if (game == 'S' )
	{	
		//QUESTION #1
		char Ans;
		cout<<"Question #1 : How many Planets are there in the solar system? \na) 8 \nb) 9 \nc) 11 \nd) None of these" <<endl;
		cin>> Ans;
		
		if(Ans == 'a')
		{
			cout<<"\nCorrect Answer\n\n" <<endl;
			
		}
		else 
			cout<<"\nWrong Answer.\n\n" << endl;
	
	
	 	//QUESTION #2
		cout<<"Question #2 : The sun is known as? \na) Planet \nb) Star \nc) Meteor \nd) Asteroid" <<endl;
		cin>> Ans;
		
		if(Ans == 'b')
		{
			cout<<"\nCorrect Answer\n\n"<<endl;
			
		}
		else 
			cout<<"\nWrong Answer.\n\n" << endl;
	
		
		//QUESTION #3 
		cout<<"Question #3 : The average adult has a blood volume of about ________ liters? \na) 4 \nb) 5 \nc) 8 \nd) 2" <<endl;
		cin>> Ans;
		
		if(Ans == 'b')
		{
			cout<<"\nCorrect Answer\n\n"<<endl;
						
		}
		else 
			cout<<"\nWrong Answer.\n\n" << endl;
	
	
		//QUESTION #4
		cout<<"Question #4 : The SI unit of Pressure is? \na) Henry \nb) Tesla \nc) Joule \nd) Pascal" <<endl;
		cin>> Ans;
		
		if(Ans == 'd')
		{
			cout<<"\nCorrect Answer\n\n"<<endl;
			
		}
		else 
			cout<<"\nWrong Answer.\n\n" << endl;
	
	
		//QUESTION #5
		cout<<"Question #5 : Which lense is used by a camera to form an image? \na) Convex lense  \nb) Condenser lense \nc) Concave lense \nd) None of these" <<endl;
		cin>> Ans;
		
		if(Ans == 'a')
		{
			cout<<"\nCorrect Answer\n\n"<<endl;
			
		}
		else 
			cout<<"\nWrong Answer.\n\n" << endl;
	
		cout<<"\nWell Done,"<< name;
		cout<<endl; 
	}
	
	
	else 
		cout<<"THE CHARACTER YOU HAVE ENTERED IS INVALID, PLEASE ENTER IT AGAIN.";
}


