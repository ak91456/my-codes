#include<iostream>

void square(){
    int side;
    std::cout<<"enter the side of square : ";
    std::cin>>side;
    
    for(int i=0;i<side;i++){
        std::cout<<"* ";
    }
    std::cout<<std::endl;
    for(int i=0;i<side-2;i++){
        std::cout<<"*";
        for(int j=0;j<side-2;j++){
            std::cout<<"  ";
        }
        std::cout<<" *"<<std::endl;
    }
    for(int i=0;i<side;i++){
        std::cout<<"* ";
    }

}

int main(){
    square();
    return 0;
}
