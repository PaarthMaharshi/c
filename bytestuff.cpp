#include <iostream>
#include <string>
using namespace std;

int main()
{
    string data, stuffedData = "";
    char flag, escape;

    cout << "Enter data: ";
    getline(cin, data);

    cout << "Enter flag character: ";
    cin >> flag;

    cout << "Enter escape character: ";
    cin >> escape;

    if (flag == escape)
    {
        cout << "Error: flag and escape characters must be different." << endl;
        return 1;
    }

    // Add flag at the beginning of the frame
    stuffedData += flag;

    // Process every character in the input data
    for (char ch : data)
    {
        // Insert escape character before flag or escape character
        if (ch == flag || ch == escape)
        {
            stuffedData += escape;
        }

        stuffedData += ch;
    }

    // Add flag at the end of the frame
    stuffedData += flag;

    cout << "Input Data   : " << data << endl;
    cout << "Stuffed Data : " << stuffedData << endl;

    return 0;
}