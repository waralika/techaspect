#include <iostream>
using namespace std;

class student{
    public:
    char name[100];
  int age;
  char branch[100];
  int year;
  int sem;
  int score;
  void display()
  { cout<<"Name:"<<name<<" ";
    cout<<"Age:"<<age<<" ";
    cout<<"Branch:"<<branch<<" ";
    cout<<"Semester:"<<sem<<" ";
    cout<<"Score:"<<score<<endl;
  }
    void insert()
  { cout<<"Enter Name, age, branch, semester, score(%)";
    cin>>name>>age>>branch>>sem>>score;
  }
 };

int main() {
	// your code goes here
	int t,n;
	student s[100];
	cout<<"Enter no of students";
	
	cin>>n;
	for(int i=0;i<n;i++)
	{
	  s[i].insert();
	}
	
	cout<<"\nEnter score greater than equal to filter";
	cin>>t;
	
	
	for(int j=0;j<n;j++)
	{   
	    
	    if((s[j].score)>=t)
	    {
	        s[j].display();
	    }
	}
return 0;
}
