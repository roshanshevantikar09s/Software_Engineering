#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Content
{
public:
    string title;
    string platform;
    int views;
    string status;

    void display()
    {
        cout << "Title    : " << title << endl;
        cout << "Platform : " << platform << endl;
        cout << "Views    : " << views << endl;
        cout << "Status   : " << status << endl;
    }
};

Content content[100];
int total = 0;

// Load data from file
void loadFile()
{
    total = 0;

    ifstream file("content_list.txt");

    while(file >> content[total].title
               >> content[total].platform
               >> content[total].views
               >> content[total].status)
    {
        total++;
    }

    file.close();
}

// Save all data to file
void saveFile()
{
    ofstream file("content_list.txt");

    for(int i = 0; i < total; i++)
    {
        file << content[i].title << " "
             << content[i].platform << " "
             << content[i].views << " "
             << content[i].status << endl;
    }

    file.close();
}

// Add Content
void addContent()
{
    loadFile();

    cout << "Enter Title : ";
    cin >> content[total].title;

    cout << "Enter Platform : ";
    cin >> content[total].platform;

    cout << "Enter Views : ";
    cin >> content[total].views;

    cout << "Enter Status : ";
    cin >> content[total].status;

    total++;

    saveFile();

    cout << "\nContent Added Successfully.\n";
}

// Show Content
void showContent()
{
    loadFile();

    cout << "\n------ Content List ------\n";

    for(int i = 0; i < total; i++)
    {
        cout << "\nContent No. " << i + 1 << endl;
        content[i].display();
    }
}

// Update Status
void updateStatus()
{
    loadFile();

    showContent();

    int n;

    cout << "\nEnter Content Number : ";
    cin >> n;

    if(n >= 1 && n <= total)
    {
        cout << "Enter New Status : ";
        cin >> content[n - 1].status;

        saveFile();

        cout << "Status Updated Successfully.\n";
    }
    else
    {
        cout << "Invalid Choice.\n";
    }
}

// Delete Content
void deleteContent()
{
    loadFile();

    showContent();

    int n;

    cout << "\nEnter Content Number to Delete : ";
    cin >> n;

    if(n >= 1 && n <= total)
    {
        for(int i = n - 1; i < total - 1; i++)
        {
            content[i] = content[i + 1];
        }

        total--;

        saveFile();

        cout << "\nContent Deleted Successfully.\n";

        showContent();
    }
    else
    {
        cout << "Invalid Choice.\n";
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== CONTENT MANAGER =====\n";
        cout << "1. Add Content\n";
        cout << "2. Show Content\n";
        cout << "3. Update Status\n";
        cout << "4. Delete Content\n";
        cout << "5. Exit\n";

        cout << "Enter Choice : ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            addContent();
            break;

        case 2:
            showContent();
            break;

        case 3:
            updateStatus();
            break;

        case 4:
            deleteContent();
            break;

        case 5:
            cout << "Thank You!";
            break;

        default:
            cout << "Invalid Choice";
        }

    } while(choice != 5);

    return 0;
} 
