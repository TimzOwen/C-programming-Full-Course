

    // CONDITIONAL STATEMENTS: 

    // IF STATEMENTS:
    // Conditional statements---> used for decision making depending on the state of a condition:
	
	if passed-->
		proceed to next class:
	else-->
		repeat previous class:
    
    // architecture:
	if(condition){
		// do something depending on the condition
	}else{
		// Do this if the condition was not met from cond 1
	}

    // example one.
   	int score = 50;
	if(score == 50){
		cout<<"Hurray !!! you passed";
	}

    //Handling the failed condition:
    int score = 50;
	if(score == 50){
		cout<<"You passed !!!";
	}else{
		cout<<"You failed repeat previous class";
	}

    // C++ conditional & Comparison operators:

	// == ----> Means eqaul  ----> 
	// = --->The assignment operator
	// && ----> And operator (Both values must be true for the condition to be executed)
	// || ----> OR operator (One of the conditon can be true/false for the excecution to happen. )
	// !=-----> Not equal operator: (opposite of the equak sign)
    // >= ---->greater or equal to
    // <= ---> Less or eqaul to
	
	power is back && lights are on;
	The class is Pyhsical || Online; 


    // Conditions and operators and more conditions
    int score = 600;
	int passMark = 80;
	
	if (score == passMark){
		cout<<"You on the pass mark line "<<passMark<<endl;
	}else if(score>passMark){
		cout<<"You are  Genius, passed passMark"<<endl;
	}
	else{
		cout<<"You failed";
	}

	
    //restructure the code to handle scores more than 100% score and not less than 0; combine operators:

    int score = 90;
	int passMark = 80;
	
	if (score == passMark){
		cout<<"You on the pass mark line "<<passMark<<endl;
	}else if(score>passMark && score<=100){
		cout<<"You are  Genius, passed passMark"<<endl;
	}
	else if(score>=0 && score <passMark){
		cout<<"You failed";
	}
	else{
		cout<<"Incorrect input, enter number between 0-100";
	}

    // task:
    // if raining-->wear jacket, if sunshine--> go swimming --else watch a movie:(use boolean values--> True/False)
    // isRaning, !isRaining:

    // Use comparison  operator to find largets of 2 numbers;
    int num1 = 10;
	int num2 = 30;
	int largest; // This variable is used to store the largets value
	if(num2>num1){
		largest =  num2;	
	}
	else{
		largest = num1;
	}
	cout<<largest;


    // Top scorer of three awards Championship:
    // Tasks: use comparison operators
    int team1 = 20;
    int team2 = 40;
    int team3 = 15;
    int winningScore;

    if (team1>team2 && team1>team3){
        winningScore = team1;
    }else if (team2>team1 && team2>team3){
        winningScore = team2;
    }else{
        winningScore = team3;
    }
    cout<<"Winning Score is: "<<winningScore;

   
    // Task:
    // Use combination of comparison operators and nested if else statement to creat a calculator
    // in which a user enters both numbers and operation to be performed.

    int num1, num2;
    char ops;
    double results;
    
    cout<<"Enter num1 "<<endl;
    cin>>num1;
    cout<<"Enter desired operator: "<<endl;
    cin>> ops;
    cout<<"Enter num2 "<<endl;
    cin>>num2;

    if (ops == ' / '){
        results = num1/num2;
    }else if(ops == '*')
    {
        results = num1 * num2;
    }
    else if (ops == '+'){
        results = num1 + num2;
    }
    else if (ops == '-')
    {
        results = num1-num2;
    }
    else {
        cout<<" Wrong input: choose....\n + ---> Addition \n - ---> Subtraction \n * ---> Multiplication \n / ---> Division"
    }
    cout<<" The result for "<<num1<<" "<<ops<<" "<<num2<< " is: "<<results;

    // SWITCH STATEMENTS:
	// used for checking one value againest another value. Allows you to exit out of loop is a condition is met.
	// architecture:---> switch, case and default;
	
	switch(Condition here to check){
		case condition:
			// here goes the code to be executed:
			break;  // gets out of the loop.
		case condition 2:
			// code to be executed goes here.
			break;
		default:
			// this gets executed if none of the case conditions are met;
	}


    // Example 1:
    string dayOfTheWeek;
	int dayNumber = 2;
	switch(dayNumber){
		case 1:
			dayOfTheWeek = "Sunday";
			cout<<dayOfTheWeek;
			break;
		case 2:
			dayOfTheWeek = "Tuesday";
			cout<<dayOfTheWeek;
			break;
		case 3:
			dayOfTheWeek = "Wednesday";
			cout<<dayOfTheWeek;
			break;
		case 4:
			dayOfTheWeek = "Thursday";
			cout<<dayOfTheWeek;
			break;
		case 5:
			dayOfTheWeek = "Friday";
			cout<<dayOfTheWeek;
			break;
		case 6:
			dayOfTheWeek = "Sartuday";
			cout<<dayOfTheWeek;
			break;
		case 7:
			dayOfTheWeek = "Monday";
			cout<<dayOfTheWeek;
			break;
		default:
			dayOfTheWeek = "Invalid day, try again";
			cout<<dayOfTheWeek;
	}
	
	
    // While loops;


	// --> Allows us to loop execute a code/ perform something , while that condition is true;
    // WHILE LOOPS:----> First check the condition then execute the code
	// architecture:
	
	Set a condition = value;
	while(the set Condition == value){
		// Keep executing/ Looping through this code:
		//only exit this loop if the set condition is nologer met
	}


    // be careful of infinite loops----> takes up loats of memory space of a computer;
    int number = 0;
	while (number<=5){
		cout<<"Current score is: "<<number<<endl;
		number = number + 1;
	}


    // DO WHILE LOOPS:
    // do smething first then check condition:
    //architecture:
    declare condition = value;
	do{
		// execute the code---> whether or not the condition has been met
		// you code goes here
	}	
	while(Condition to be check now);


    // example:
    int currentNumber = 10;
	do{
		cout<<"The current number is: "<<currentNumber<<endl;
		currentNumber ++;
	}
	while(currentNumber<=5);
	
	return 0;	

    
    //  THE GUESS GAME:
    // THE GUESS GAME:
	int secretNum = 5;
	int userNumber;
	
	while(userNumber != secretNum ){
		cout<<"Guess the number:..."<<endl;
		cin>>userNumber;
	}
	cout<<"You won !!";


    // task, reassign code to have--> maxGuess number and print lose if out of maxGuess
    int guessNum = 10;
    int userGuess;
    int maxGuess = 4;
    int numAttempts = 0;
    bool outOfAttempts = false;
    
    while(userGuess != guessNum && !outOfAttempts){
        if (numAttempts<maxGuess){
            cout<<"Enter guess: "<<endl;
            cin>>userGuess;
            numAttempts ++;
        }else{
            outOfAttempts = true;
        }  
    }
    if(outOfAttempts){
    	cout<<"You lost ";
	}
	else{
		cout<<"You won !!!";
	}
	
	

	



