#include <iostream>
#include <string>
using namespace std;

class Playlist
{
public:
    string name;
    string createdOn;
    bool isPublic;

    Playlist(string n, string d, bool p)
    {
        name = n;
        createdOn = d;
        isPublic = p;
    }

    void togglePublic()
    {
        isPublic = !isPublic;
    }

    void display()
    {
        cout << "Playlist : " << name << endl;
        cout << "Public   : ";

        if(isPublic)
            cout << "True";
        else
            cout << "False";

        cout << endl;
    }
};

int main()
{
    Playlist p1("Songs", "23-07-2026", true);

    p1.display();

    p1.togglePublic();

    p1.display();

    p1.togglePublic();

    p1.display();

    return 0;
} 
