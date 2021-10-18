#include "schoolkid.h"

//специфика этого конструктора в том, что для создания экземпляра
//Student уже необходим экземпляр родительского или базового класса,
//так как Kid уже не является абстрактным, как Human
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
    story += "Привет, меня зовут " + fullName() + ".\n";
    story += "Мне " + std::to_string(age) + ". ";

    age <= 15
    ? story += "Пока что я не особо задумываюсь о поступлении в ВУЗ.\n"
    : story += "Я уже готовлюсь к экзаменам, так как хочу стать успешным\n"
               "разработчиком, а потому упорно готовлю к ЕГЭ!\n";

    lovelyHobby != ""
    ? story += "Мое любимое хобби - это " + lovelyHobby + ".\n"
    : story += "У меня нет любимого хобби, я увлекаюсь учебой, потому что\n"
               "нам много задают  и материал не всегда легко дается.\n";

    story += "Мои учителя говорят, что я ";
    if (sex == "мужской") {
        story += "прилежный ученик с неплохими задатками.\n";
    } else if (sex == "женский") {
        story += "прилежная ученица с неплохими задатками.\n";
    } else {
        story += "отвественный и сообразительный ребенок.\n";
    }

    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << income;
    string strIncome = stream.str();

    story += "У меня пока нет своего постоянного дохода,\n"
             "но родители с моего рождения откладывают каждый\n"
             "месяц по " + strIncome + " рублей на мой счет.\n"
             "А еще после поступления в школу дают немного\n"
             "карманных денег. Всегда по-разному, например в этом\n"
             "месяце мне дали " + std::to_string(pocketMoney) + ".\n";
    return story;
}
