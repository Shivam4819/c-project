#include <iostream>
#include <set>
#include <iterator>
#include <string>
using namespace std;
class set_function{
private:
    set <int> data;
    set <int> :: iterator itr;
    int i;
    int word;
public:
    void enter();
    void display();
    void search();
};
void set_function::enter(){
    data.insert(10);
    data.insert(20);
    data.insert(50);
    data.insert(70);
    data.insert(100);
    data.insert(300);
    data.insert(400);
}
void set_function::display(){
       i=0;
    for (itr = data.begin(); itr != data.end(); ++itr){
        cout<<"("<<i<<")"<<"\t"<<*itr<<endl;
        i++;
    }
    cout << endl;
}
void set_function::search(){
    cout<<"data to be  searched:-";
    cin>>word;
    itr = data.find(word);
     if(itr != data.end())
        cout<<"found the data:-"<<*itr;
    else
        cout<<"data not found";
}
int main()
{
   set_function f;
   f.enter();
   f.display();
   f.search();
}
