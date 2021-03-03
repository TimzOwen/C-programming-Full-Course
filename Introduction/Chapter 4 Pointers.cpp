

    // C++ Pointers

    /* Let's look at memory addressing and data storage
       All this elements gets stored inside computer memory in hexadecimal number(oxffeda2)
       To allow you to fetch this info you just call the variable name while he computer
       behind the scenes uses the memory address to locate it. 

       The process of obtaining a memory address is called Pointing----> (Pointer in CS).
       and uses the ("&variableName") to print out.
       
    */
    int a = 20;
    bool isRaining = false;
    string programming = "C++ class";

    cout<<&isRaining; // accessig the pointer of bool isRaining;

    //creating pointer variables
    // uses the asterisk and the ampersand 
    // should always reference the excat data type as declared
    int a = 20;
    bool isRaining = false;
    string programming = "C++ class";

    int *pA = &a;
    bool *pIsRaining = &isRaining;
    string *pProgramming = &programming;
    
    cout<<pIsRaining<<endl;
    cout<<pA;


    // Dereferencing:
    // Pointers are used to deploy to the main Memory
    // You can directly print value with *&var
    cout<<*&pA; // prints the value in the momory address
    int a = 20;
    bool isRaining = false;
    string programming = "C++ class";

    int *pA = &a;
    bool *pIsRaining = &isRaining;
    string *pProgramming = &programming;
    
    cout<<pIsRaining<<endl;
    cout<<pA<<endl;
    // dereferencing 
    cout<<*&a;	// returns 20
