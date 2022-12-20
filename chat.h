// chat.h
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "user.h"
#include "message.h"

class Chat {
private:
    std::vector<User> _users;
    std::vector<Message> _messages;

    size_t users_num = 0;
    size_t message_num = 0;
    User* current_user;

public:
    Chat();
    void login_user (std::string login, std::string password);
    void addUser(std::string addLogin, std::string addPassword);
    void create_message(std::string from, std::string to, std::string text);
    void show_users();
    virtual ~Chat();

};
