#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tc;
    string a,b;

    cin >> tc;

    while (tc--)
    {
        cin >> a >> b;

        if (a == "Dhaka")
        {
            if (b == "Chittagong")
                cout << 200 << endl;
            else if (b == "Rajshahi")
                cout << 300 << endl;
            else if (b == "Kathmandu")
                cout << 3200 << endl;
            else
                cout << 8200 << endl;
        }
        else if (a == "Chittagong")
        {
            if (b == "Dhaka")
                cout << 200 << endl;
            else if (b == "Rajshahi")
                cout << 500 << endl;
            else if (b == "Kathmandu")
                cout << 3000 << endl;
            else
                cout << 8000 << endl;
        }
        else if (a == "Rajshahi")
        {
            if (b == "Dhaka")
                cout << 300 << endl;
            else if (b == "Chittagong")
                cout << 500 << endl;
            else if (b == "Kathmandu")
                cout << 3500 << endl;
            else
                cout << 8500 << endl;
        }
        else if (a == "Kathmandu")
        {
            if (b == "Dhaka")
                cout << 3200 << endl;
            else if (b == "Chittagong")
                cout << 3000 << endl;
            else if (b == "Rajshahi")
                cout << 3500 << endl;
            else
                cout << 11000 << endl;
        }
        else
        {
            if (b == "Dhaka")
                cout << 8200 << endl;
            else if (b == "Chittagong")
                cout << 8000 << endl;
            else if (b == "Rajshahi")
                cout << 8500 << endl;
            else
                cout << 11000 << endl;
        }
    }
}
