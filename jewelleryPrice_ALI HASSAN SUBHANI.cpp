#include <iostream>
#include<string>
using namespace std;

int material(int num){
    int next;
    if (num == 1){
        cout<<"Do you want to buy gold jewellery or silver jewellery."<<endl;
    }
    if(num == 2){
        cout<<"Do you want to sell gold jewellery or silver jewellery."<<endl;
    }
    cout<<"1) GOLD"<<endl;
    cout<<"2)SILVER"<<endl;
    cout<<"please enter the corresponding integer value of your answer."<<endl;
    cin>>next;
    if (next != 1 && next != 2){
        do{
            cout<<"your integer value is incorrect"<<endl;
            cout<<"please enter your value again but carefully this time."<<endl;
            cin>>next;
        }
        while (next != 1 && next != 2);
    }
    return next;
}

double weight(int num1, int num2){
    double next;
    if (num1 == 1 && num2 == 1){
        cout<<"Please enter the estimated weight of your gold jewellery that you want in grams."<<endl;
    }
    else if(num1 == 1 && num2 ==2){
        cout<<"Please enter the estimated weight of your silver jewellery that you want in grams."<<endl;
    }
    else if(num1 == 2 && num2 == 1){
        cout<<"Please enter the exact weight of your gold jewellery that you want to sell in grams."<<endl;
    }
    else if(num1 == 2 && num2 == 2){
        cout<<"Please enter the exact weight of your silver jewellery that you want to sell in grams."<<endl;
    }
    cout<<"Remember to enter value in grams."<<endl;
    cin>>next;
    
    return next;
}

int type(int num1, int num2){
    int next;
    if (num1 == 1 && num2 == 1){
        cout<<"Please enter the kind of gold you want to buy."<<endl;
    }
    else if(num1 == 1 && num2 ==2){
        cout<<"Please enter the kind of silver you want to buy."<<endl;
    }
    else if(num1 == 2 && num2 == 1){
        cout<<"Please enter the kind of gold you want to sell"<<endl;
    }
    else if(num1 == 2 && num2 == 2){
        cout<<"Please enter the kind of silver you want to sell."<<endl;
    }
    cout<<"1)  24 KARROT (pure)"<<endl;
    cout<<"2)  22 KARROT"<<endl;
    cout<<"3) 18 KARROT"<<endl;
    cout<<"please enter the corresponding integer value of your answer."<<endl;
    cin>>next;
    if (next != 1 && next != 2 && next != 3){
        do{
            cout<<"your integer value is incorrect"<<endl;
            cout<<"please enter your value again but carefully this time."<<endl;
            cin>>next;
        }
        while (next != 1 && next != 2 && next != 3);
    }
    return next;
}

int change(){
    int now;
    cout<<endl;
    cout<<"Do you want to change something from the provided data?"<<endl;
    cout<<"1)  YES"<<endl;
    cout<<"2) NO"<<endl;
    cin>>now;
    if (now != 1 && now != 2){
        do{
            cout<<"your integer value is incorrect"<<endl;
            cout<<"please enter your value again but carefully this time."<<endl;
            cin>>now;
        }
        while (now != 1 && now != 2);
    }
    return now;
}

