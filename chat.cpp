// chat.cpp
#include "chat.h"
#include "user.h"
#include "message.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Chat::Chat()
{

}

void showUser()
{
    for (auto& user : _users)
        std::cout << user.get_login() << " "
        << user.get_password() << std::endl;
}

void addUser()
{
    std::string addLogin;
    std::string addPassword;
    std::cout << "Enter login: " << std::endl;
    std::cin >> addLogin;
    std::cout << "/nEnter password: " << std::endl;
    std::cin >> addPassword;
    _users.emplace_back(addLogin, addPassword);
}

void initialMenu()
{
    while (true)
    {
        char option;
        std::cout << "********** Choose an option: **********" << std::endl;
        std::cout << "   1 - new user sign-up | 2 - sign-in | 0 - exit" << std::endl;
        std::cin >> option;
        std::string addLogin;
        std::string addPassword;
        switch (option)
        {
        case '1':
            std::cout << "Sign-up procedure called..." << std::endl;
            
            this->addUser();

            std::cout << "User added" << std::endl;
            this->showUsers();
            break;

        case '2':
            std::cout << "Existing user sign-in procedure..." << std::endl;
            break;

        case '0':
            std::cout << "Exit" << std::endl;
            break;

        default:
            std::cout << "Wrong input. Exit" << std::endl;
            break;
        }
    }
}
