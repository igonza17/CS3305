//
//  main.cpp
//  ex_2
//
//  Created by Ivan Gonzalez on 1/7/20.
//  Copyright © 2020 Ivan Gonzalez. All rights reserved.
//


#include <iostream>
using namespace std;
int main(){
    int n;
    int i = 0;
    int sum = 0;
    
    cout << "Please enter a positive integer \n";
    cin >> n;
    while (i<=n){
        sum +=i;
        i++;
    }
    cout << "Sum "<<sum <<endl;
    return 0;
}
