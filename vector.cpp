#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
using namespace std;
class vector_function{
private:
    vector <int> data;
    vector <int> :: iterator itr;
    int i;
    int word;
public:
    void enter();
    void display();
    void search_data();
};
void vector_function::enter(){
    data.push_back(80);
    data.push_back(60);
    data.push_back(50);
    data.push_back(70);
    data.push_back(20);
    data.push_back(90);
    data.push_back(0);
}
void vector_function::display(){
     i=0;
    for (itr = data.begin(); itr != data.end(); ++itr){
        cout<<"("<<i<<")"<<"\t"<<*itr<<endl;
        i++;
    }
    cout << endl;
}
void vector_function::search_data(){
    cout<<"Enter the data to be searched:-";
    cin>>word;
    itr = find(data.begin(),data.end(),word);
     if(itr != data.end())
        cout<<"data found:-"<<*itr;
    else
        cout<<"data not found";
}

int main()
{
    vector_function f;
    f.enter();
    f.display();
    f.search_data();
}
