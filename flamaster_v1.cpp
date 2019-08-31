#include <iostream>

using namespace std;

int main()
{
    int C;
    cin>>C;

    for(int i=0; i<C; i++)
    {
        string wyraz;
        //ABCDDEEE
        //AABBBBBB
        //01234567
        int licznik=1;
        cin>>wyraz;

        //3 przypadki: 1 literka, 2 literki, 3 i więcej literek
        for(int j=0; j<wyraz.length(); j++)
        {
            if(wyraz[j]==wyraz[j+1])
            {
                licznik++;
            }
            else if(licznik<2)
            {
                cout<<wyraz[j];
                licznik=1;
            }
            else if(licznik==2)
            {
                cout<<wyraz[j-1]<<wyraz[j];
                licznik=1;
            }
            else
            {
                cout<<wyraz[j]<<licznik;
                licznik=1; 
            }
        }
        cout<<endl;
    }

    return 0;
}
