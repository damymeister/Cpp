#include <iostream>
#include <fstream>
using namespace std;
int main()
{
         ofstream zapis("zapesss.txt");
    char *tab=new char[4];
    for(int i=97; i <123; i++)
    {
        tab[0]=(char) i;
        for(int j =97; j<123;j++)
        {
     tab[1]=(char) j;
            for(int z=97; z<123;z++)
            {
                tab[2]=(char)z;

                    for(int x=97;x<123;x++)
                    {
                        tab[3]=(char) x;
                          zapis<<tab[0]<<tab[1]<<tab[2]<<tab[3]<<endl;
                    }
            }
        }
    }
zapis.close();
    return 0;

    }
