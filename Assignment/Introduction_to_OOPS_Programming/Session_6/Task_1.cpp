#include <iostream>
using namespace std;

class Song
{
private:
    string title;
    string artist;

public:
    void setTitle(string t)
    {
        title = t;
    }

    void setArtist(string a)
    {
        artist = a;
    }

    string getTitle()
    {
        return title;
    }

    string getArtist()
    {
        return artist;
    }
};

int main()
{
    Song s;

    s.setTitle("Believer");
    s.setArtist("Imagine Dragons");

    cout << "Original Title : " << s.getTitle() << endl;

    s.setTitle("Thunder");

    cout << "Updated Title : " << s.getTitle() << endl;
    cout << "Artist : " << s.getArtist() << endl;

    return 0;
} 
