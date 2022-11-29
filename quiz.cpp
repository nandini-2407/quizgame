#include <iostream>
#include <string>
using namespace std;

int p =0;
class starting{

    public:
    void header()
{
	cout<<"\t\t\t\t\t\t QUIZ GAME "<<endl<<endl<<endl;
    cin.get();
}

    void steps(){
        cout<<"\t\t\t1. Start the Quiz "<<endl<<endl;
        cout<<"\t\t\t2. Instructions for the Quiz"<<endl<<endl;
        cout<<"\t\t\t3. Quit"<<endl;
        
        
    }
};

class  start: public starting{
    public:
    int n3;
    void subjects(){
        cout<<"\t\t\tSelect the Subject"<<endl<<endl;
        cout<<"1. C language "<<endl<<endl;
        cout<<"2. DBMS "<<endl<<endl;
        cout<<"3. Python "<<endl<<endl;
    }
    
    /*
	    void s1(){
         cout<<"Select the option"<<endl;
         cin>>n3;
    }
	*/

    

    void difficulty(){
        cout<<"\t\t\tSelect the difficulty"<<endl<<endl;
        cout<<"1. Easy "<<endl<<endl;
        cout<<"2. Medium "<<endl<<endl;
        cout<<"3. Hard "<<endl<<endl;
    }

	void points()
	{
		if(p==100)
		cout<<"\t Outstanding! You scored 100 points"<<endl<<endl;
		else if(p==90)
		cout<<"\t Excellent! You Scored 90 points"<<endl<<endl;
		else if(p==80)
		cout<<"\t Excellent! You Scored 80 points"<<endl<<endl;
		else if(p==70 || p ==60|| p==50)
		cout<<"\t You Scored "<<p<<" points "<<"Improve next time."<<endl<<endl;
		else if(p<=40)
		cout<<"\t You Scored "<<p<<" points "<<"Better luck next time."<<endl<<endl;
	}
           
};

class easyQuestions : public start{

    string ans1,ans2,ans3,ans4;
    //int p =0;
    char correct;
    public:
    void questions_ce()
    {

     //1
	 system ("CLS");
        cout<<"Q1. What is the only function all C programs must contain?  "<<endl<<endl;
        cout<<"A. start() \t\t\t\tB. system()"<<endl;
        cout<<"C. main() \t\t\t\tD. program()"<<endl<<endl;
        cin>>correct;
        
	    if(correct=='c')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");

    
    //2
        cout<<"Q2. What punctuation is used to signal the beginning  and end of blocks?  "<<endl<<endl;
        cout<<"A. {} \t\t\t\tB. -> and <- "<<endl;
        cout<<"C. BEGIN and END \t\tD. ( and ) "<<endl<<endl;
        cin>>correct;
        
        if(correct=='a')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");


    //3
        cout<<"Q3. Which of the following is the correct comment? "<<endl<<endl;
        cout<<"A. */ Comment */ \t\t\t\tB. * Comment * "<<endl;
        cout<<"C. /* Comment */ \t\t\t\tD. { Comment } "<<endl<<endl;
        cin>>correct;
        
        if(correct=='c')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");


    //4
        cout<<"Q4. What punctuation ends most lines of code in C? "<<endl<<endl;
        cout<<"A. .\t\t\t\tB. ; "<<endl;
        cout<<"C. :\t\t\t        D. '' "<<endl<<endl;
        cin>>correct;
        
        if(correct=='b')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");


    //5
        cout<<"Q5. Which of the following is not a data type in C? "<<endl<<endl;
        cout<<"A. int \t\t\t\tB. real "<<endl;
        cout<<"C. float \t\t\tD. double "<<endl<<endl;
        cin>>correct;
        
        if(correct=='b')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");


    //6
        cout<<"Q6. Who is known as the father of C language? "<<endl<<endl;
        cout<<"A. Dennis Ritchie \t\t\t\tB. James Gosling "<<endl;
        cout<<"C. Martin Richard \t\t\t\tD. None of these "<<endl<<endl;
        cin>>correct;
        
        if(correct=='a')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");


    //7
        cout<<"Q7. C language is "<<endl<<endl;
        cout<<"A. High level language \t\t\t\tB. Middle level language "<<endl;
        cout<<"C. Low level language \t\t\t\tD. None of these "<<endl<<endl;
        cin>>correct;
        
        if(correct=='b')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");


    //8
        cout<<"Q8. What is the correct value to return to the operating system upon the successful completion of a program?  "<<endl<<endl;
        cout<<"A. -1 \t\t\t\tB. 1 "<<endl;
        cout<<"C. 0 \t\t\t\tD. Program does not return a value "<<endl<<endl;
        cin>>correct;
       
        if(correct=='c')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");


    //9
        cout<<"Q9. Which of the following is true about C? "<<endl<<endl;
        cout<<"A. Platform independent \t\t\tB. Machine independent "<<endl;
        cout<<"C. High level language \t\t\t\tD. None of these "<<endl<<endl;
        cin>>correct;
    
        if(correct=='b')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");


    //10
        cout<<"Q10. Which of the following is the correct operator to compare two variables? "<<endl<<endl;
        cout<<"A. =  \t\t\t\tB. == "<<endl;
        cout<<"C. Equal \t\t\tD. := "<<endl<<endl;
        cin>>correct;
 
        if(correct=='b')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");


        cout<<" "<<endl<<endl;
        
    }

