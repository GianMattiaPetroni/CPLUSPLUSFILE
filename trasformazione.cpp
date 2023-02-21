#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ofstream fileOutput("output.txt");
    if (fileOutput.is_open())
    {
        cout << "il file è stato aperto correttamente" << endl;
    }
    else
    {
        cout << "il file non è stato aperto correttamente" << endl;
    }
    ifstream fileInput("maggio.txt");
    if (fileInput.is_open())
    {
        cout << "il file è stato aperto correttamente" << endl;
    }
    else
    {
        cout << "il file non è stato aperto correttamente" << endl;
    }

    string riga;
    int i = 1;

    while (getline(fileInput, riga))
    {
        if (i % 7 == 0)
        {
            fileOutput << endl;
        }
        else if (riga == "")
        {
            fileOutput << endl;
        }
        else if (i < 10)
        {
            fileOutput << i << "   - " << riga << endl;
        }
        else if (i < 100)
        {
            fileOutput << i << "  - " << riga << endl;
        }
        else
        {
            fileOutput << i << " - " << riga << endl;
        }
        i++;
    }
    fileOutput.close();
    fileInput.close();
}