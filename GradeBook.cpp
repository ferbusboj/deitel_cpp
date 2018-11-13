#include <iostream>
#include <iomanip>                      //parameterized stream manipulators
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
    // Initialization phase
    int total = 0;
    unsigned int gradeCounter = 0;
    
    // processing phase
    cout << "Grade: (-1 to qute) ";
    int grade = 0;
    cin >> grade;
    
    // loop until sentineal is read from user
    while(grade != -1)
    {
        gradeCounter++;
        total += grade;
        
        cout << "Next grade: ";
        cin >> grade;
    }
    
    if (gradeCounter != 0)
    {
        double average = static_cast< double > (total)/ gradeCounter;
        cout<< "Grades entered: " << gradeCounter << endl;
        
        cout << setprecision (2)<< fixed;
        cout << "class average is: " << average << endl;
        
    }
    
}












