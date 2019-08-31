//Moje rozwiazanie, ale troche pogmatwane i nie dziala na spoju
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int C;
    cin>>C;
    for(int i=0; i<C; i++)
    {
        string wyraz;
        int licznik=0;
        int index=0;

        cin>>wyraz;

        int dlugosc=wyraz.length();

        // AAAAAAAAAA B  B  B  B  B  B  B  B  B  B  B  B  B  B  B  B
        // 0123456789 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25

        //AABBBCCCAA
        //0123456789
        while(index<dlugosc)
        {
            if(wyraz[index]==wyraz[index+1] && wyraz[index+1]==wyraz[index+2] && index<dlugosc-2)
            {
                while(wyraz[index]==wyraz[index+1] && wyraz[index+1]==wyraz[index+2] && index<dlugosc-2)
                {
                    licznik=3;
                    while(wyraz[index+3]==wyraz[index+2] && index<dlugosc-3)
                    {
                        licznik++;
                        index++;
                    }
                    cout<<wyraz[index+2]<<licznik;
                    index++;
                }
            }

            else
            {
                cout<<wyraz[index];
            }

            if(wyraz[index-1]==wyraz[index+1])
                index++;
            index++;
        }
        cout<<endl;
    }

    return 0;
}
