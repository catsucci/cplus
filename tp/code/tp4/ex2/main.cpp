#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

struct Date
{
    int jour;
    std::string mois;
    int annee;
};

void demandeDate (Date &);
void afficheDate (const Date &);
int numeroMois (const std::string &);
int compareDate (const Date &, const Date &);

int
main (int argc, char *argv[])
{
    Date date;
    demandeDate (date);
    afficheDate (date);
    std::string mois;
    std::cout << "Entrez le mois pour avoir son numero: ";
    std::cin >> mois;
    std::cout << mois << " number is " << numeroMois (mois) << std::endl;
    Date secondDate;
    demandeDate (secondDate);
    afficheDate (secondDate);
    std::cout << "comparing Dates: " << compareDate (date, secondDate)
              << std::endl;
    return 0;
}

void
demandeDate (Date &date_)
{
    std::cout << "Jour: ";
    std::cin >> date_.jour;
    do
        {
            std::cout << "Mois: ";
            std::cin >> date_.mois;
        }
    while (numeroMois (date_.mois) == -1);
    std::cout << "Annee: ";
    std::cin >> date_.annee;
}

void
afficheDate (const Date &date_)
{
    std::cout << "Date du jour: " << date_.jour << "-" << date_.mois << "-"
              << date_.annee << std::endl;
}

int
numeroMois (const std::string &mois_)
{
    std::string mois = mois_;
    transform (mois.begin (), mois.end (), mois.begin (), ::toupper);
    if ("JANUARY" == mois)
        {
            return 1;
        }
    else if ("FEBRUARY" == mois)
        {
            return 2;
        }
    else if ("MARCH" == mois)
        {
            return 3;
        }
    else if ("APRIL" == mois)
        {
            return 4;
        }
    else if ("MAY" == mois)
        {
            return 5;
        }
    else if ("JUNE" == mois)
        {
            return 6;
        }
    else if ("JULY" == mois)
        {
            return 7;
        }
    else if ("AUGUST" == mois)
        {
            return 8;
        }
    else if ("SEPTEMBER" == mois)
        {
            return 9;
        }
    else if ("OCTOBER" == mois)
        {
            return 10;
        }
    else if ("NOVEMBER" == mois)
        {
            return 11;
        }
    else if ("DECEMBER" == mois)
        {
            return 12;
        }
    return -1;
}

int
compareDate (const Date &date1_, const Date &date2_)
{
    if ((date1_.annee < date2_.annee)
        || (numeroMois (date1_.mois) < numeroMois (date2_.mois))
        || (date1_.jour < date2_.jour))
        {
            return -1;
        }
    else if ((date1_.annee > date2_.annee)
             || (numeroMois (date1_.mois) > numeroMois (date2_.mois))
             || (date1_.jour > date2_.jour))
        {
            return 1;
        }
    return 0;
}
