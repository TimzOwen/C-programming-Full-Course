

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


