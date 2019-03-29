//
//  main.cpp
//  1.2 курсовая
//
//  Created by Сергей Зайцев on 29/03/2019.
//  Copyright © 2019 Сергей Зайцев. All rights reserved.
//

#include <iostream>

using namespace std;

int perevod(int dighit){
    int i;
    char s[5];
    bool boolean;
    
    if (dighit == 0) dighit = 12;
    else
        if(dighit > 6) dighit++;
    
    dighit *= 2;
    
    for (i=0; i<5; ++i)
    {
        if (dighit % 2) s[i] = '1';
        else s[i] = '0';
        
        dighit /= 2;
    }
    
    boolean = true;
    
    for (i=1; i<6; i++)
        if (s[i] == '1') boolean = false;
    
    if (boolean == false) s[4] = '1';
    cout << s <<endl ;
    return dighit;
}

int main() {
    int a,b,c,d,e,r ;
    
    cout << " you will have to inter your first number step by step\n ";
    cout << "*0000\n";
    cin >> a;
    assert(a<10);
    perevod(a);
    
    cout <<"0*000\n";
    cin >> b;
    assert(b<10);
    perevod(b);
    
    cout << "00*00\n";
    cin >> c;
    assert(c<10);
    perevod(c);
    
    cout << "000*0\n";
    cin >> d ;
    assert(d<10);
    perevod(d);
    
    cout <<"0000*\n";
    cin >> e;
    assert(e<10);
    perevod(e);
    
    r = a*10000 + b*1000 + c*100 + d*10 + e;
    
    cout << a*10000 + b*1000 + c*100 + d*10 + e<< endl;
    cout << perevod(a) + perevod(b) + perevod(c) + perevod(d) + perevod(e);
    
    
    int z,x,l,v,m,n,p;
    
    cout << " you will have to inter your second number step by step\n ";
    cout << "*0000\n";
    cin >> z;
    assert(z<10);
    perevod(z);
    
    cout <<"0*000\n";
    cin >> x;
    assert(x<10);
    perevod(x);
    
    cout << "00*00\n";
    cin >> l;
    assert(l<10);
    perevod(l);
    
    cout << "000*0\n";
    cin >> v ;
    assert(v<10);
    perevod(v);
    
    cout <<"0000*\n";
    cin >> m;
    assert(m<10);
    perevod(m);
    
    p = z*10000 + x*1000 + l*100 + v*10 + l;
    
    cout << z*10000 + x*1000 + l*100 + v*10 + l<< endl;
    cout << perevod(z) + perevod(x) + perevod(l) + perevod(v) + perevod(m);
    
    int g;
    
    cout <<"now inter number of sign\n";
    cout << "1=-\n2=+\n3=*\n4=/\n";
    cin >> g;
    
    if ( g == isalpha(g)){
        cout<<"wtf";
    }
    switch (g) {
        case 1:
            n = r - p;
            perevod(n);
            return n;
            break;
            
        case 2:
            n = r + p;
            perevod(n);
            return n;
            break;
        case 3:
            n = r * p;
            perevod(n);
            return n;
            break;
        case 4:
            n=r/p;
            perevod(n);
            return n;
            break;
    }
    
    
    
}

