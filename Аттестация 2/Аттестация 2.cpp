#include <iostream>
#include <fstream>
using namespace std;



        int main()
    {
            string path = "file.txt";
                const int N = 5;
            int mass[N] = { 0 };
            ifstream file;
            file.open(path);
            if (!file)
                return 1;

            for (int i = 0; i < N; i++)
            {
                file >> mass[i];
                cout << mass[i];

            }
            
        file.close();
    return 0;
      
       
        }