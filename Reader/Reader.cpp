#include "Reader.h"

namespace ZKN
{
    Reader::Reader(string lastname, string name, int age, Card card)
    {
        this->lastname = lastname;
        this->name = name;
        this->age = age;
        for (int i = 0; i < this->card.getCount(); i++){
            this->card[i] = card[i];
        }
    }

    Reader::Reader() {}

    void Reader::print()
    {
        cout << "\nName: " << name << '\t'
                  << ";Lastname: " << lastname << '\t'
                  << ";Age: " << age << endl;
        card.print();
    }

    Reader Reader::operator=(Reader r1)
    {
        this->lastname = r1.lastname;
        this->name = r1.name;
        this->age = r1.age;
        this->login = r1.login;
        this->password = r1.password;

        for(int i = 0; i < this->card.getCount(); i++){
            this->card[i] = r1.card[i];
        }

        return *this;
    }
    Card Reader::getCard() const { return card; }
}