    void questions_dbmse()
    {
    
    //1
	system ("CLS");
    cout<<"Q1. What is a database? "<<endl<<endl;
    cout<<"A. Organized collection of information that cannot be accessed, updated, and managed"<<endl;
    cout<<"B. Collection of data or information without organizing "<<endl;
    cout<<"C. Organized collection of data or information that can be accessed, updated, and managed "<<endl;
    cout<<"D. Organized collection of data that cannot be updated "<<endl<<endl;
    cin>>correct;
        if(correct=='c')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");


    //2
    cout<<"Q2.  What is DBMS? "<<endl<<endl;
    cout<<"A. DBMS is a collection of queries  "<<endl;
    cout<<"B. DBMS is a high-level language  "<<endl;
    cout<<"C. DBMS is a programming language  "<<endl;
    cout<<"D. DBMS stores, modifies and retrieves data \t\t\t\t "<<endl<<endl;
    cin>>correct;
        if(correct=='d')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");


    //3
    cout<<"Q3. Who created the first DBMS? "<<endl<<endl;
    cout<<"A. Edgar Frank Codd \t\t\t\tB. Charles Bachman"<<endl;
    cout<<"C. Charles Babbage \t\t\t\tD. Sharon B. Codd"<<endl<<endl;
    cin>>correct;
        if(correct=='b')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");


    //4
    cout<<"Q4. Which type of data can be stored in the database? "<<endl<<endl;
    cout<<"A. Image oriented data \t\t\t\t        B. Text, files containing data "<<endl;
    cout<<"C. Data in the form of audio or video\t\t\tD. All of the above "<<endl<<endl;
    cin>>correct;
        if(correct=='d')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");


    //5
    cout<<"Q5. Which of the following is not a type of database? "<<endl<<endl;
    cout<<"A. Hierarchical \t\t\tB. Network "<<endl;
    cout<<"C. Distributed \t\t\t\tD. Decentralized "<<endl<<endl;
    cin>>correct;
        if(correct=='d')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");


    //6
    cout<<"Q6. Which of the following is not an example of DBMS? "<<endl<<endl;
    cout<<"A. MySQL \t\t\t\tB. Microsoft Acess "<<endl;
    cout<<"C. IBM DB2 \t\t\t\tD. Google "<<endl<<endl;
    cin>>correct;
        if(correct=='d')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");


    //7
    cout<<"Q7. Which of the following is a feature of DBMS? "<<endl<<endl;
    cout<<"A. Minimum Duplication and Redundancy of Data \t\tB. High Level of Security "<<endl;
    cout<<"C. Single-user Access only \t\t\t\tD. Support ACID Property"<<endl<<endl;
    cin>>correct;
        if(correct=='c')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");


    //8
    cout<<"Q8. Which of the following is a feature of the database?"<<endl<<endl;
    cout<<"A. No-backup for the data stored \t\t\tB. User interface provided"<<endl;
    cout<<"C. Lack of Authentication \t\t\t\tD. Store data in multiple locations"<<endl<<endl;
    cin>>correct;
        if(correct=='b')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");


    //9
    cout<<"Q9. Which of the following is not a function of the database?"<<endl<<endl;
    cout<<"A. Managing stored data \t\t\t\tB. Manipulating data"<<endl;
    cout<<"C. Security for stored data \t\t\t\tD. Analysing code"<<endl<<endl;
    cin>>correct;
        if(correct=='d')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");


    //10
    cout<<"Q10. Which of the following is a function of the DBMS?"<<endl<<endl;
    cout<<"A. Storing data \t\t\t\tB. Providing multi-users access control"<<endl;
    cout<<"C. Data Integrity \t\t\t\tD. All of the above"<<endl<<endl;
    cin>>correct;
        if(correct=='d')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");
    
    }

