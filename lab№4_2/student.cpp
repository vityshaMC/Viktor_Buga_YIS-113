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
    story += "ѕривет, мен€ зовут " + fullName() + ".\n";
    story += "ћне " + std::to_string(age) + ". ";

    story += "я учусь в " + universityName + " на " +
            std::to_string(numCourse) + " курсе.\n";

    lovelyHobby != ""
    ? story += "ћое любимое зан€тие в свободное врем€ с детства - это "
            + lovelyHobby + ".\n"
    : story += "” мен€ нет любимого хобби, € подрабатываю вечерами, чтобы\n"
               "оплачивать квартиру, ведь общежитие мне не дали.\n";

    story += "ћои сокурсники говор€т, что € ";
    if (sex == "мужской") {
        story += "классный парень.\n";
    } else if (sex == "женский") {
        story += "крутаааа€.\n";
    } else {
        story += "неуверенный в себе, но в целом неплохой человек.\n";
    }

    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << income;
    string strIncome = stream.str();
    stream.str("");
    stream << std::fixed << std::setprecision(2) << income*12*18;
    string strFullIncome = stream.str();

    story += "” мен€ пока небольшой посто€нный доход,\n"
             "но родители с моего рождени€ откладывали каждый\n"
             "мес€ц по " + strIncome + " рублей на мой счет.\n"
             "¬ мое совершеннолетие на нем было " + strFullIncome + " рублей.\n"
             "—ейчас благодар€ этому € сразу смог начать самосто€тельно\n"
             "жить на съемной квартире. ѕо вечерам € подрабатываю\n"
             "репетитором по истории. ќт преподавани€ € регул€рно получаю\n"
             "по " + std::to_string(subIncome) + " рублей в мес€ц.\n";
    return story;
}
