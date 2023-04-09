#include<iostream>
 void rectangle(){
    int length,breadth;
    std::cout<<"Enter the length : ";
    std::cin>>length;
    std::cout<<"Enter the breadth : ";
    std::cin>>breadth;

    for(int i=0;i<length;i++){
        std::cout<<"* ";
    }
    std::cout<<std::endl;

    for(int i=0;i<breadth-2;i++){
        std::cout<<"* ";
        for(int j=0;j<length-2;j++){
            std::cout<<"  ";
        }
        std::cout<<"* ";
        std::cout<<std::endl;
    }
    for(int i=0;i<length;i++){
        std::cout<<"* ";
    }
 }

 int main(){
    rectangle();
 }