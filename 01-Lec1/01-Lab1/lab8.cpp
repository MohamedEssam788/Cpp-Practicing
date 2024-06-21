#include<iostream>
#include<string>
using namespace std;

enum class Grade
{
    failed,
    pass,
    good,
    veryGood,
    Excellent
};

std::string to_string(Grade gd) {
    switch (gd) {
        case Grade::failed:
            return "failed"; 
        case Grade::pass:
            return "pass"; 
        case Grade::good:
            return "good"; 
        case Grade::veryGood: 
            return "veryGood"; 
        case Grade::Excellent:
            return "Excellent"; 
        default:
            return "";
    }
}

int main() {
    int user_grade;
    cout << "Enter your grade: ";
    cin >> user_grade;

    Grade current_grade;

    if (user_grade < 50)
    {
        current_grade = Grade::failed;
    }
    else if (user_grade <= 65)
    {
        current_grade = Grade::pass;
    }
    else if (user_grade <= 75)
    {
        current_grade = Grade::good;
    }
    else if (user_grade < 85)
    {
        current_grade = Grade::veryGood;
    }
    else if (user_grade >= 85)
    {
        current_grade = Grade::Excellent;
    }
    else
    {
        
    }
    cout << "Your grade: " << to_string(current_grade) << endl;

    return 0;
}
