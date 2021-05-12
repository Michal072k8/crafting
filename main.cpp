#include <iostream>
#include <time.h>
#include <unistd.h>

using namespace std;

int drewno, deski, patyki, kamien, drewniany_kilof;

int main()
{
        cout << "Witaj co sekunde bedziesz dostawac jedno drewno"<< endl;

        sleep(5);

    for(drewno=0; drewno<5;)
    {
        drewno = drewno + 1;

        cout << "twoje drewno " << drewno << endl;

        sleep(1);

        system("clear");
    }

    cout << "twoje drewno " << drewno << endl;
    cout << "Okej tyle na razie wysrtarczy teraz trzeba zamienic drewno na deski";

    sleep(5);

    system("clear");

    for(deski=0; deski<10;)
    {
         drewno = drewno - 1;
         deski = deski + 2;

        cout << "twoje drewno " << drewno << endl;
        cout << "twoje deski " << deski << endl;

        cout << "przerabianie";

        sleep(1);

        system("clear");
    }

    cout << "jesli mamy juz wystarczajaco desek to potrzebujemy jeszcze patykow";
    sleep(5);

    system("clear");

    for(deski=10; deski>8;)
    {
        deski = deski - 2;
         patyki = patyki + 4;

        cout << "twoje deski " << deski << endl;
        cout << "twoje patyki " << patyki << endl;

        cout << "przerabianie";

        sleep(4);

        system("clear");
    }
    cout << "twoje deski " << deski << endl;
    cout << "twoje patyki " << patyki << endl;

    cout << "jesli mamy juz deski i patyki to zrobmy drewniany kilof" << endl << endl;

    cout << "trwa robienie";
    patyki = patyki -1;
    deski = deski -3;

    sleep(5);

    system("clear");

    cout << "ok jesli mamy juz kilof to chyba trzeba zaczac kopac";

    sleep(5);

    system("clear");

    for(drewniany_kilof=15 ;drewniany_kilof>0; drewniany_kilof=drewniany_kilof-1)
    {
        kamien = kamien + 1;

        cout << "twoj kamien " << kamien << endl;
        cout << "wutrzymalosci twojego kilofu " << drewniany_kilof << endl;

        sleep(1);

        system("clear");
    }

    cout << "jesli mamy juz troche kamienia to zrobmy kamienny kilof";

    sleep(3);

    cout << endl << endl << endl << "trwa robienie";

    sleep(10);

    system("clear");

    return 0;
}
