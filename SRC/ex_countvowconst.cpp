#include<iostream>

using namespace std;

void countVowConst()
{
    cout<<__FUNCTION__<<endl;

    string str("Adityaa");
    int v = 0, c= 0;
    for (int var = 0; var < str.length(); ++var)
    {
        if((str[var] != ' ') && isalpha(str[var]) )
        {
            switch ((char)toupper(str[var]))
            {
            case 'A':
            case 'I':
            case 'E':
            case 'O':
            case 'U':
            {
                v++;
                break;
            }
            default:c++;
                break;
            }
        }
    }
    cout <<"vowels: " << v <<" consonant: "<<c<<endl;
}
