// user.h
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "chat.h"

class User 
{

private:
    const std::string _login;
    std::string _password;

public:
    User() = default;
    User(const std::string login, std::string password)
        : _login(login), _password(password) {}
    virtual ~User() {}
    User& operator=(User& _list) = delete;

    std::string get_login() const;
    int change_password(std::string password); 

    void set_login(const std::string login) {}
    void set_password(std::string password) {}
    const std::string get_login() { return _login; }
    const std::string get_password() { return _password; }


};
