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
    story += "Привет, меня зовут " + fullName() + ".\n";
    story += "Мне " + std::to_string(age) + ". ";

    lovelyHobby != ""
    ? story += "Мое любимое хобби - это " + lovelyHobby + ".\n"
    : story += "У меня нет любимого хобби.\n";

    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << income;
    string strIncome = stream.str();

    story += "Работаю программистом и получаю " + strIncome +
             " рублей в месяц.\nДиплом из " + universityName +
             ". Вот и все, пойду работать дальше.\n";
    return story;
}
