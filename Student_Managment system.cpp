#include<iostream>
#include<fstream>
using namespace std;
project()
{ cout<<"\n\n\n\t\t\t..............................\n";
  cout<<"\t\t\t...........Wellcome...........\n";
  cout<<"\t\t\t..............................\n\n\n\n";
  cout<<"\t\t\t.Members......................\n";
  cout<<"\t\t\t..............................\n\n";
  cout<<"\t\t\t.ALI AKBAR.......314..........\n";
  cout<<"\t\t\t.M Aqeel .........326.........\n";
  cout<<"\t\t\t.Obadah Junaid....355.........\n";
  cout<<"\t\t\t..............................\n\n";
}

struct node
{ 
  int rollno; 
  string name;
  string fname;
  int total_num;
  int eng,math,phy,urdu,avr;
  string dob;
  string address;
  node *next;
  node *prev;
  };
  
  struct var{
	 
	 int size;
	 int choice;
	 int ter;
	 int search; 
	}
	get;

node *head=NULL;
node *temp=NULL;
node *end=NULL;
void menu();
void insert_student();
void show()//data display
{ 
  cout<<"Roll number  "<<temp->rollno<<endl;
  cout<<"NAME  "<<temp->name<<endl;
  cout<<"Father name  "<<temp->fname<<endl;
  cout<<"Date of Birth  "<<temp->dob<<endl;
  cout<<"Address  "<<temp->address<<endl;
  cout<<"Math  "<<temp->math<<endl;
  cout<<"ENGLISH  "<<temp->eng<<endl;
  cout<<"Physics  "<<temp->phy<<endl;
  cout<<"Urdu  "<<temp->urdu<<endl;
  cout<<"TOTAL MARKS  "<<temp->total_num<<endl;
  cout<<"AVRAGE MARKS  "<<temp->avr<<"%"<<endl<<endl<<endl;
}

void cond()//check cond
{ cout<<"press 1 for exit 2 for main menu:  ";
    cin>>get.ter;
    switch(get.ter)//another switch for main
  {
   case 1:         
    break;
   case 2:
   menu();}
}

