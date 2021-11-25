#include <iostream>
#include <fstream>
using namespace std;

void Fill(int mass[], const int N)
{
    string path = "file.txt";
    ifstream file;
    file.open(path);

    for (int i = 0; i < N; i++)
    {
        file >> mass[i];
    }
}
void print(int mass[], const int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << mass[ i ] << " ";
    }
}

    void main()
    {
        const int N=5;
        int mass[N];
        Fill(mass, N);
        print(mass, N);
    } 