#include <iostream>
#include <string>
#include <algorithm>
using std::string;
using std::cout;
using std::endl;

// 1. Define the abstract interface interface template
class LibraryUser {
public:
    virtual void registerAccount() = 0;
    virtual void requestBook() = 0;
    
    virtual ~LibraryUser() = default;
};

// 2. Class definition handling user ages below 12
class KidUsers : public LibraryUser {
private:
    int age;
    string bookType;

public:
    KidUsers(int age, string bookType) : age(age), bookType(bookType) {}

    void registerAccount() override {
        if (age < 12) {
            cout << "You have successfully registered under a Kids Account" << endl;
        } else {
            cout << "Sorry, Age must be less than 12 to register as a kid" << endl;
        }
    }

    void requestBook() override {
        if (bookType == "Kids") {
            cout << "Book Issued successfully, please return the book within 10 days" << endl;
        } else {
            cout << "Oops, you are allowed to take only kids books" << endl;
        }
    }
};

// 3. Class definition handling adult registrations
class AdultUser : public LibraryUser {
private:
    int age;
    string bookType;

public:
    AdultUser(int age, string bookType) : age(age), bookType(bookType) {}

    void registerAccount() override {
        if (age > 12) {
            cout << "You have successfully registered under an Adult Account" << endl;
        } else {
            cout << "Sorry, Age must be greater than 12 to register as an adult" << endl;
        }
    }

    void requestBook() override {
        if (bookType == "Fiction") {
            cout << "Book Issued successfully, please return the book within 7 days" << endl;
        } else {
            cout << "Oops, you are allowed to take only adult Fiction books" << endl;
        }
    }
};

// 4. Verification engine executing required university test workflows
int main() {
    
    cout << "--- Executing Test Case #1 (KidUsers Verification) ---" << endl;
    LibraryUser* kid1 = new KidUsers(10, "Kids");
    kid1->registerAccount();
    kid1->requestBook();
    delete kid1;
    
    cout << endl;

    LibraryUser* kid2 = new KidUsers(18, "Fiction");
    kid2->registerAccount();
    kid2->requestBook();
    delete kid2;

    cout << "\n--- Executing Test Case #2 (AdultUser Verification) ---" << endl;
    LibraryUser* adult1 = new AdultUser(5, "Kids");
    adult1->registerAccount();
    adult1->requestBook();
    delete adult1;
    
    cout << endl;

    LibraryUser* adult2 = new AdultUser(23, "Fiction");
    adult2->registerAccount();
    adult2->requestBook();
    delete adult2;

    return 0;
}