int rate(int num1, int num2, double num3, int num4){
    double number = 0;
    double gold, silver, karrot1, karrot2;
    gold = 283200.00;
    silver = 3168.00;
    karrot1 = gold / 24;
    karrot2 = silver / 24;
    if (num1 == 1 && num2 == 1){
        if(num4 == 1){
            number = (gold / 11.664) * num3;
        }
        else if(num4 == 2){
            number = ((karrot1 * 22) / 11.664) * num3;
        }
        else if(num4 == 3){
            number = ((karrot1 * 18) / 11.664) * num3;
        }
     cout<<"The estimated price of your jewellery when gold price on todays date and time is "<<gold<<"Rs then your will be: "<<number<<"Rs"<<endl;
    }
else if (num1 == 1 && num2 == 2){
        if(num4 == 1){
            number = (silver / 11.664) * num3;
        }
        else if(num4 == 2){
            number = ((karrot2 * 22) / 11.664) * num3;
        }
        else if(num4 == 3){
            number = ((karrot2 * 18) / 11.664) * num3;
        }
     cout<<"The estimated price of your jewellery when silver price on todays date and time is "<<silver<<"Rs then your will be: "<<number<<"Rs"<<endl;
    }
else if (num1 == 2 && num2 == 1){
        if(num4 == 1){
            number = (gold / 11.664) * num3;
        }
        else if(num4 == 2){
            number = ((karrot1 * 22) / 11.664) * num3;
        }
        else if(num4 == 3){
            number = ((karrot1 * 18) / 11.664) * num3;
        }
     cout<<"The estimated price of your jewellery when silver price on todays date and time is "<<gold<<"Rs then your will be: "<<number<<"Rs but the price that you will get by selling it will be: "<<int(number * 0.70)<<"Rs"<<endl;
    }
else if (num1 == 2 && num2 == 1){
        if(num4 == 1){
            number = (silver / 11.664) * num3;
        }
        else if(num4 == 2){
            number = ((karrot2 * 22) / 11.664) * num3;
        }
        else if(num4 == 3){
            number = ((karrot2 * 18) / 11.664) * num3;
        }
     cout<<"The estimated price of your jewellery when silver price on todays date and time is "<<silver<<"Rs then your will be: "<<number<<"Rs but the price that you will get by selling it will be: "<<int(number * 0.60)<<"Rs"<<endl;
    }
    return number;
}

double stones(){
    int choice0;
    double next = 0;
     int size =1;
     string name[size];
    double reply = 0;
    int num = 0;
    double num0 = 0;
    double diamond = 90000;
    double ruby = 30000;
    double sapphire = 65000;
    int choice;
    do{
    cout<<"There are these options for stones."<<endl;
    cout<<"1) DIAMOND"<<endl;
    cout<<"2) RUBY"<<endl;
    cout<<"3) SAPPHIRE"<<endl;
    cout<<"4) ANY OTHER"<<endl;
    cout<<"please enter the corresponding integer value of your answer."<<endl;
    cin>>choice;
    if (choice != 1 && choice != 2 && choice != 3 && choice != 4){
        do{
            cout<<"your integer value is incorrect"<<endl;
            cout<<"please enter your value again but carefully this time."<<endl;
            cin>>choice;
        }
        while (choice != 1 && choice != 2 && choice != 3 && choice != 4);
    }
    if (choice == 1){
        do{
        if (num < 0){
                cout<<"incorrect!"<<endl;
            }
        cout<<"Please enter the number of diamonds you want to add"<<endl;
        cin>>num;
        }
        while(num < 0);
        reply = diamond * num;
    }
    else if (choice == 2){
        do{
        if (num < 0){
                cout<<"incorrect!"<<endl;
            }
        cout<<"Please enter the number of ruby stones you want to add"<<endl;
        cin>>num;
        }
        while(num < 0);
        reply = ruby * num;
    }
    else if (choice == 3){
        do{
        if (num < 0){
                cout<<"incorrect!"<<endl;
            }
        cout<<"Please enter the number of sapphire stones you want to add"<<endl;
        cin>>num;
        }
        while(num < 0);
        reply = sapphire * num;
    }
    else{
        cout<<"Please enter the stone name."<<endl;
        cin>>name[size-1];
        do{
        if (num0 < 0){
                cout<<"incorrect!"<<endl;
            }
        cout<<"please enter its price."<<endl; 
        cin>>num0;
        }
        while(num0 < 0);
        do{
        if (num < 0){
                cout<<"incorrect!"<<endl;
            }
        cout<<"Please enter the number of "<<name[size-1]<<" stones you want to add"<<endl;
        cin>>num;
        }
        while(num < 0);
        reply = num0 * num;
        size = size + 1;
    }
    next = next + reply;
    cout<<"Do you want to add any other stone?"<<endl;
    cout<<"1) YES"<<endl;
    cout<<"2) NO"<<endl;
    cin>>choice0;
    if (choice0 != 1 && choice0 != 2){
        do{
            cout<<"your integer value is incorrect"<<endl;
            cout<<"please enter your value again but carefully this time."<<endl;
            cin>>choice0;
        }
        while (choice0 != 1 && choice0 != 2);
    }

    }
    while(choice0 == 1);
    return next;
}

