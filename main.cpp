//
//  main.cpp
//  Heart for Vlada
//
//  Created by Danil D.(20.04.2004) on 12.02.2023.
//
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string s = "For Vlada<3";
    for( float y = 1.3 ; y >= -1.1 ; y -= 0.06 ){
        int index = 0;
        for( float x = -1.2 ; x <= 1.2 ; x += 0.025 )
            if( pow((x*x+y*y-1.0),3) - x*x*y*y*y <= 0.0 )
                cout<<s[(index++)%s.size()];
            else
                cout<<' ';
        cout<<endl;
    }

    return 0;
}
//Finished by Danil D.(20.04.2004) on 13.02.2023