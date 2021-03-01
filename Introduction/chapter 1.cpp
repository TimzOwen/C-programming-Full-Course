
// configuration of the project
#include<iostream>

using namespace std;

// programming--> giving your computer a set of instructions to execute;

//This is the main function that gets called before any code gets executed
int main(){
    // print Hello world of programming;
    cout<<"Hello world" <<endl;
    cout<<"Hello owen "<< endl;
   
    
    // printing Right angle Triangle
    // order of execution
    cout<<"			" <<endl;
	cout<<"		 /| " <<endl;
	cout<<"	    / | " <<endl;
	cout<<"    /  | " <<endl;
	cout<<"   /   | " <<endl;
	cout<<"  /    | " <<endl;
	cout<<" /_____| " <<endl;

    // Variables;
    // container for storing different information in a computer memory
    // booking space    
    string myName = "Owen";
    int myAge ;
    myAge = 30;
    cout<<"my name is "<<myName<< endl;
    cout<<"and my age is "<<myAge<< "years"<<endl;

    // updating variables and declaring and asigning variables;
    string myName = "Timz Owen";
 	int myAge = 20;
 	string mySchool;
 	mySchool = "Kabarak University";
 	cout<<"My name is "<<myName<<endl;
 	cout<<"I am "<<myAge<<" years"<<endl;
 	cout<<"I school at "<<mySchool<< " in Nakuru Kenya."<<endl;

    
    // DATA TYPES:

    //char ---> used to represent single character in our computer memory 
	char score = "B";
	
	// string is a combination of character , multiple concatenated char
	string myName = "Hello C";
	
	// intergers --> this are whole numbers
	int myAge = 40;
	
	// floating point --> (decimal) . represent decimal poin numbers (float and double->stores more decimal points than flaot)
	double bankBalance = 59.35898723795738;
	float rate = 59.90;
	
	// Boolean --> represent two state data , True/False 0r 1/0;
	bool isRaning = true;

	
     

    // String s in strings
    // Strings in C programming:
    
    // printing in new line (endl, \n)
    
    // print directly to the output string;
	cout<<"70"<<endl;    
	
	// print with variables
	string userName = "Timz Owen";
	cout<<userName<<endl;
	
	
	
	// String methods in C programming 
	// just like functions this uses a block of code designed to do a predefined tasks, Houses multiple reusable code 
	cout<<userName.length()<<endl;  // prints 9 characters including space
	
	//indexing strings
	cout<<userName[0]<<endl;  // accesing first element 
	
	// update string with index  use single and not double quotes
	userName[0] = 'O';
	cout<<userName<<endl;
	
	// Find elements existance in a string
	cout<<userName.find("Owen",0)<<endl;	 // returns the first occurance of the word/ string
	
	// creating new string wit index
	cout<<userName.substr(0,4)<<endl;  // the parameter take in the starting and end index;
	
	string newName = userName.substr(4,5);
	cout<<newName<<endl;
	


    	// NUMBERS IN C PROGRAMMING 
	//printing numbers to the screen
	cout<<50<<endl;
	cout<<-50<<endl;
	cout<<-60.6083503508<<endl;
	
	//math operations
	cout<<5+5<<endl;	//addition
	cout<<5*5<<endl;	//multiplication
	cout<<5-5<<endl;	//subtraction
	cout<<5/5<<endl;	//Division
	cout<<5%2<<endl;	//Modulous --->returns the remainder after divion
	
	// order of operation---->BODMAS, (this gives priority to the order of execution);
	cout<<5+2*5<<endl;	     //15
	cout<<(5+2)*5<<endl;	//35
	
	// inbuilt maths methods. First import the cmath from top
	cout<< sqrt(49)<<endl;	//calculates the square root of a number
	cout<< pow(2,2)<<endl;	// gets the power of a number, takes in 2 parameters
	cout<< round(4.5)<<endl;	// Rounds off a number 
	cout<< floor(3.9)<<endl;	// rounds down to the pointed integer
	cout<< ceil(3.2)<<endl;		//Rounds up whichever the case
	cout<< fmax(3,50)<<endl;	//Returns the largets of two numbers
	cout<< fmin(3,50)<<endl;	//Returns the smalllest of two numbers
	
	
		
	// GETTING USER'S INPUT FROM KEYBOARD;
	// Get the information and store it in a computer's memory space
	
	int score;		//step one, declare a variable that will be used to store your data
	cout<<"Enter score: ";	//ask theh user for data by writing to the screen what he/she should enter
	cin>> score;			//take the user input and store it in the declared variable
	cout<<"The final score is "<<score<< " Goals"<<endl; // concatenate the string with the variable for better output
	
	
	double ratio;
	cout<<"Enter the ration: "<<endl;
	cin>> ratio;
	cout<<"The final ratio is "<<ratio;

	char initial;
	cout<<"Enter your initial here:"<<endl;
	cin>>initial;
	cout<<"Your name initial character is: "<<initial;

	//get user input in log strings
	string name;
	cout<<"Enter your name :"<<endl;
	getline(cin, name);
	cout<<"Hello Engineer: "  <<name;


