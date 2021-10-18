#include "student.h"

Student::Student(std::string n, std::string s, int a,
                 std::string uN, int nC, int sI,
                 std::string sn, std::string tn, int inc,
                 std::string lh, std::string r, int m)
    : SchoolKid(n, s, a, sn, tn, inc, lh, r, m)
{
    universityName = uN;
    subIncome = sI;
    numCourse = nC;
}

void Student::setIncome(const double &money)
{
    income = money;
}

double Student::getIncome() const
{
    return income;
}

string Student::fullName()
{
    return name + " " + secondName + " " + thirdName;
}

string Student::reviewMyself()
{
    string story;
    story += "������, ���� ����� " + fullName() + ".\n";
    story += "��� " + std::to_string(age) + ". ";

    story += "� ����� � " + universityName + " �� " +
            std::to_string(numCourse) + " �����.\n";

    lovelyHobby != ""
    ? story += "��� ������� ������� � ��������� ����� � ������� - ��� "
            + lovelyHobby + ".\n"
    : story += "� ���� ��� �������� �����, � ������������ ��������, �����\n"
               "���������� ��������, ���� ��������� ��� �� ����.\n";

    story += "��� ���������� �������, ��� � ";
    if (sex == "�������") {
        story += "�������� ������.\n";
    } else if (sex == "�������") {
        story += "���������.\n";
    } else {
        story += "����������� � ����, �� � ����� �������� �������.\n";
    }

    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << income;
    string strIncome = stream.str();
    stream.str("");
    stream << std::fixed << std::setprecision(2) << income*12*18;
    string strFullIncome = stream.str();

    story += "� ���� ���� ��������� ���������� �����,\n"
             "�� �������� � ����� �������� ����������� ������\n"
             "����� �� " + strIncome + " ������ �� ��� ����.\n"
             "� ��� ��������������� �� ��� ���� " + strFullIncome + " ������.\n"
             "������ ��������� ����� � ����� ���� ������ ��������������\n"
             "���� �� ������� ��������. �� ������� � ������������\n"
             "����������� �� �������. �� ������������ � ��������� �������\n"
             "�� " + std::to_string(subIncome) + " ������ � �����.\n";
    return story;
}
