#include <iostream>
using namespace std;

class Playlist
{
public:
    string name;

    // Default Constructor
    Playlist()
    {
        name = "My Favourites";
        cout << "Welcome! Playlist Created Successfully." << endl;
    }

    void display()
    {
        cout << "Playlist Name : " << name << endl;
    }
};

int main()
{
    Playlist p1;
    p1.display();

    return 0;
} 
