#include <string>
#include <iostream>
#include "GradeBook.h"

using namespace std;

GradeBook::GradeBook(string name)
{
    setCourseName(name);
}

void GradeBook::setCourseName(string name)
{
    if (name.size() <= 25)
        m_courseName = name;
    else
    {
        m_courseName = name.substr(0, 25);
        cerr << "Name too long, chopped to 25 characters" << endl;
    }
}

string GradeBook::getCourseName() const
{
    return m_courseName;
}

void GradeBook::displayMessage() const
{
    cout << "Welcome to the grade book of " << getCourseName() << "!" << endl;
}

void GradeBook::determineClassAverage() const
{
    int total = 0;
    unsigned int gradeCounter = 0;
    
    while (gradeCounter < 10)
    {
        cout << "grade: ";
        int grade;
        cin >> grade;
        total += grade;
        gradeCounter++;
    }
    
    int average = total /10;
    cout << "Average: " << average << endl;
    
    
}












