#include <iostream>

// main place for navigating to other places and basic introduction

// information about the player stored in variables is written with user_whateverInfoAboutThePlayer

int main(){

    // Basic information
    std::string user_name;
    int user_day, user_month, user_year;

    // Introduction
    std::cout << "Welcome to The Town!\n";

    do{
        std::cout << "What is your name?: ";
        std::cin >> user_name;
    }while(user_name.empty());

    do{
        std::cout << "What is your date of birth?: ";
        std::cin >> user_month;
        std::cin >> user_day;
        std::cin >> user_year;
    }while(user_day < 0 && user_day > 31 && user_month < 0 && user_month > 12 && user_year <= 1902 && user_year > 2025);
}