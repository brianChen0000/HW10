//
//  main.cpp
//  homework10
//
//  Created by Mac on 2019/3/29.
//  Copyright © 2019年 Mac. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    char userinput;
    cout<<"請輸入要轉換的字元"<<endl;
    cin>>userinput;
    if((userinput>='A')&&(userinput<='Z')){
        userinput+=32;//利用ASCII  加上32變成小寫
        cout<<userinput;
    }else if((userinput>='a')&&(userinput<='z')){
        userinput-=32;//利用ASCII  加上32變成大寫
        cout<<userinput;
    }else{
        cout<<userinput;
    }
}
