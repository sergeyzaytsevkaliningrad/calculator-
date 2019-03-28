//
//  main.cpp
//  курсовая
//
//  Created by Сергей Зайцев on 23/03/2019.
//  Copyright © 2019 Сергей Зайцев. All rights reserved.
//

#include <iostream>

using namespace std;


int perevod(int dighit){
    int i;
    string s;
    bool boolean;
    
    int b = dighit % 2;
    if (dighit = 0){
        dighit = 12;
    }
    else if(dighit < 6){
        dighit = dighit++;
    }
    dighit = dighit * 2;
    
    for (i>0; i<4; i++) {
        if ( b=1) {
            s = '1' + s;
        }
        else {
                s = '0' + s;
            }
        }
    dighit = dighit / 2;
    boolean = true;
    for (i>1; i<5; i++) {
        if (s[i] = '1') {
            boolean = false;
            if (boolean = false) {
                s[5] = '1';
                
            }
        }
    }
    return s[i];
}


int main() {
    int a;
    cout << "inter your number"<< endl;
    scanf("%d",&a);
    perevod(a);
    
    int b;
    cout << "inter your sign\n";
    cout << "1=-\n2=+\n3=*\n4=/\n";
    cin  >> b;
    perevod(b);
    
    int c ;
    cout << "inter your second number\n";
    scanf("%d",&c);
   perevod(c);
    
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
