//finding the element from start and from last

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
           }*start,*temp, *newnode, *temp1;
       int x,i,n,y,num,num2,n1;
       node *a[20];
    public:
       list();
       void accept();
       void display();
       void find_element();
       void element_from_last();
       
};

list::list(){
    start=NULL;
}

void list::accept(){

cout<<"enter the no of nodes-";
cin>>n;
for(i=0;i<n;i++){
 cout<<"enter the data-";
 cin>>x;
    if(start==NULL){
       start=new node;
       start->data=x;
       start->next=NULL;
       s.push(start->data);
       
     }
     else{
       temp=start;
       while(temp->next!=NULL) {
       temp=temp->next;
       }
       newnode=new node;
       newnode->data=x;
       newnode->next=NULL;      
       temp->next=newnode;
       s.push(newnode->data);
       }       
     }
     
}
void list::display()
{
temp=start;
cout<<"the element are==>";
for(i=0;i<n;i++){
       a[i]=temp;
       cout<<a[i]->data<<" ";
       temp=temp->next;
       }
       cout<<endl; 
}

void list::find_element()
{
cout<<"enter the index of the element to know the value at that index"<<endl;
cin>>num;
cout<<"the element is==>"<<a[num]->data<<endl;
}
void list ::element_from_last()
{
cout<<"enter the nth node from last to know the value at that place"<<endl;
cin>>n1;
num2=n-n1;
cout<<"the elemnt from last is==>"<<a[num2]->data<<endl;
}

int main()
{
int ch;
list si;
do{
cout<<"\tmenu"<<endl;
cout<<"\t1)accept list"<<endl;
cout<<"\t2)display list"<<endl;
cout<<"\t3)element from front"<<endl;
cout<<"\t4)element from back"<<endl;
cout<<"\t5)exit"<<endl;
cout<<"enter the choice"<<endl;
cin>>ch;
switch(ch){
case 1:si.accept();
       break;
case 2:si.display();
       break;
case 3:si.find_element();
       break;
case 4:si.element_from_last();
       break;
  }
}
while(ch!=5);      

}





