#include <iostream>

class BankAccount {
private:
    std::string login = "qwerty";
    std::string password = "12345";
protected:
    double balance;
    bool authorized = false;
public:
    BankAccount(std::string a, std::string b) {
        if ((login == a) & (password == b)) {
            authorized = true;
            std::cout << "authorized" << std::endl;
        } else {
            std::cout << "wrong data" << std::endl;
        };
    };

    void deposit (double amount) {
        if (authorized) {
            balance += amount;
        };
    };

    double getBalance() {
        if (authorized) {
            return balance;
        };
    }
};