#include <iostream>

// main place for navigating to other places and basic introduction

// information about the player stored in variables is written with user_whateverInfoAboutThePlayer

int main(){

    // Basic information
    std::string user_name;
    int user_age;
    int user_day, user_month, user_year;

    // Introduction
    std::cout << "Welcome to The Town!\n";

    do{
        std::cout << "What is your name?: ";
        std::cin >> user_name;
    }while(user_name.empty());

}