    void questions_pythone(){

        //1
	system ("CLS");	
    cout<<"Q1. Which keyword allows us to load a module in Python?"<<endl<<endl;
    cout<<"A. Import \t\t\t\tB. Load"<<endl;
    cout<<"C. Include \t\t\t\tD. library"<<endl<<endl;
    cin>>correct;
    if(correct=='a')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");
    
    
    //2
    cout<<"Q2. Which one from the following objects in Python is immutable?"<<endl<<endl;
    cout<<"A. Lists\t\t\t\t B. Dictionary"<<endl;
    cout<<"C. Tuple\t\t\t\t D. Set"<<endl<<endl;
    cin>>correct;
    if(correct=='c')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");
    
    
    //3
    cout<<"Q3. Name the error that doesn’t cause program to stop/end, but the output is not the desired result or is incorrect."<<endl<<endl;
    cout<<"A. Syntax error \t\t\t\tB. Runtime error"<<endl;
    cout<<"C. Logical error \t\t\t\tD. All of the above"<<endl<<endl;
    cin>>correct;
    if(correct=='c')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");
    
    
    //4
    cout<<"Q4. Which among them is incorrect for set s={100,101,102,103}"<<endl<<endl;
    cout<<"A. Len(s) \t\t\t\tB. Sum(s) "<<endl;
    cout<<"C. Print(s[3]) \t\t\t\tD. Max(s)"<<endl<<endl;
    cin>>correct;
    if(correct=='c')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");
    
    
    //5
    cout<<"Q5. Using the pack manager, how you can you put the components in a container in the same row?"<<endl<<endl;
    cout<<"A. Component.pack(side= ''LEFT'') \t\t\tB. Component.pack(''Left '')"<<endl;
    cout<<"C. Component.pack(side=LEFT) \t\t\t\tD. Component.pack(Left-side)"<<endl<<endl;
    cin>>correct;
    if(correct=='c')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");
    
    
    //6
    cout<<"Q6. Which is the special symbol used in python to add comments?"<<endl<<endl;
    cout<<"A. $ \t\t\t\t B. //"<<endl;
    cout<<"C. /*.... */\t\t\t D. #"<<endl<<endl;
    cin>>correct;
    if(correct=='d')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");
    
    
    //7
    cout<<"Q7. Is Python a high level programming language ?"<<endl<<endl;
    cout<<"A. TRUE\t\t\t\t B. FALSE"<<endl<<endl;
    cin>>correct;
    if(correct=='a')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");
    
    
    //8
    cout<<"Q8.Who is the creator of Python programming language ? "<<endl<<endl;
    cout<<"A. Dennis Ritchie \t\t\t\tB. James Gosling"<<endl;
    cout<<"C. Guido van Rossum\t\t\t\tD. Ross Ihaka"<<endl<<endl;
    cin>>correct;
    if(correct=='c')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");
    
    
   //9
    cout<<"Q9. What is anaconda in context of python programming ?"<<endl<<endl;
    cout<<"A. Free and open-source distribution of Java"<<endl;
    cout<<"B. Free and open-source distribution of the Python"<<endl;
    cout<<"C. Free and open-source distribution of C."<<endl;
    cout<<"D. Free and open-source distribution of html."<<endl;
    cin>>correct;
    if(correct=='b')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");
    
    
    //10
    cout<<"Q10.  What is Visual Studio Code ?"<<endl<<endl;
    cout<<"A. Visual Studio Code is a free source-code editor to write code."<<endl;
    cout<<"B. Visual Studio Code is a paid source-code editor to write code."<<endl;
    cout<<"C. Visual Studio Code is a programming language."<<endl;
    cout<<"D. There is no visual studio code."<<endl;
    cin>>correct;
    if(correct=='a')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	system ("CLS");
    

    }
};

