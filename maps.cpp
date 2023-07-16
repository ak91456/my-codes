#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    map<string,int>maps; //map declaration
    maps["Harsh"]=3; //data entry in map
    maps["Avirul"]=7;  //data entry in map      //maps are arranged in ascending order automatically
    maps["Rishabh"]=11;  //data entry in map
    map<string,int>::iterator itr; //creating an iterator
    for(itr=maps.begin();itr!=maps.end();itr++){ 
        cout<<itr->first<<"\t"<<itr->second<<endl; //printing map first contains key and second the value
    }
    cout<<"the map is empty : "<<maps.empty()<<endl; //to check whether map is empty or not
    cout<<"the size of map is : "<<maps.size()<<endl;  //to check size of map
    return 0;
}