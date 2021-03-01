

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
