#include <string>
#include <iostream>
#include <cctype>



bool hasUpper(const std::string& str) {
    for (char ch : str) {
        if (std::isupper(ch)) return true;
    }
    return false;
}

bool hasLower(const std::string& str) {
    for (char ch : str) {
        if (std::islower(ch)) return true;
    }
    return false;
}

bool hasDigit(const std::string& str) {
    for (char ch : str) {
        if (std::isdigit(ch)) return true;
    }
    return false;
}

bool hasSpecial(const std::string& str) {
    for (char ch : str) {
        if (!std::isalnum(ch)) return true;
    }
    return false;
}

bool checkPassword(const std::string& pass, bool& is_valid){
    
    if (pass.length() < 8) {
        std::cout << "The password must be 8 characters long\n";
        is_valid = false;
    }
    if (!hasUpper(pass)) {
        std::cout << "The password must have at least one upper case letter\n";
        is_valid = false;
    }
    if (!hasLower(pass)) {
        std::cout << "The password must have at least one lower case letter\n";
        is_valid = false;
    }
    if (!hasDigit(pass)) {
        std::cout << "The password must have at least one digit\n";
        is_valid = false;
    }
    if (!hasSpecial(pass)) {
        std::cout << "The password must have at least one special character\n";
        is_valid = false;
    }
    return is_valid;
}


int main()
{
    std::string password;
 
    
    while(true){
        
        std::cout << "Enter your password: ";
        std::getline(std::cin, password);
        
        bool is_valid = true;
        
        checkPassword(password, is_valid);
        
        if (is_valid) {
            std::cout << "The password is valid\n";
            break;
        }else {
            std::cout << "Please try again!\n\n";
        }
        
    }

    
return 0;
}