class mediumQuestions: public easyQuestions{
    //string ans1,ans2,ans3,asn4;
   // int p=0;
    char correct;
    public:
    void questions_cm(){

    //1
	system ("CLS");
        cout<<"Q1. What is the correct syntax to output 'Hello World' in C? "<<endl<<endl;
        cout<<"A. printf('Hello World'); \t\t\t\tB. Console.Writeline('Hello World'); "<<endl;
        cout<<"C. System.out.printline('Hello World'); \t\tD. cout<<'Hello World'; "<<endl<<endl;
        cin>>correct;
        
        if(correct=='a')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");


    //2
        cout<<"Q2. How do you create a variable with numeric value 5? "<<endl<<endl;
        cout<<"A. int num = 5 \t\t\t\tB. num = 5 "<<endl;
        cout<<"C. num = 5 int \t\t\t\tD. val num = 5 "<<endl<<endl;
        cin>>correct;
        
        if(correct=='a')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");


    //3
        cout<<"Q3. How do you create a variable with floating value = 2.8? "<<endl<<endl;
        cout<<"A. float num = 2.8 \t\t\tB. num = 2.8 "<<endl;
        cout<<"C. num = 2.8 float \t\t\tD. val num = 2.8 "<<endl<<endl;
        cin>>correct;
        
        if(correct=='a')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");


    //4
        cout<<"Q4. Which operator is used to add together two values? "<<endl<<endl;
        cout<<"A. The & sign \t\t\tB. + "<<endl;
        cout<<"C. * \t\t\t\tD. The ADD Keyword "<<endl<<endl;
        cin>>correct;
        
        if(correct=='b')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");


    //5
        cout<<"Q5. Which function is used to output values and print text? "<<endl<<endl;
        cout<<"A. printword() \t\t\t\tB. write() "<<endl;
        cout<<"C. printf() \t\t\t\tD. output() "<<endl<<endl;
        cin>>correct;
        
        if(correct=='c')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");


    //6
        cout<<"Q6. Which format specifier is often used to print integers? "<<endl<<endl;
        cout<<"A. %d \t\t\t\tB. %s "<<endl;
        cout<<"C. %f \t\t\t\tD. %c "<<endl<<endl;
        cin>>correct;
        
        if(correct=='a')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");


    //7
        cout<<"Q7. Which operator can be used to find the memory size of a data type or a variable? "<<endl<<endl;
        cout<<"A. The Len property \t\t\t\tB. The sizer property "<<endl;
        cout<<"C. The sizeof property \t\t\t\tD. The length property "<<endl<<endl;
        cin>>correct;
        
        if(correct=='c')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");

    //8
        cout<<"Q8. Which keyword can be used to make a variable unchangeable/read only? "<<endl<<endl;
        cout<<"A. readonly \t\t\t\tB. final "<<endl;
        cout<<"C. constant \t\t\t\tD. const "<<endl<<endl;
        cin>>correct;
        
        if(correct=='d')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");


    //9
        cout<<"Q9. Array indexes start with "<<endl<<endl;
        cout<<"A. 0 \t\t\t\tB. 1 "<<endl;
        cout<<"C. -1 \t\t\t\tD. None "<<endl<<endl;
        cin>>correct;
        
        if(correct=='a')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");


    //10
        cout<<"Q10. How do you call a function in C? "<<endl<<endl;
        cout<<"A. myfunction(); \t\t\tB. (myfunction); "<<endl;
        cout<<"C. myfunction; \t\t\t\tD. myfunction[]; "<<endl<<endl;
        cin>>correct;
        
        if(correct=='a')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");
        cout<<" "<<endl<<endl;
    }

