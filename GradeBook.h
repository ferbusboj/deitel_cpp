#include <string>

class GradeBook
{
public:
    explicit GradeBook(std::string name);
    void setCourseName(std::string courseName);
    std::string getCourseName() const;
    void displayMessage() const;
    void determineClassAverage() const;

private:
    std::string m_courseName;
};



