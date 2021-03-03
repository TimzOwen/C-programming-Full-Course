


    // OBJECTS AND CLASSES
    // classes are blueprint of a simulation of a real object or new data type
    // architecture:
    class NameHere{
        // Code here ------> attributes
        private 
            ://code is only accessible by methods and functions within this class
        public
            ://code inside can be accessed by methods/Functions outside the class
    };	
    // Main function
    int main(){
        // use methods to access attributes in the class        
    }

    // example:
    
    // Class animals:
    class Animals{ // class name always starts with capital letter 
        public:		/// to be accessible outside the function;
            // start assigning attributes:
            string name;	
            string produces;
            int lengs;
    };
    int main(){
        
        //create an instance of the class:
        Animals animals;
        animals.name = "Cow";
        animals.lengs = 4;
        animals.produces = "Milk";
        
        Animals wildAnimals;
        wildAnimals.name = "Kangaroo";
        wildAnimals.lengs= 2;
        wildAnimals.produces = "Tourist";
        
        //print out values;
        cout<<wildAnimals.name<<endl;
        cout<<wildAnimals.lengs<< " Legs"<<endl;
        cout<<animals.name<<endl;
        cout<<animals.lengs<<" Legs"<<endl;
    }


    // Task; create a class of Cars, specify Model type(like Zubaru), speed (km/hr) and cost (ksh.)



    

    // CONSTRUCTORS:
    // Gets called when you create an instance of a class---->which  is the object;
    
    // Class animals:
    class Animals{ // class name always starts with capital letter 
        public:		/// to be accessible outside the function;
            // start assigning attributes:
            string name;	
            string produces;
            int lengs;
            
            // Creates a Constructors:
            Animals(){
                cout<<"Creating instance one"<<endl;
            }
    };
    int main(){
        
        //create an instance of the class:
        Animals animals;
        animals.name = "Cow";
        animals.lengs = 4;
        animals.produces = "Milk";
        
        Animals wildAnimals;
        wildAnimals.name = "Kangaroo";
        wildAnimals.lengs= 2;
        wildAnimals.produces = "Tourist";
        
        //print out values;
        cout<<wildAnimals.name<<endl;
        cout<<wildAnimals.lengs<< " Legs"<<endl;
        cout<<animals.name<<endl;
        cout<<animals.lengs<<" Legs"<<endl;
        
        return 0;
    }



    // Constructor parameters:  
    // Class animals:
    class Animals{ // class name always starts with capital letter 
        public:		/// to be accessible outside the function;
            // start assigning attributes:
            string name;	
            string produces;
            int lengs;
            
            // Creates a Constructors:
            Animals(string name){ // pass in the arguements;
                cout<<name<<endl;
            }
    };
    int main(){
        
        //create an instance of the class:
        Animals animals("Mr Cow");
        
        Animals wildAnimals("Mr Lion");
        
        return 0;
    }


    // Multiple arguments in constructors:
    class Animals{ // class name always starts with capital letter 
        public:		/// to be accessible outside the function;
            // start assigning attributes:
            string name;	
            string produces;
            int legs;
            
            // MULTIPLE ARGUEMENTS and parameters in constructors;
            Animals(string aName, string aProduces, int aLegs){
            	name = aName;
            	produces = aProduces;
            	legs = aLegs;
                
            }
    };
    int main(){
        
        //create an instance of the class:
        Animals animals("Mr Cow","Milk",4);
        
        Animals wildAnimals("Mr Lion","Tourist",4);
        
        // print out values;
        cout<<animals.name<<endl;
        
        // you can also update the name from here
        animals.name = "Horse";
        cout<<animals.name<<endl;	// The name now becomes updated;
        
        return 0;
    }

    
    // Multiple contructors:   
    class Book{
        public:
            string title;
            string publisher;
            int price;
            
            // default constructor
            Book(){
                title = "Empty ";
                publisher = "None !! ";
                price = 0;
            }
            Book(string aTitle, string aPublisher, int aPrice){
                title = aTitle;
                publisher = aPublisher;
                price = aPrice;
            }
    };

    int main(){
        
        Book newBook("The Monk master","Dandapani",5000);
        cout<<newBook.title<<endl;
        // print from default contructor;
        Book bookEmpty;
        cout<<bookEmpty.title;

        return 0;
    }    

    // Task: create a class of Factory, have a default/empty and one that describes numEmployees, CEO and mainProduct is what;
    
    class Factory{
        public:
            string CEO;
            string products;
            int numOfEmployees;

            Factory(){
                CEO = " Lead";
                products = "Goods";
                numOfEmployees = 1;
            }
            Factory(string mCEO, string mProducts, int mNumOfEmployees){
                CEO = mCEO;
                products = mProducts;
                numOfEmployees = mNumOfEmployees;
            }
    };
    int main(){

        Factory teaFactory("Rowlins Sang", "Kericho Tea",400);
        cout<<teaFactory.CEO<<endl;

        Factory cementFactory;
        cout<<cementFactory.products;

        return 0;
    }

    // Grading GPA Task:
    class GradingSystem{
	public:
		string studentName;
		string school;
		double gpa;
		
		GradingSystem(string aName, string aSchool, double aGpa){
			studentName = aName;
			school = aSchool;
			gpa = aGpa;
		}
		// create a function to check for course Retake before graduation
		bool retakeCourse(){
			if(gpa>3){
				return true;	// returned 1;
			}
			return false;	// returned 0;
            }
    };

    int main(){
        
        GradingSystem student1("Owen","Engineering",4);
        cout<<student1.retakeCourse()<<endl; 	// 1--> True    0---> False
        
        GradingSystem student2("Timz ", "Nursing",2);
        cout<<student2.retakeCourse(); // False---->0

        return 0;
    }

   
    // UPNEXT
    // C++ Getters and Setter;
    // Helps you control and implement how you are goig to assign and get values from a class
    class Games{
	private:
		string ref;
	public:
		string game;
		int score;
		
		Games(string aGame, string aRef, int aScore){
			game = aGame;
			chooseRef(aRef);
			score = aScore;
		}
		void chooseRef(string aRef){
			if(aRef == "Owen" || aRef == "Timz" || aRef == "You" || aRef == "Mwangi"){
				ref = aRef;
			}
			else{
				ref = "Lead Ref: James";
			}
		}
		// create a getter method to fetch the private Ref declare on top as its only accessible to this class if no getter found.
		string chooseRef(){
			return ref;
            }
    }; 

    int main(){
        
        Games football("Champions League","owino",3);
        cout<<football.chooseRef();     // returns default if not entered from the choice:

        return 0;
    }


    // INHERITANCE IN C++ PROGRAMMING & CLASSES:
    // superclass--> Main class
    // subclass----> one inheriting from Main class
    // This defining a class and creating other class which will inherit attributs and Functionalities of main class

    // Architeture:
    class Driver{
        // code here
    }
    class pilot : public Driver{
        // code here
        // Functionatilites of Driver extended to class Pilot
    }
    int main(){
        // call the classes and print out to screen
    }


    //EXAMPLE 1:
    class Driver{
	public:
		void driveCars(){
			cout<<"I can drive all motor cars"<<endl;
		}
		void driverTrain(){
			cout<<" I drive trains "<<endl;
		}
		void driverLorry(){
			cout<<"I driver big tracks "<<endl;
            }
    };
    class Pilot : public Driver{
        // you can add other attributes and Functionalities here:
        public:
            void flyPlanes(){
                cout<<"I can also fly Boing 787 planes across the world"<<endl;
            }
    };

    int main(){
        
        Pilot pilot;
        pilot.driveCars();
        
        pilot.flyPlanes();
        

        return 0;
    }

   
    // function/method/attribute overide:
    class Driver{
	public:
		void driveCars(){
			cout<<"I can drive all motor cars"<<endl;
		}
		void driverTrain(){
			cout<<" I drive trains "<<endl;
		}
        // let's overide this function with the pilot class
		void driverLorry(){
			cout<<"I driver big tracks "<<endl;
            }
    };
    class Pilot : public Driver{
        // you can add other attributes and Functionalities here:
        public:
            void flyPlanes(){
                cout<<"I can also fly Boing 787 planes across the world"<<endl;
            }
            void driverLorry(){
			    cout<<"Only fly planes alone !!!!"<<endl;
            }
    };

    int main(){
        
        Pilot pilot;
        pilot.driverLorry();
        
        Driver driver;
        driver.driverLorry();        

        return 0;
    }



// END OF COURSE
// KEEP LEARNING AND RESOURCES
// More content coming 
// Subscribe on youtube at :  Code With Timz Owen


