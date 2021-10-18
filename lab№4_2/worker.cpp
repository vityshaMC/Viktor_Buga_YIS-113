#include "worker.h"

Worker::Worker(std::string n, std::string s, int a,
               std::string uN, int nC, int sI,
               std::string sn, std::string tn, int inc,
               std::string lh, std::string r, int m)
    :Student(n, s, a, uN, nC, sI, sn, tn, inc, lh, r, m)
{

}

void Worker::setIncome(const double &money)
{
    income = money;
}

double Worker::getIncome() const
{
    return income;
}

string Worker::fullName()
{
    return name + " " + secondName + " " + thirdName;
}

string Worker::reviewMyself()
{
    string story;
    story += "������, ���� ����� " + fullName() + ".\n";
    story += "��� " + std::to_string(age) + ". ";

    lovelyHobby != ""
    ? story += "��� ������� ����� - ��� " + lovelyHobby + ".\n"
    : story += "� ���� ��� �������� �����.\n";

    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << income;
    string strIncome = stream.str();

    story += "������� ������������� � ������� " + strIncome +
             " ������ � �����.\n������ �� " + universityName +
             ". ��� � ���, ����� �������� ������.\n";
    return story;
}
