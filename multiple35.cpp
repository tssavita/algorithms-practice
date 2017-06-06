#include<iostream>

using namespace std; 

int main(int argc, char ** argv) {
    
    for (int i = 1; i <= 100; i++) {
        bool div_by_3 = ((i % 3) == 0)? true : false;
        bool div_by_5 = ((i % 5) == 0)? true : false;

        if (div_by_3 == div_by_5 && div_by_3)
            cout << "CracklePop" << endl;
        else if (div_by_3) 
            cout << "Crackle" << endl;
        else if (div_by_5)
            cout << "Pop" << endl;
        else 
            cout << i << endl;
    }

}
