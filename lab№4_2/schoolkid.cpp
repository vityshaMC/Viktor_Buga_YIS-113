#include "schoolkid.h"

//��������� ����� ������������ � ���, ��� ��� �������� ����������
//Student ��� ��������� ��������� ������������� ��� �������� ������,
//��� ��� Kid ��� �� �������� �����������, ��� Human
SchoolKid::SchoolKid(string n, string s, int a,
                     string sn, string tn, int inc, string lh,
                     string r, int m)
    :Kid(n, s, a, sn, tn, inc, lh)
{
    classRoom = r;
    pocketMoney = m;
}

void SchoolKid::setIncome(const double &money)
{
    income = money;
}

double SchoolKid::getIncome() const
{
    return income;
}

string SchoolKid::fullName()
{
    return name + " " + secondName + " " + thirdName;
}

string SchoolKid::reviewMyself()
{
    string story;
    story += "������, ���� ����� " + fullName() + ".\n";
    story += "��� " + std::to_string(age) + ". ";

    age <= 15
    ? story += "���� ��� � �� ����� ����������� � ����������� � ���.\n"
    : story += "� ��� ��������� � ���������, ��� ��� ���� ����� ��������\n"
               "�������������, � ������ ������ ������� � ���!\n";

    lovelyHobby != ""
    ? story += "��� ������� ����� - ��� " + lovelyHobby + ".\n"
    : story += "� ���� ��� �������� �����, � ��������� ������, ������ ���\n"
               "��� ����� ������  � �������� �� ������ ����� ������.\n";

    story += "��� ������� �������, ��� � ";
    if (sex == "�������") {
        story += "��������� ������ � ��������� ���������.\n";
    } else if (sex == "�������") {
        story += "��������� ������� � ��������� ���������.\n";
    } else {
        story += "������������ � ��������������� �������.\n";
    }

    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << income;
    string strIncome = stream.str();

    story += "� ���� ���� ��� ������ ����������� ������,\n"
             "�� �������� � ����� �������� ����������� ������\n"
             "����� �� " + strIncome + " ������ �� ��� ����.\n"
             "� ��� ����� ����������� � ����� ���� �������\n"
             "��������� �����. ������ ��-�������, �������� � ����\n"
             "������ ��� ���� " + std::to_string(pocketMoney) + ".\n";
    return story;
}