    void questions_dbmsm(){

        //1
		system ("CLS");
        cout<<"Q1. In which of the following states the transaction executes all its operations successfully and all the effects are now permanently saved on the    database system? "<<endl<<endl;
        cout<<"A. Active \t\t\t\tB. Partially committed "<<endl;
        cout<<"C. Committed \t\t\t\tD. Failed "<<endl<<endl;
        cin>>correct;
        
        if(correct=='c')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");


        //2
        cout<<"Q2. Which databases supports Polymorphism, Inheritance, Encapsulation, and Abstraction concepts? "<<endl<<endl;
        cout<<"A. RDBMS \t\t\t\tB. Distributed DBMS"<<endl;
        cout<<"C. Network DBMS \t\t\tD. OODBMS "<<endl<<endl;
        cin>>correct;
        
        if(correct=='d')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");


    //3
        cout<<"Q3. Which of the following is component of object-oriented DBMS? "<<endl<<endl;
        cout<<"A. Object \t\t\t\tB. Class "<<endl;
        cout<<"C. Attributes and Methods\t\tD. All the above "<<endl<<endl;
        cin>>correct;
        
        if(correct=='d')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");


    //4
        cout<<"Q4. Which of the following DBMS is derived from the model of object-oriented programming?"<<endl<<endl;
        cout<<"A. Relational DBMS\t\t\t\tB. Hierarchical DBMS"<<endl;
        cout<<"C. Object Oriented DBMS\t\t\t\tD. Network DBMS "<<endl<<endl;
        cin>>correct;
        
        if(correct=='c')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");


    //5
        cout<<"Q5. Fifth-Generation languages are the ____."<<endl<<endl;
        cout<<"A. Assembly languages\t\t\t\tB. Machine languages"<<endl;
        cout<<"C. constraint based languages\t\t\tD. High level language"<<endl<<endl;
        cin>>correct;
        
        if(correct=='c')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");


    //6
        cout<<"Q6. Which symbol denote derived attributes in ER Model?"<<endl<<endl;
        cout<<"A. Double ellipse \t\t\t\tC. Squared ellipse"<<endl;
        cout<<"B. Dashed ellipse \t\t\t\tD. Ellipse with attribute name underlined"<<endl<<endl;
        cin>>correct;
        
        if(correct=='b')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");


    //7
        cout<<"Q7. An ER model of a database consists of entity types A and B. These are connected by a relationship R which does not have its own attribute.        Under which one of the following conditions, can the relational table for R be merged with that of A?"<<endl<<endl;
        cout<<"A. Relationship R is one-to-many and the participation of A in R is total."<<endl;
        cout<<"B. Relationship is one-to-many and the participation of A in R is partial."<<endl;
        cout<<"C. Relationship R is many-to-one and the participation of A in R is total."<<endl;
        cout<<"D. Relationship R is many-to-one and the participation of A in R is partial."<<endl<<endl;
        cin>>correct;
        
        if(correct=='c')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");


    //8
        cout<<"Q8. Consider the relation scheme R = (E, F, G, H, I, J, K, L, M, N) and the set of functional dependencies {(E, F} -> {G}, {F} -> {I, J}, {E, H}      -> {K, L}, {K} -> {M}, {L} -> {N}} on R. What is the key for R ?"<<endl<<endl;
        cout<<"A. {E, F}\t\t\t\tB. {E, F, H}"<<endl;
        cout<<"C. {E, F, H, K, L}\t\t\tD. {E}"<<endl<<endl;
        cin>>correct;
        
        if(correct=='b')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");


    //9
        cout<<"Q9. Consider the following statements S1 and S2 about the relational data model:"<<endl;
        cout<<"S1: A relation scheme can have at most one foreign key."<<endl;
        cout<<"S2: A foreign key in a relation scheme R cannot be used to refer to tuples of R."<<endl;
        cout<<"Which one of the following choices is correct?  "<<endl<<endl;
        cout<<"A. S1 is true and S2 is false.  \t\t\tB. Both S1 and S2 are true.  "<<endl;
        cout<<"C. Both S1 and S2 are false.  \t\t\t\tD. S1 is false and S2 is true. "<<endl<<endl;
        cin>>correct;
        
        if(correct=='c')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");


    //10
        cout<<"Q10. Which of the following is NOT a superkey in a relational schema with attributes V, W, X, Y, Z and primary key V Y?"<<endl<<endl;
        cout<<"A. VXYZ\t\t\t\tB. VWXZ"<<endl;
        cout<<"C. VWXY\t\t\t\tD. VWXYZ"<<endl<<endl;
        cin>>correct;
        
        if(correct=='b')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");

    }

