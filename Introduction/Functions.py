
	
	// C++ Functions 
	// This are collections of codes under one roof/method/container to perform predefined task and are reusable
	// always declare out of the main function the runs the code;
	
	//sample one function:, gets executed when we run our code
	int main(){
		// code goes here
		return 0;  //returns a value, for empty functions use void
	}

	// sample 2
	
	void greetingMessage(){
		cout<<"Good morning mr Engineer";
	}
	
	// call the method in main function
	
	int main(){
		
		cout<<"This message first"<<endl;
		greetingMessage();
		cout<<"Then this later"<<endl;
		return 0;
	}



    // function parameters 
    void studentName(string name){
	cout<<"Welcome C++ programming "<<name<<endl;
    }

    //This is the main function that gets called before any code gets executed
    int main(){
	
	// Funtion parameters:
	studentName("Timz");
    
    return 0;     
    }
   

    // Multiple parameters and Function reusability;

    void studentName(string name, int subjects){
	    cout<<"Welcome C++ programming "<<name<<" you registered for "<<subjects<<" subjects "<<endl;
    }

    //This is the main function that gets called before any code gets executed
    int main(){
        
        // Funtion parameters:
        studentName("Timz",8);
        //re-usability
        studentName("Owen",7);
        studentName("Bakshi",6);
        
        
    }     

    // Function Global declaration-----> the function can now be declared below the main function.
    void studentName(string name,int subjects);

    //This is the main function that gets called before any code gets executed
    int main(){
        
        // Funtion parameters:
        studentName("Timz",8);
        //re-usability
        studentName("Owen",7);
        studentName("Bakshi",6);
        
        
    }

    void studentName(string name, int subjects){
        cout<<"Welcome C++ programming "<<name<<" you registered for "<<subjects<<" subjects "<<endl;
    }

    

    // Function's Return values;-----> Giving back information for functions to the user.
    // Each function has a return value, void--> no turn type, string-->returns string , int-->returns integers.
    // The return key word tells the combiler that its done executing and should break.// No code after return else no output

    // function to cube a number:
    // The function takes in a number and cubes it (num^3 or num*num*num). 
    // You can still store the values or print it directly to the screen

    int cube(int num){
        int cubeNum = num * num * num;
        return cubeNum;
    }

    int main(){
        
        int results = cube(3);	
        cout<<"The cube result is: "<<results;
    }


    //exercise: simplify the function without storing the values:
    int cube(int num){
	return num * num * num;
    }
    int main(){	
	    cout<<"The cube results is: "<<cube(3);
    }

    // task 
    // use comparison operators to find largest of two numbers, enclose you code in a function
    
    int getLargest(int num1, int num2){
        int largest;
        // check for the conditions
        if (num1>num2){
            largest = num1;
        }
        else if (num2>num1){
            largest = num2;
        }
        else if (num1 == num2){
            cout<<" They are Equal:";
        }
        else{
            cout<<"Enter a number";
        }
        return largest;
    }

    int main(){	
        
        cout<<getLargest(90,90);
    }


    // Final Function task:
    // create a funciton to find greatest of 3 numbers. Rem to use comparison operators
    
    int largestNumber(int a, int b, int c){
        int largest;
        if(a>=b && a>=c){
            largest = a;
        }
        else if (b>=a && b>=c){
            largest = b;
        }else{
            largest = c; 
        }
        
    }

    int main(){	
        
        cout<<largestNumber(200,50,300);
    }


