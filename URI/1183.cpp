#include<iostream>
#include <stdio.h>

using namespace std;

int main(){

    int i, j, cont = 0;
    double me = 0, val, s = 0, m[12][12];
    char op;    

    cin >> op;
    
    for(i = 0; i < 12; i++){ //linha
        for(j = 0; j < 12; j++){    //coluna
            cin >> val;
            m[i][j] = val;
        }
    }
    
    /*for(i = 0; i < 12; i++){ //linha
        for(j = 0; j < 12; j++){    //coluna
            cout << " " << m[i][j];
        }
        cout << endl;
    }*/
    if(op == 'S'){
        for(i = 0; i < 12; i++){ //linha
            for(j = 0; j < 12; j++){    //coluna
                if(j > i){
                   s+=m[i][j];
                   cout << "soma da linha " << i << " coluna " << j << ":" << s << endl;  
                }             
            }
        }
        printf("%.1f\n",s);
    }else{
        for(i = 0; i < 12; i++){ //linha
            for(j = 0; j < 12; j++){    //coluna
                if(j > i){
                   me+=m[i][j]; 
                   cont++;
                }               
            }
        }
        printf("%.1f\n", me/cont);
    }

    return 0;
}