    void questions_pythonm(){


        //1
		system ("CLS");
        cout<<"Q1. What is a correct syntax to output 'Hello World' in Python? "<<endl<<endl;
        cout<<"A. p('Hello World') \t\t\t\tB. echo'Hello World'"<<endl;
        cout<<"C. echo('Hello World');\t\t\t\tD. print('Hello World')"<<endl<<endl;
        cin>>correct;
        
        if(correct=='d')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");



     //2
    cout<<"Q2. What is the default return value for a function that does not return any value explicitly?"<<endl<<endl;
        cout<<"A. int\t\t\t\tB. null"<<endl;
        cout<<"C. double\t\t\tD. None"<<endl;
        cin>>correct;
        
        if(correct=='d')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");


   //3
    cout<<"Q3. Which of the following items are present in the function header?"<<endl<<endl;
        cout<<"A. function name \t\t\t\t\tB. parameter list"<<endl;
        cout<<"C. function name and parameter list\t\t\tD. return value"<<endl;
        cin>>correct;
        
        if(correct=='b')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");


    //4
    cout<<"Q4. Which of the following enclose the input parameters or arguments of a function?"<<endl<<endl;
        cout<<"A. brackets \t\t\t\tB. parentheses"<<endl;
        cout<<"C. curly braces \t\t\tD. quotation marks"<<endl;
        cin>>correct;
        
        if(correct=='b')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");
    

    //5
    cout<<"Q5. Which of the following keywords marks the beginning of the function block?"<<endl<<endl;
        cout<<"A. fun \t\t\t\tB. define"<<endl;
        cout<<"C. def \t\t\t\tD. function"<<endl;
        cin>>correct;
        
        if(correct=='c')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");
    

    //6
    cout<<"Q6. What is the name given to that area of memory, where the system stores the parameters and local variables of a function call? "<<endl<<endl;
        cout<<"A. a heap \t\t\t\tB. storage area"<<endl;
        cout<<"C. a stack \t\t\t\tD. an array"<<endl;
        cin>>correct;
        
        if(correct=='c')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");
    

    //7
    cout<<"Q7. Which of the following would you relate to a function call made with an argument passed as its parameter?"<<endl<<endl;
        cout<<"A. function invocation \t\t\t\tB. pass by value"<<endl;
        cout<<"C. pass by reference \t\t\t\tD. pass by name"<<endl;
        cin>>correct;
        
        if(correct=='b')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");
    

    //8
    cout<<"Q8. Which of the following commands can be used to read “n” number of characters from a file using the file object <file>?"<<endl<<endl;
        cout<<"A. file.read(n) \t\t\t\tB. n = file.read()"<<endl;
        cout<<"C. file.readline(n) \t\t\t\tD. file.readlines()"<<endl;
        cin>>correct;
        
        if(correct=='a')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");
    

    //9
    cout<<"Q9. Which of the following commands can be used to read the remaining lines in a file using the file object <tmpfile>?"<<endl<<endl;
        cout<<"A. tmpfile.read(n) \t\t\t\tB. tmpfile.read()"<<endl;
        cout<<"C. tmpfile.readline() \t\t\t\tD. tmpfile.readlines()"<<endl;
        cin>>correct;
        
        if(correct=='d')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");
    

    //10
    cout<<"Q10. What does the <readlines()> method returns?"<<endl<<endl;
        cout<<"A. str \t\t\t\t\t\t\tB. a list of lines"<<endl;
        cout<<"C. list of single characters \t\t\t\tD. list of integers"<<endl;
        cin>>correct;
        
        if(correct=='b')
	{
		p=p+10;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");
    }

};

class hardQuestions:public start{

