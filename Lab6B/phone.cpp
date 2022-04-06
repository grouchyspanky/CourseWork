#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <stdexcept>
#include "phone.h"


Phone::Phone(const std::string& areaCode, const std::string& prefix, const std::string&number)
{

    if(!areaCode.size() == 3 || !isNumber(areaCode) 
        || !prefix.size() == 3 || !isNumber(prefix)
        || !number.size() == 4 || !isNumber(number))
            throw std::invalid_argument("Arguements must be numbers and of the correct length.");
            this->areacode = areacode;
            this->prefix = prefix;
            this->number = number;
}



    Phone::Phone(const Phone& phone)
    : Phone(phone.areacode,phone.prefix, phone.number) { }
    
    std::string Phone::getAreacode() const { return areacode; }
    
    std::string Phone::getPrefix() const {return prefix; }
    
    std::string Phone::getNumber() const {return number; }
    
    std::string Phone::toString() const 
    { 
        std::stringstream strStm;
        strStrm << '(' << areacode << ')' << prefix << '-' <<number;

        return strStm;

    }
    
    bool Phone::isNumber(const std::string& num) const
    {
        for (size_t i = 0; i < num.size(); ++i)
        {
            if (!isdigit(num[i]))
            {
                return false;
            }
            return true;
        }
        
    }



std::ostream& operator<<(std::ostream& out, Phone& phone)
{
    out << phone.toString();
    return out;
}
