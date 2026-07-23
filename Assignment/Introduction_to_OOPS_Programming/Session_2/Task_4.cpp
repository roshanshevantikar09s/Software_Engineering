#include <iostream>
using namespace std;

class Playlist
{
public:
    string name;
    string createdOn;
    bool isPublic;

    string songs[10];
    int count;

    Playlist(string n, string d, bool p)
    {
        name = n;
        createdOn = d;
        isPublic = p;
        count = 0;
    }

    void addSong(string songTitle)
    {
        songs[count] = songTitle;
        count++;
    }

    void showSongs()
    {
        cout << "\nSongs List\n";

        for(int i = 0; i < count; i++)
        {
            cout << i + 1 << ". " << songs[i] << endl;
        }
    }
};

int main()
{
    Playlist p1("My Playlist", "23-07-2026", true);

    p1.addSong("Believer");
    p1.addSong("Shape of You");
    p1.addSong("Perfect");

    p1.showSongs();

    return 0;
} 
