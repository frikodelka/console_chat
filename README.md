# console_chat
Authors:
+ Яна Раздобреева <yanic18@yandex.ru> (@tigra38) - авторизация и регистрация пользователей, обмен общими сообщениями, ислючения и шаблонные функции, общая правка кода
+ Алексей Досаев <adosaev@zohomail.com> (@Aldi586) - создание меню, авторизация и регистрация пользователей, обмен личными сообщениями, общая правка кода
+ Мария Юркина <efanova.marya98@yandex.ru> (@frikodelka) - создание меню, авторизация и регистрация пользователей, обмен личными сообщениями, общая правка кода

Console chat:
Чат представляет собой консольную программу с функцией регистрации и аутентификации пользователей, обмена личными сообщениями между двумя пользователями и рассылки сообщений для всех пользователей.
Перечень сообщений и пользователей реализован с помощью динамических массивов, инициализируемых при создании экземпляра класса Chat, в котором также описаны перечисленные функции работы с сообщениями и пользователями.
Регистрация пользователя представляет собой проверку уникальности логина, проверку на правильность заполнения полей и запись в массив "пользователи" введённых логина, пароля и (при необходимости) имени пользователя. Аутентификация совершает поиск введенного пользователем логина в массиве зарегистрированных пользователей, сравнение введённого пароля с паролем, соответствующему логину в массиве, и в случае совпадения - происходит присвоение переменной "текущий пользователь" значения "логин" аутентифицированного пользователя.
Обмен личными сообщениями производится через функции "чтения" и "отправки" сообщений: "отправка" создаёт запись в массиве с параметрами: "от кого", "кому", "когда" и "содержание сообщения", а "чтение" совершает перебор записей в массиве и поиск сообщений с совпадением параметров "имя текущего пользователя" и "кому".
Отправка общих сообщений происходит подобно отправке личных сообщений, но в параметре сообщения "кому" указывается условный пользователь "all", который недоступен для регистрации и аутентификации.

Основные типы и функции в проекте:
+ class Message() - класс сообщений
+ + string _from - строка автора сообщения
+ + string _to - строка адрессата сообщения
+ + string _text - содержание сообщения
+ + time_t _timestamp - время отправки сообщения

+ class User() - класс пользователя
+ + string _login - логин пользователя
+ + string _password - пароль пользователя
+ + bool pwdVerify() - функция проверки пароля

+ class Chat() - Основной класс чата.
+ + vector<Message> _messages - массив объектов класса Message
+ + vector<User> _users - массив объектов класса User
+ + void Chat::showUsersByLogin() - вывод списка всех зарегистрированных пользователей кроме текущего
+ + void Chat::initialMenu() - основное меню
+ + + void Chat::addUser() - добавление нового пользователя
+ + + void Chat::login() - авторизация пользователя
+ + void Chat::userMenu() - меню пользователя
+ + + void Chat::createMessage() - создать личное/общее сообщение
+ + + void Chat::showMessages() - посмотреть личные/общие сообщения
+ + + void Chat::showAllMessagesWith() - посмотреть переписку с конкретным пользователем
+ + + void Chat::logout() - выход из пользователя и возврат в основное меню
