


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
