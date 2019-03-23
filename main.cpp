//
//  main.cpp
//  курсовая
//
//  Created by Сергей Зайцев on 23/03/2019.
//  Copyright © 2019 Сергей Зайцев. All rights reserved.
//

#include <iostream>

using namespace std;


int main() {
    int a;
    cout << "inter your number"<< endl;
    scanf("%d",&a);
    
    int b;
    cout << "inter your sign\n";
    cout << "1=-\n2=+\n3=*\n4=/\n";
    cin  >> b;
    
    int c ;
    cout << "inter your second number\n";
    scanf("%d",&c);
    
    if ( b == isalpha(b)){
        cout<<"wtf";
    }
    switch (b) {
        case 1:
           return a-c;
            break;
            
       case 2:
            return a+c;
            break;
        case 3:
            return a*c;
            break;
        case 4:
            return a/c;
            break;
    }
    
    
    
    
    return 0;
}
