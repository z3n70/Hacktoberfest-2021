#include<iostream>
using namespace std;

int main()
{
    string casino;
    cin >> casino;
    int lng = casino.length();
    for (int a = 0;a < lng; a++)
    {
        if (casino[a] == 'T')
        {
            for (int b = a;b < lng; b++) 
            {
                if (casino[b] == '$') 
                {
                    cout << "ALARM";
                    b = lng;
                    a = lng;
                }
                else if(casino[b] == 'G')
                {
                    cout << "quiet";
                    b = lng;
                    a = lng;
                }
            }
        }
        else if (casino[a] == '$')
        {
            for (int c = a;c < lng; c++)
            {
                if (casino[c] == 'T')
                {
                    cout << "ALARM";
                    c = lng;
                    a = lng;
                }
                else if (casino[c] == 'G')
                {
                    cout << "quiet";
                    c = lng;
                    a = lng;
                }
            }
        }
    }

    return 0;
}
