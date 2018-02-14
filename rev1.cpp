#include<iostream>
#include<stack>
using namespace std;

stack <int> s;
class list
{
    private:
       struct node{
           int data;
            struct node *next;
           }*start,*temp, *newnode, *temp1, *temp2, *temp3;
       int x,i,n,y,num;
       
    public:
       list();
       int accept();
       void display();
       void reverse();
       int rev();
};

list::list(){
    start=NULL;
    
}

int list::accept(){
cout<<"enter the no of nodes-";
cin>>n;
for(i=0;i<n;i++){
 cout<<"enter the data-";
 cin>>x;
    if(start==NULL){
       start=new node;
       start->data=x;
       start->next=NULL;
     }
     else{
       temp=start;
       while(temp->next!=NULL)
       {
       temp=temp->next;
       }
       newnode=new node;
       newnode->data=x;
       newnode->next=NULL;      
       temp->next=newnode;
      
       }       
     }
      return 0;
}
void list::display()
{
temp=start;
cout<<"the element are->";
while(temp!=NULL){
       s.push(temp->data);
       cout<<s.top()<<" ";
       temp=temp->next;
       }
       cout<<endl; 
}
// reverse using stack
void list::reverse()
{
start=NULL;
newnode=NULL;
for(i=0;i<n;i++){
 if(start == NULL){
            start = new node;
            start->data = s.top();
            start->next = NULL;
        }

        else{
            temp = start;
            while(temp->next != NULL){
                temp = temp->next;
            }
            newnode = new node;
            newnode->data = s.top();
            newnode->next = NULL;
            temp->next = newnode;
        }
        s.pop();
      }
      temp=start;
      while(temp!=NULL){
      cout<<temp->data<<" ";
      temp=temp->next;
      }
     
}
//reverse using pointers.

int list ::rev()
{
temp1=start;
temp2=temp1->next;
temp3=temp2->next;
temp1->next=NULL;
temp2->next=temp1;

while(temp3->next!=NULL){
temp1=temp3;
temp3=temp3->next;
temp1->next=temp2;
temp2=temp1;
}
if(temp3->next==NULL){
temp3->next=temp1;
}
temp=temp3;
cout<<"after second reverse"<<endl;
while(temp!=NULL){
cout<<temp->data;
temp=temp->next;
}
}
int main()
{
int ch;
list l;
do{
cout<<"\tmenu"<<endl;
cout<<"\t1)accept"<<endl;
cout<<"\t2)display"<<endl;
cout<<"\t3)reverse of list by using stack"<<endl;
cout<<"\t4)reverse of list by using pointer"<<endl;
cout<<"\t5)exit"<<endl;
cout<<"enter the choice"<<endl;
cin>>ch;
switch(ch){
 case 1:l.accept();
        break;       
 case 2:l.display();
        break;   
 case 3:l.reverse();
        break;
 case 4:l.rev();
        break;      
        }
}
while(ch!=5);
}



