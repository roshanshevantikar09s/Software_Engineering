#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("my_fav_songs.txt");

    string song;

    cout << "Favorite Songs:\n";

    while(getline(file, song))
    {
        cout << song << endl;
    }

    file.close();

    return 0;
}  
