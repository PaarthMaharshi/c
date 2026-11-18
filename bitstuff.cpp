#include <iostream>
#include <string>
using namespace std;

int main()
{
    string data, stuffedData = "";
    int onesCount = 0;

    cout << "Enter bit string: ";
    cin >> data;

    if (data.find_first_not_of("01") != string::npos)
    {
        cout << "Error: bit string must contain only 0s and 1s." << endl;
        return 1;
    }

    for (char bit : data)
    {
        stuffedData += bit;

        if (bit == '1')
        {
            onesCount++;

            if (onesCount == 5)
            {
                stuffedData += '0';
                onesCount = 0;
            }
        }
        else
        {
            onesCount = 0;
        }
    }

    cout << "Original Data : " << data << endl;
    cout << "Stuffed Data  : " << stuffedData << endl;

    return 0;
}