void insert_student()//inset node
{ cout<<"How many results you want to enter:  ";
  cin>>get.size;
  for(int i=0;i<get.size;i++)
  {
  cout<<"\n\nFOR STUDENT "<<i+1<<endl;	
  node *newnode=new node;
  cout<<"Enter student roll number: ";
  cin>>newnode->rollno;
  cout<<"Enter student name: ";
  cin>>newnode->name;
  cout<<"Enter student's Father name: ";
  cin>>newnode->fname;
  cout<<"Enter student's Date of Birth(dd/mm/yyyy): ";
  cin>>newnode->dob;
  cout<<"Enter student's Address: ";
  cin>>newnode->address;
  cout<<"Enter marks for math: ";
  cin>>newnode->math;
  while(newnode->math>=100 && temp->math>=0)
  { cout<<"\nValues cannot be entered more than 100 \n";
     cout<<"Enter marks for math: ";
     cin>>newnode->math;
  }
  cout<<"Enter marks for eng: ";
  cin>>newnode->eng;
  while(newnode->eng>=100 && temp->eng>=0)
  { cout<<"\nValues cannot be entered more than 100 \n";
     cout<<"Enter marks for eng: ";
     cin>>newnode->eng;
  }
  cout<<"Enter marks for physics: ";
  cin>>newnode->phy;
  
  while(newnode->phy<=100 && temp->phy>=0)
  { cout<<"Values cannot be entered more than 100 \n";
     cout<<"Enter marks for phy :";
     cin>>newnode->phy;
  }
  
  cout<<"Enter marks for urdu: ";
  cin>>newnode->urdu;
  while(newnode->urdu<=100 && temp->urdu>=0)
  { cout<<"Values cannot be entered more than 100 \n";
     cout<<"Enter marks for urdu: ";
     cin>>newnode->urdu;
  }
  newnode->total_num=(newnode->math)+(newnode->eng)+(newnode->phy)+(newnode->urdu);
  newnode->avr=(newnode->total_num/400)*100;

	if(head==NULL)
	{
		head = newnode;
		newnode->next=NULL;
		newnode->prev=NULL;
		end=newnode;
	}
	else
	{
		end->next=newnode;
		newnode->prev=end;
		newnode->next=NULL;
		end=newnode;
}}
    
  
	
 
 cond();//1 for exit 2 for display
}
void display()
{ system("cls");
  temp=head;
 for(int i=0;i<get.size;i++)
 { 
  cout<<"\n\nFOR STUDENT "<<i+1<<endl;
  show();	
  temp=temp->next;        
 }
  cond();
}
 void search()
  { system("cls");
    cout<<"Enter the roll number of the student:  ";
    cin>>get.search;
    temp=head;
    for(int i=0;i<get.size;i++)
    { if(get.search==temp->rollno)
      { show();
        cond();
        break;
	  }
	  temp=temp->next;
	}
     cout<<"NO STUDENT FOUND ......!\n";
	  cond();

  }
  void edit()
  { system("cls");
    cout<<"Enter the roll number of the student:  ";
    cin>>get.search;
    temp=head;
  for(int i=0;i<get.size;i++)
{ if(get.search==temp->rollno)
{
   show();
   cout<<"\n\n\n";
  cout<<"Enter student roll number: ";
  cin>>temp->rollno;
  cout<<"Enter student name: ";
  cin>>temp->name;
  cout<<"Enter student's Father name: ";
  cin>>temp->fname;
  cout<<"Enter student's Date of Birth(dd/mm/yyyy): ";
  cin>>temp->dob;
  cout<<"Enter student's Address: ";
  cin>>temp->address;
  cout<<"Enter marks for math: ";
  cin>>temp->math;
  while(temp->math>=100 && temp->math<=0)
  { cout<<"\nValues cannot be entered more than 100 \n";
     cout<<"Enter marks for math: ";
     cin>>temp->math;
  }
  cout<<"Enter marks for eng: ";
  cin>>temp->eng;
  while(temp->eng>=100 && temp->eng<=0)
  { cout<<"\nValues cannot be entered more than 100 \n";
     cout<<"Enter marks for eng: ";
     cin>>temp->eng;
  }
  cout<<"Enter marks for physics: ";
  cin>>temp->phy;
  
  while(temp->phy>=100 && temp->phy<=0)
  { cout<<"Values cannot be entered more than 100 \n";
     cout<<"Enter marks for phy :";
     cin>>temp->phy;
  }
  
  cout<<"Enter marks for urdu: ";
  cin>>temp->urdu;
  while(temp->urdu>=100 && temp->urdu<=0)
  { cout<<"Values cannot be entered more than 100 \n";
     cout<<"Enter marks for urdu: ";
     cin>>temp->urdu;
  }
  temp->total_num=(temp->math)+(temp->eng)+(temp->phy)+(temp->urdu);
  temp->avr=(temp->total_num/400)*100;
  cout<<endl<<endl;
        cond();
        break;
	  }
	  temp=temp->next;
	}
     cout<<"NO STUDENT FOUND ......!\n";
	  cond();
    
  }
void menu()
{ system("CLS");
  cout<<"\n\t\tWhat do you want to do?"<<endl;
  cout<<"\t\t----------------------"<<endl;
  cout<<"\t\t1-ADD STUDENT RESULT"<<endl;
  cout<<"\t\t2-DISPLAY STUDENTS RESULT(WHOLE)"<<endl;
  cout<<"\t\t3-Search SPACIFIC STUDENT RESULT"<<endl;
  cout<<"\t\t4-EDIT SPACIFIC STUDENT RESULT"<<endl;
  cout<<"\t\t5-Quit Program"<<endl;
  cout<<"\t\t----------------------"<<endl;
  cout<<"Enter your choice: ";

  cin>>get.choice;
  switch(get.choice)
 {
    case 1:         //If user presses 1 then student adding module would be displayed.
    insert_student();
   
    break;
    case 2:
    	display();
        break;
    case 3:
    	search();
    	break;
    case 4:
    	edit();
	    break;
	    
	case 5:
	break;		
}}
int main()
{ 
  
  system("cls");
  project();
  cin.get();
  system("cls");
  menu();
}
