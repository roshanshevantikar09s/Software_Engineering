#include <iostream>
#include <fstream>
using namespace std;

class Playlist
{
public:
    string name;

    Playlist()
    {
        name = "My Favourites";
        cout << "Playlist Created!" << endl;
    }

    ~Playlist()
    {
        ofstream file("autosave.txt");

        if(file)
        {
            file << "Playlist Name : " << name << endl;
            file.close();
            cout << "Playlist Auto Saved to autosave.txt" << endl;
        }
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
