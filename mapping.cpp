#include <iostream>
#include <map>
#include <iterator>
#include <string>
using namespace std;
class mapping{
private:
    map <string , int> data;
    map <string, int> :: iterator itr;
    string word;
public:
    void enter();
    void display();
    void search();
};
void mapping::enter(){
    data.insert(pair <string, int> ("abh", 400));
    data.insert(pair <string, int> ("shyam", 150));
    data.insert(pair <string, int> ("divya", 900));
    data.insert(pair <string, int> ("akash", 80));
    data.insert(pair <string, int> ("priya", 10));
}
void mapping::display(){
    cout<<"KEY\t\t"<<"VALUE"<<endl;
    for (itr = data.begin(); itr != data.end(); ++itr){
        cout<<itr->first<<"\t\t"<<itr->second<<endl;
    }
    cout << endl;
}
void mapping::search(){
    cout<<"Enter the key to search the value:-";
    cin>>word;
    itr =data.find(word);
    if(itr != data.end())
        cout<<"data found:-"<<itr->second;
    else
        cout<<"data not found";

}
int main(){
    mapping s;
    s.enter();
    s.display();
    s.search();
}
