#include <iostream>

// main place for navigating to other places and basic introduction

// information about the player stored in variables is written with user_whateverInfoAboutThePlayer

int main(){

    // Basic information
    // we store user info so later on we can identify who is who
    std::string user_name;
    int user_day, user_month, user_year;
    // Basic information

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
    }while(user_day <= 0 && user_day > 31 && user_month <= 0 && user_month > 12 && user_year <= 1902 && user_year > 2025);

    std::cout << "Welcome " << user_name << "! " << "You're ready to start playing.\n";
    // Introduction

    // Navigation menu

    // Information
    bool hasHome = false;
    double user_money = 0;
    int selection;

    std::cout << "1." << " Go to your house" << '\n';
    std::cout << "2." << " Shop" << '\n';
    std::cout << "3." << " Jobs" << '\n';
    std::cout << "4." << " Help" << '\n';

    if(selection == 1){
        std::cout << "1" << '\n';
    }
    else if(selection == 2){
        std::cout << "2" << '\n';
    }
    else if(selection == 3){
        std::cout << "3" << '\n';
    }
    else if(selection == 4){
        std::cout << "4" << '\n';
    }
    else{
        std::cout << "Invalid selection (1-4)\n";
    }
}