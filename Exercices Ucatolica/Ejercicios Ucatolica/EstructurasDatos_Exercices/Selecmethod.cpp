
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int myints[] = {16, 2, 77, 29, 32, 5, 3, 14};
int length = sizeof(myints) / sizeof(myints[0]);

void imprmir()
{
}

int main()
{
    int min;
    for (int i = 0; i < length -1; i++)
    {
        min = i;
        for (int j = i+1; j < length; j++)
        {
            if (myints[j] < myints[min])
            {
                min = j;
            }
            
        }
        int temp = myints[i];
        myints[i] = myints[min];
        myints[min]= temp;
        
        cout << "->" << myints[i] << "\n";
    }


    getch();
    return 0;
}