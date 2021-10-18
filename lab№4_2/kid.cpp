#include "kid.h"

Kid::Kid(string n, string s, int a,
         string sn, string tn, int inc, std::string lh)
{
    name = n;
    sex = s;
    age = a;
    secondName = sn;
    thirdName = tn;
    income = inc;
    lovelyHobby = lh;
}

void Kid::setIncome(const double &money)
{
    income = money;
}

double Kid::getIncome() const
{
    return income;
}

string Kid::fullName()
{
    return name + " " + secondName + " " + thirdName;
}

string Kid::reviewMyself()
{
    string story;
    story += "������, ���� ����� " + fullName() + ".\n";
    story += "��� " + std::to_string(age) + ". ";

    age >= 3
    ? story += "����� " + std::to_string(7-age) + " ���� � ����� � �����.\n"
    : story += "� ��� ���� ��������!\n";

    lovelyHobby != ""
    ? story += "��� ������� ����� - ��� " + lovelyHobby + ".\n"
    : story += "� ���� ��� �������� �����, � ��������� ���� �����.\n";

    story += "�������� �������, ��� � ����� ";
    if (sex == "�������") {
        story += "������� ���������.\n";
    } else if (sex == "�������") {
        story += "������� ��������.\n";
    } else {
        story += "������� ��������.\n";
    }

    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << income;
    string strIncome = stream.str();

    story += "� ���� ���� ��� ����� �����, �� ��������\n"
             "� ����� �������� ����������� ������ �����\n"
             "�� " + strIncome + " ������ �� ��� ����.\n"
             "� ����� �� ���������������� ����� 18 ���.\n";
    return story;
}