int finalPrice(int num1, int num2, double num, double now){
    int give = 0;
    if (num1 == 1){
        if (num2 == 1){
            give = num + now;
        }
        else if (num2 == 2){
            give = num + now;
        }
    }
    else if(num1 ==2){
        if (num2 == 1){
            give = int(num * 0.70) + now;
        }
        else if(num2 == 2){
            give = (num * 0.60) + now;
        }
    }
    return give;
}

int main(){
    int choice1, choice2, choice4, masha, choice5, choice6, choice7, final;
    double choice3, rati, price, add;
    cout<<"Hello there!"<<endl;
    cout<<"we are here to free you from the complications of your jewellery prices."<<endl;
    do{
    cout<<"please enter wether you want to buy jewellery or you want to sell it."<<endl;
    cout<<"1) BUY"<<endl;
    cout<<"2) SELL"<<endl;
    cout<<"please enter the corresponding integer value of your answer."<<endl;
    cin>>choice1;
    if (choice1 != 1 && choice1 != 2){
        do{
            cout<<"your integer value is incorrect"<<endl;
            cout<<"please enter your value again but carefully this time."<<endl;
            cin>>choice1;
        }
        while (choice1 != 1 && choice1 != 2);
    }
    choice2 = material(choice1);
    choice3 = weight(choice1, choice2);
    masha = choice3 / 0.972;
    rati = ((choice3 / 0.972) - masha)  / 0.1215;
    choice4 = type(choice1, choice2);
    cout<<endl;
    if (choice1 == 1){
        cout<<"You wanted to buy jewellery"<<endl;
        if (choice2 == 1){
            cout<<"Which is GOLD jewellery"<<endl;
        }
        else{
            cout<<"Which is silver jewellery"<<endl;
        }
    }
    else{
        cout<<"You wanted to sell jewellery"<<endl;
        if (choice2 == 1){
            cout<<"Which is GOLD jewellery"<<endl;
        }
        else{
            cout<<"Which is silver jewellery"<<endl;
        }
    }
    cout<<"The weight of your jewellery is "<<choice3<<" in grams which is corresponding to "<<masha<<" masha and "<<rati<<" rati."<<endl;
    cout<<"Which is in ";
    if (choice4 == 1){
        cout<<"24 KARROT material."<<endl;
    }
    else if (choice4 == 2){
        cout<<"22 KARROT material."<<endl;
    }
    else if (choice4 == 3){
        cout<<"18 KARROT material."<<endl;
    }
    choice5 = change();
    }
    while (choice5 == 1);
    price = rate(choice1, choice2, choice3, choice4);
    cout<<endl;
    if (choice1 == 1){
        cout<<"please enter weather you want to add stones in your jewellery"<<endl;
    }
    else if(choice1 == 2){
        cout<<"please enter wether there are stones in your jewellery that you want to sale"<<endl;
    }
    cout<<"please enter the corresponding integer value of your answer."<<endl;
    cout<<"1) YES"<<endl;
    cout<<"2) NO"<<endl;
    cin>>choice6;
    if (choice6 != 1 && choice6 != 2){
        do{
            cout<<"your integer value is incorrect"<<endl;
            cout<<"please enter your value again but carefully this time."<<endl;
            cin>>choice6;
        }
        while (choice6 != 1 && choice6 != 2);
    }
    if (choice6 == 1){
        do{
        add = stones();
        cout<<"The total price of the stones you selected is "<<add<<endl;
        cout<<endl;
        cout<<"Do you want to change your pick of stones"<<endl;
        cout<<"1) YES"<<endl;
        cout<<"2) NO"<<endl;
        cout<<"please enter the corresponding integer value of your answer."<<endl;
        cin>>choice7;
        if (choice7 != 1 && choice7 != 2){
            do{
            cout<<"your integer value is incorrect"<<endl;
            cout<<"please enter your value again but carefully this time."<<endl;
            cin>>choice7;
            }
            while (choice7 != 1 && choice7 != 2);
        }
        }
        while (choice7 == 1);
    }
    final = finalPrice(choice1, choice2, price, add);
    cout<<endl;
    cout<<endl;
    if (choice1 == 1){
        cout<<"The final approximate price of this jewellery that you are going to buy is "<<final<<"RS"<<endl;
    }
    else if (choice1 == 2){
        cout<<"The approximate price that you can get from selling this jewellery is "<<final<<"RS"<<endl;
    }
    
    return 0;
}
