//main.cpp
#include <iostream>
#include <string>
#include "user.h"
#include "chat.h"

using namespace std;

int main()
{
   Chat* chat1 = new Chat;
   chat1->addUser("login1", "password1");
   chat1->addUser("login2", "password2");

   chat1->show_users();

    return 0;
}
