// message.h
#pragma once
#include <iostream>
#include <string>


class Message
{
private:
    std::string _from;
    std::string _to;
    std::string _text;

public:
    ~Message() {}
    Message(const std::string& from, const std::string& to, const std::string& text)
        : _from(from), _to(to), _text(text) {}
   
    const std::string getFrom() 
    { 
        return _from; 
    }
    const std::string getTo() 
    { 
        return _to; 
    }
    const std::string getText() 
    { 
        return _text; 
    }
};
