#include <iostream>
#include <string>
using namespace std;
string hideString(string s,int start,int until)
{
    string hs=s;
    int i;
    for (i = 0;i<s.size();i++)
    {
        if (i >= start-1 && i <= until-1)
        {
            if (s[i] != ' ')
            {
                 hs[i] = 'x';
            }
        }
    }
    return hs;
}




int main()
{
    string s;
    int start;
    int until;
    cout << "Text : ";
    getline(cin,s);
    cout << "Start : ";
    cin >> start;
    cout << "Until : ";
    cin >> until;
     cout << hideString(s,start,until);

    return 0;
}
