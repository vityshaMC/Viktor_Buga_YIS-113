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
    story += "Привет, меня зовут " + fullName() + ".\n";
    story += "Мне " + std::to_string(age) + ". ";

    age >= 3
    ? story += "Через " + std::to_string(7-age) + " года я пойду в школу.\n"
    : story += "Я уже умею говорить!\n";

    lovelyHobby != ""
    ? story += "Мое любимое хобби - это " + lovelyHobby + ".\n"
    : story += "У меня нет любимого хобби, я увлекаюсь всем сразу.\n";

    story += "Родители говорят, что я расту ";
    if (sex == "мужской") {
        story += "хорошим мальчиком.\n";
    } else if (sex == "женский") {
        story += "хорошей девочкой.\n";
    } else {
        story += "хорошим ребенком.\n";
    }

    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << income;
    string strIncome = stream.str();

    story += "У меня пока нет своих денег, но родители\n"
             "с моего рождения откладывают каждый месяц\n"
             "по " + strIncome + " рублей на мой счет.\n"
             "Я смогу им вопспользоваться после 18 лет.\n";
    return story;
}
