#include <iostream>
#include <string>

int main(){
    
    int age {20};
    std::cout  << "Hello C++" <<"\n";
    std::cout << "Age : " << age << std::endl;
    std::cerr << "Error :( , Something went wrong\n";
    std::clog << "There are statement executed";

    int age2 ;
    std::string fullname ;

    std::cout <<"\n\nEnter your name and age\n";
    // std::cin >> name >> age2 ;
    std::getline(std::cin,fullname);
    std::cin >> age2;
    std::cout << "name : " << fullname  << " age : "<< age2 ; 

    return 0;
}