//UN PROGRAMA QUE PIDA AL USUARIO LOS DATOS 
// DE DOS MATRICES DE 3X3, Y CALCULE Y MUESTRE SU PRODUCTO.


#include <iostream>
using namespace std;

int main()
{
    int matriz_1[3][3],k;
    int matriz_2[3][3];
    int matriz_resultado[3][3];
    int cont = 0;

    /*matriz_1[0][0] = 6;
    matriz_1[0][1] = 7;
    matriz_1[0][2] = 8;
    
    matriz_1[1][0] = 9;
    matriz_1[1][1] = 3;
    matriz_1[1][2] = 4;
    
    matriz_1[2][0] = 8;
    matriz_1[2][1] = 5;
    matriz_1[2][2] = 6;
    
    // m2
    matriz_2[0][0] = 2;
    matriz_2[0][1] = 3;
    matriz_2[0][2] = 4;
    
    matriz_2[1][0] = 5;
    matriz_2[1][1] = 6;
    matriz_2[1][2] = 8;
    
    matriz_2[2][0] = 6;
    matriz_2[2][1] = 7;
    matriz_2[2][2] = 5;
    */

    cout<<"\n\nMATRIZ 1 \n";
    cout<<"=============== \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            
            cout<<"Digite valor en la pos";
            cout<<"["<<i<<"]"<<"["<<j<<"] = \n";
            cin>>matriz_1[i][j];
        }
    }

    cout<<"\n\nMATRIZ 2 \n";
        cout<<"=============== \n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                
                cout<<"Digite valor en la pos";
                cout<<"["<<i<<"]"<<"["<<j<<"] = \n";
                cin>>matriz_2[i][j];
            }
        }
    
    // Hacer PRODUCTO

        cout<<"\n\nResultado \n";
        cout<<"=============== \n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                

                // Llenar resultado


                int sum =0;
                //cout<<"__________________________\n";
                for (int m = 0; m < 3; m++)
                {
                    // cout<<"["<<i<<"]"<<"["<<m<<"] "<< matriz_1[i][m]<<"\n";
                    // cout<<"["<<m<<"]"<<"["<<j<<"] "<< matriz_2[m][j]<<"\n";
                    //cout<< matriz_1[i][m]<<"*"<< matriz_2[m][j]<<"="<< matriz_1[i][m]*matriz_2[m][j]<<"\n";
                    sum += matriz_1[i][m]*matriz_2[m][j];
                }
                matriz_resultado[i][j]= sum;
                cout<< matriz_resultado[i][j]<<" \t";
                //cout<<"suma: "<<sum;
                //cout<<"__________________________\n";
                
             
            }
            
            cout<< "\n";
        }

    cout<<"\n\nEND PROGRAM";
    cin >> k;
    return 0;
}