   // string ans1,ans2,ans3,ans4;
   // int p;
    char correct;
    public:
    void questions_ch(){


        //1
		system ("CLS");
        cout<<"Q1. How do you start writing an if statement in C? "<<endl<<endl;
        cout<<"A. if(x>y) \t\t\t\tB. if x>y "<<endl;
        cout<<"C. if x>y then \t\t\t\tD. if x>y() "<<endl<<endl;
        cin>>correct;
        if(correct=='a')
	{
		p=p+20;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");



    //2
        cout<<"Q2. How do you start writing a for loop in C? "<<endl<<endl;
        cout<<"A. for(i = 0; i<5; i++) \t\t\t\tB. for(x in y) "<<endl;
        cout<<"C. for(i=0; switch<5;i++) \t\t\t\tD. for(i=0; while<5;i++) "<<endl<<endl;
        cin>>correct;
        if(correct=='a')
	{
		p=p+20;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");


    //3
        cout<<"Q3. Which statement can be used to select one of many code blocks to be executed? "<<endl<<endl;
        cout<<"A. switch \t\t\t\tB. break "<<endl;
        cout<<"C. when \t\t\t\tD. default "<<endl<<endl;
        cin>>correct;
        if(correct=='a')
	{
		p=p+20;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");


    //4
        cout<<"Q4. What is ptr in the following code known as? int*ptr= &myAge "<<endl<<endl;
        cout<<"A. A pointer \t\t\t\tB. An array "<<endl;
        cout<<"C. A parameter \t\t\t\tD. A class "<<endl<<endl;
        cin>>correct;
        if(correct=='a')
	{
		p=p+20;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");


    //5
        cout<<"Q5. In C, is it possible to inherit class properties and functions from one class to another? "<<endl<<endl;
        cout<<"A. True \t\t\t\tB. False "<<endl;
        cout<<" \t\t\t\t "<<endl<<endl;
        cin>>correct;

        if(correct=='b')
	{
		p=p+20;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");
        cout<<" "<<endl<<endl;
    }

    void questions_dbmsh(){

        //1
		system ("CLS");
    cout<<"Q1. Which of the following concurrency control protocols ensure both conflict serializability and freedom from deadlock? I. 2-phase locking II.       Time-stamp ordering "<<endl<<endl;
    cout<<"A. I only \t\t\t\tB. II only "<<endl;
    cout<<"C. Both I and II \t\t\tD. Neither I nor II"<<endl<<endl;
    cin>>correct;
    
        if(correct=='b')
	{
		p=p+20;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");



    //2
    cout<<"Q2. A clustering index is defined on the fields which are of type"<<endl<<endl;
    cout<<"A. non-key and ordering \t\t\tB. non-key and non-ordering"<<endl;
    cout<<"C. key and ordering \t\t\t\tD. key and non-ordering "<<endl<<endl;
    cin>>correct;
    
        if(correct=='a')
	{
		p=p+20;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");
    

    //3
    cout<<"Q3. The statement that is executed automatically by the system as a side effect of the modification of the database is "<<endl<<endl;
    cout<<"A. backup \t\t\t\tB. assertion "<<endl;
    cout<<"C. recovery \t\t\t\tD. trigger "<<endl<<endl;
    cin>>correct;
    
        if(correct=='d')
	{
		p=p+20;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");


    //4
    cout<<"Q4. Which of the following command is used to delete a table in SQL?"<<endl<<endl;
    cout<<"A. delete \t\t\t\tB. truncate"<<endl;
    cout<<"C. remove \t\t\t\tD. drop "<<endl<<endl;
    cin>>correct;
    
        if(correct=='d')
	{
		p=p+20;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");
    

    //5
    cout<<"Q5. Which of the following is the highest isolation level in transaction management? "<<endl<<endl;
    cout<<"A. Serializable \t\t\t\tB. Repeated Read "<<endl;
    cout<<"C. Committed Read \t\t\t\tD. Uncommitted Read "<<endl<<endl;
    cin>>correct;
    
        if(correct=='a')
	{
		p=p+20;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");
	}


    void questions_pythonh(){
      
      
      //1
	  system ("CLS");
      cout<<"Q1. Which of the following functions displays a file dialog for saving a file? "<<endl<<endl;
      cout<<"A. tmpfile = askopenfilename() \t\t\t\tB. tmpfile = openfilename()"<<endl;
      cout<<"C. tmpfile = asksaveasfilename() \t\t\tD. tmpfile = saveasfilename()"<<endl<<endl;
      cin>>correct;
      
        if(correct=='c')
	{
		p=p+20;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");


    //2
    cout<<"Q2. Which of the following statements can be used to check, whether an object “obj” is an instance of class A or not?"<<endl<<endl;
      cout<<"A. obj.isinstance(A) \t\t\t\tB. A.isinstance(obj)"<<endl;
      cout<<"C. isinstance(obj, A) \t\t\t\tD. isinstance(A, obj)"<<endl<<endl;
      cin>>correct;
      
        if(correct=='c')
	{
		p=p+20;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");


    //3
    cout<<"Q3. What is the output of the following function call"<<endl;
    cout<<"    def fun1(num):"<<endl;
    cout<<"    return num + 25"<<endl;
    cout<<"    fun1(5)"<<endl;
    cout<<"    print(num) "<<endl<<endl;
    cout<<"A. 25 \t\t\t\tB. 5"<<endl;
    cout<<"C. NameError\t\t\tD. None"<<endl<<endl;
    cin>>correct;
      
        if(correct=='c')
	{
		p=p+20;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");


    //4
    cout<<"Q4. Which of the following functions can help us to find the version of python that we are currently working on? "<<endl<<endl;
      cout<<"A. sys.version(1) \t\t\t\tB. sys.version(0)"<<endl;
      cout<<"C. sys.version() \t\t\t\tD. sys.version"<<endl<<endl;
      cin>>correct;
      
        if(correct=='a')
	{
		p=p+20;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");


    //5
    cout<<"Q5. To add a new element to a list we use which Python command? "<<endl<<endl;
      cout<<"A. list1.addEnd(5) \t\t\t\tB. list1.addLast(5) "<<endl;
      cout<<"C. list1.append(5) \t\t\t\tD. list1.add(5) "<<endl<<endl;
      cin>>correct;
      
        if(correct=='c')
	{
		p=p+20;
		cout<<" \t Correct! "<<p<<endl;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry wrong answer "<<endl;
	cout<<" \t Press Enter! ";
	}
    cin.get();
    cin.get();
    
	
    system ("CLS");

    }
};

class Rules: public starting {

    public:
    void instr(){
        cout<<"1. Start the Quiz."<<endl;
        cout<<"2. Select the subject of your choice. "<<endl;
        cout<<"3. Select the difficulty level. "<<endl;
        cout<<"4. Play the Quiz."<<endl;
        cout<<"5. Easy level contains 10 questions"<<endl;
        cout<<"6. Medium level contains 10 questions"<<endl;
        cout<<"7. Hard level contains 5 questions"<<endl;
        cout<<"8. Wait for your scores."<<endl<<endl<<endl;

    }

	void back(){
		cout<<"Press Enter to Back";
		cin.get();
	}
};

class Quit:public starting{

};


int main(){

    int n1, age, n2,n4,n3;
    string name;
    starting ob1;
    start ob2;
    Rules ob3;
    easyQuestions ob4;
	mediumQuestions ob5;
	hardQuestions ob6;


    ob1.header();
    ob1.steps();
    
    cout<<endl;
    cout<<"\t\t\tSelect the option"<<endl;
    cin>>n1;
    if(n1==1){
		system ("CLS");
		ob1.header();
        cout<<"Enter your Name ";
        cin>>name;
        cout<<endl<<endl;
        
		system ("CLS");
		ob1.header();
        ob2.subjects();
		cout<<"Select the option"<<endl;
        cin>>n3;
		if(n3==1){

        system ("CLS");
        ob1.header();
        ob2.difficulty();
		cout<<"Select the option"<<endl;
        cin>>n2;
          
		      if(n2==1){
            ob4.questions_ce();
		    }
		    else if(n2==2){
		    	ob5.questions_cm();
		    }
		    else if(n2==3){
                ob6.questions_ch();
		    }
    
		    }
		else if(n3==2){
        
		system ("CLS");
        ob1.header();
        ob2.difficulty();
		cout<<"Select the option"<<endl;
        cin>>n2;
        
		     
			 if(n2==1){
            ob4.questions_dbmse();
		    }
		    else if(n2==2){
		    	ob5.questions_dbmsm();
		    }
		    else if(n2==3){
                ob6.questions_dbmsh();
		    }
		}
		else if(n3==3){
		
		system ("CLS");
        ob1.header();
        ob2.difficulty();
		cout<<"Select the option"<<endl;
        cin>>n2;
        
		     
			 if(n2==1){
            ob4.questions_pythone();
		    }
		    else if(n2==2){
		    	ob5.questions_pythonm();
		    }
		    else if(n2==3){
                ob6.questions_pythonh();
		    }	
		}
        
        ob2.points();
    }
    else if(n1==2){
		system ("CLS");
		ob1.header();

        ob3.instr();
		ob3.back();
		
		ob1.header();
        ob1.steps();
		cin.get();


		system ("CLS");
		ob1.header();
        cout<<"Enter your Name ";
        cin>>name;
        cout<<endl<<endl;
        
		
		ob1.header();
        ob2.subjects();
		cout<<"Select the option"<<endl;
        cin>>n3;
		if(n3==1){

        system("CLS");
        ob1.header();
        ob2.difficulty();
		cout<<"Select the option"<<endl;
        cin>>n2;
          
		      if(n2==1){
            ob4.questions_ce();
		    }
		    else if(n2==2){
		    	ob5.questions_cm();
		    }
		    else if(n2==3){
                ob6.questions_ch();
		    }
    
		    }
		else if(n3==2){
        
		system ("CLS");
        ob1.header();
        ob2.difficulty();
		cout<<"Select the option"<<endl;
        cin>>n2;
        
		     
			 if(n2==1){
            ob4.questions_dbmse();
		    }
		    else if(n2==2){
		    	ob5.questions_dbmsm();
		    }
		    else if(n2==3){
                ob6.questions_dbmsh();
		    }
		}
		else if(n3==3){
		
		system ("CLS");
        ob1.header();
        ob2.difficulty();
		cout<<"Select the option"<<endl;
        cin>>n2;
        
		     
			 if(n2==1){
            ob4.questions_pythone();
		    }
		    else if(n2==2){
		    	ob5.questions_pythonm();
		    }
		    else if(n2==3){
                ob6.questions_pythonh();
		    }	
		}
    ob2.points();
	cin.get();
    
    }
	//ob2.points();
    else if(n1==3){
        cin.get();
    }

	else{
		cout<<"Invalid Input";
	}
}
