//
//  main.cpp
//  ex3
//
//  Created by Ivan Gonzalez on 1/7/20.
//  Copyright © 2020 Ivan Gonzalez. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int num;
    int num2;
    cout << "Enter any number\n";
    cin >> num;
    for(int i = num; num>= 0; num-=2){
        num2 = num;
        for(int j=num2; num2>=0; num2 -=2){
            cout << num2<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
