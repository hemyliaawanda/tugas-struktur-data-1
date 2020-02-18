#include <iostream>

using namespace std;

int main (int argc,char*argv[])
{
    int matA[2][2]={4,8,2,10};
    int j,k=5;
    cout << "Matriks A" << endl;
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            cout << matA[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Hasil perkalian Matriks A dan eksponen 5" << endl;
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            cout << pow (matA[i][j]),k=5 << " ";
        }
    cout << endl;
    }
   return 0;
}

