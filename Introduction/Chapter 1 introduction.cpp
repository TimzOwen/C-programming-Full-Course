
// configuration of the project
#include<iostream>

using namespace std;

// programming--> giving your computer a set of instructions to execute;



    // COMMENTS IN C++:
    // They never get executed;--> useful for describing what a function/code does
    // you can comment out some code to check if the code at that point is the problem if you dont delete

    // Uses forward slash "//" --- does not get 
    
    /*This is a multi-line
    way of commenting things
    N/B:---> CHECK THE TASK ON CALCULATOR AND USE MULTILINE COMMENTS and update the github one.
    */


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
	
	
	

	// The MAD LIBS GAME
	// The game is just answer from user input and forms a story like page from filling in the blank spaces
	string flowerName, flowerColor, country; 
	cout<<"Enter your favourite flower: ";
	getline(cin,flowerName);
	cout<<"Enter color of your favourite flower: ";
	getline(cin,flowerColor);
	cout<<"which country will you want it from?  ";
	getline(cin,country);
	
	cout<<flowerName <<"are colorful"<<endl;
	cout<<"The color is always "<<flowerColor<<endl;
	cout<<"Its imported from "<<country <<" oversees"<<endl;

	 
    // ARRAYS 
	// Arrays are created using the [] and passing in elements {} , can also be accessed with indexing.
	
	int scores[] = {2, 3, 4, 5, 6, 7, 8, 9, 10}; // creating and initializing arrays
	cout<<scores[0]<<endl;		// accessing an element with indexing.
	scores[0] = 20;			// --> 2 // modifying elements in an array;
	cout<<scores[0]<<endl;	// -->20
	
	// fixed arrays 
	int topScores[10];		//specify the number of elements as 10;
	topScores[0] = 10; 		// assigning values into an array
	topScores[1] = 20;
	cout<<topScores[1]<<endl;  	//--->20

	// 2-D Arrays
    // Array inside another array 

    // Archotecture
    arrays numbers[rows-size-Number][columns-Total-elements] = 
                                                                Parent Array--{
                                                                    {child}, 
                                                                    {child},
                                                                    {child}
                                                                Parent array---}
	
    int coordinates[3][3] = {
                            {2,4,6,},
                            {1,3,5},
                            {10,20,30}
                            };
    
    // to access elements, use to [][] for row and column indexies. 
    cout<<coordinates[0][0] // print 2 ---> First row, first element
