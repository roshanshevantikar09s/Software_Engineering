#include <iostream>
#include <string>
using namespace std;

class Playlist
{
public:
    string name;
    string createdOn;
    bool isPublic;

    Playlist(string n, string date, bool p)
    {
        name = n;
        createdOn = date;
        isPublic = p;
    }

    void display()
    {
        cout << "Playlist Name : " << name << endl;
        cout << "Created On    : " << createdOn << endl;
        cout << "Is Public     : ";

        if(isPublic)
            cout << "True";
        else
            cout << "False";

        cout << endl;
    }
};

int main()
{
    Playlist p1("My Playlist", "23-07-2026", true);

    p1.display();

    return 0;
} 
