#include<iostream>
#include<conio.h>
#include<windows.h> // To access windows library
#include<string.h>
#include<bits/stdc++.h>
using namespace std;



void loading()
{
    system("cls");
    int r,q;


    printf("\t \t \t LOADING...");

    for(r=1; r<=20; r++)
    {
        for(q=0; q<=10000000; q++);
        printf("%c",177);
    }
    system("cls");


}


float onlineshopping()
{
    system("cls");

    char choice,vegetable_item;
    float billamount=0;
    int quantity;

    cout<<"\n\n";
    cout<<"************************Welcome to online shopping************************"<<endl;
    cout<<"\n";
    cout<<"------------------------Please follow the instruction---------------------"<<endl;
    cout<<"____________________________________________________________________________"<<endl;
    cout<<"|                             (1)Vegetables                                |"<<endl;
    cout<<"|                             (2)Fruits                                    |"<<endl;
    cout<<"|                             (3)Cooking                                   |"<<endl;
    cout<<"|                             (4)Spices                                    |"<<endl;
    cout<<"|                             (5)Snacks                                    |"<<endl;
    cout<<"|__________________________________________________________________________|"<<endl;
    cout<<"Please enter your choice: ";

    cin>>choice;

vegetable_level:


    cout<<endl<<endl;
    if(choice=='1')
    {
        system("cls");
        cout<<"_______________________________________________________________"<<endl;
        cout<<"|                     Vegetable details                        |"<<endl;
        cout<<"|                                                              |"<<endl;
        cout<<"|                (1)Morich 1KG=> Price:35TK                    |"<<endl;
        cout<<"|                (2)Alu 1KG=> Price:50TK                       |"<<endl;
        cout<<"|                (3)Peyaj 1KG=> Price:59TK                     |"<<endl;
        cout<<"|                (4)Roshun 1KG=> Price:119TK                   |"<<endl;
        cout<<"|                (5)Begun 1KG=> Price:70TK                     |"<<endl;
        cout<<"|                (6)Tomato 1KG=> Price:55TK                    |"<<endl;
        cout<<"|                (7)Gajor 1KG=> Price:35TK                     |"<<endl;
        cout<<"|______________________________________________________________|"<<endl;
        cout<<endl;
        cout<<"please enter your choice: ";
        cin>>vegetable_item;
        cout<<endl;

        if(vegetable_item=='1')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*35;
        }
        else if(vegetable_item=='2')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*50;
        }
        else if(vegetable_item=='3')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*59;
        }
        else if(vegetable_item=='4')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*119;
        }
        else if(vegetable_item=='5')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*70;
        }
        else if(vegetable_item=='6')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*55;
        }
        else if(vegetable_item=='7')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*35;
        }
        else
        {
            cout<<"You have entered wrong options."<<endl;
            goto vegetable_level;
        }
    }






fruits_level:


    cout<<endl<<endl<<endl;
    if(choice=='2')
    {
        system("cls");
        cout<<"________________________________________________________________"<<endl;
        cout<<"|                      Fruits details                          |"<<endl;
        cout<<"|                                                              |"<<endl;
        cout<<"|                 (1)Apple 1KG=> Price:35TK                    |"<<endl;
        cout<<"|                 (2)GreenApple 1KG=> Price:50TK               |"<<endl;
        cout<<"|                 (3)Orange 1KG=> Price:59TK                   |"<<endl;
        cout<<"|                 (4)Malta 1KG=> Price:119TK                   |"<<endl;
        cout<<"|                 (5)Banana 1KG=> Price:70TK                   |"<<endl;
        cout<<"|                 (6)Pineapple 1KG=> Price:55TK                |"<<endl;
        cout<<"|                 (7)Dragon Fruit 1KG=> Price:750TK            |"<<endl;
        cout<<"|______________________________________________________________|"<<endl;
        cout<<endl;
        cout<<"please enter your choice: ";
        cin>>vegetable_item;
        cout<<endl;

        if(vegetable_item=='1')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*35;
        }
        else if(vegetable_item=='2')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*50;
        }
        else if(vegetable_item=='3')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*59;
        }
        else if(vegetable_item=='4')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*119;
        }
        else if(vegetable_item=='5')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*70;
        }
        else if(vegetable_item=='6')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*55;
        }
        else if(vegetable_item=='7')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*750;
        }
        else
        {
            cout<<"You have entered wrong options."<<endl;
            goto fruits_level;
        }
    }









cooking_level:


    cout<<endl<<endl<<endl;
    if(choice=='3')
    {
        system("cls");
        cout<<"_______________________________________________________________"<<endl;
        cout<<"|                        Cooking details                       |"<<endl;
        cout<<"|                                                              |"<<endl;
        cout<<"|                  (1)Chal 1KG=> Price:35TK                    |"<<endl;
        cout<<"|                  (2)Dal 1KG=> Price:50TK                     |"<<endl;
        cout<<"|                  (3)Flour 1KG=> Price:59TK                   |"<<endl;
        cout<<"|                  (4)Egg 1KG=> Price:119TK                    |"<<endl;
        cout<<"|                  (5)Salt 1KG=> Price:70TK                    |"<<endl;
        cout<<"|                  (6)Sugar 1KG=> Price:55TK                   |"<<endl;
        cout<<"|                  (7)VegetableOil 1KG=> Price:200TK           |"<<endl;
        cout<<"|______________________________________________________________|"<<endl;
        cout<<endl;
        cout<<"please enter your choice: ";
        cin>>vegetable_item;
        cout<<endl;

        if(vegetable_item=='1')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*35;
        }
        else if(vegetable_item=='2')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*50;
        }
        else if(vegetable_item=='3')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*59;
        }
        else if(vegetable_item=='4')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*119;
        }
        else if(vegetable_item=='5')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*70;
        }
        else if(vegetable_item=='6')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*55;
        }
        else if(vegetable_item=='7')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*200;
        }
        else
        {
            cout<<"You have entered wrong options."<<endl;
            goto cooking_level;
        }
    }

spices_level:


    cout<<endl<<endl<<endl;
    if(choice=='4')
    {
        system("cls");
        cout<<"______________________________________________________________"<<endl;
        cout<<"|                          Spices details                     |"<<endl;
        cout<<"|                                                             |"<<endl;
        cout<<"|                  (1)Ada 1KG=> Price:35TK                    |"<<endl;
        cout<<"|                  (2)Daruchini 1KG=> Price:50TK              |"<<endl;
        cout<<"|                  (3)Holud 1KG=> Price:59TK                  |"<<endl;
        cout<<"|                  (4)Lalmorich 1KG=> Price:119TK             |"<<endl;
        cout<<"|                  (5)Golmorich 1KG=> Price:70TK              |"<<endl;
        cout<<"|                  (6)Jira 1KG=> Price:55TK                   |"<<endl;
        cout<<"|                  (7)Shuknamorich 1KG=> Price:35TK           |"<<endl;
        cout<<"|_____________________________________________________________|"<<endl;
        cout<<endl;
        cout<<"please enter your choice: ";
        cin>>vegetable_item;
        cout<<endl;

        if(vegetable_item=='1')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*35;
        }
        else if(vegetable_item=='2')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*50;
        }
        else if(vegetable_item=='3')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*59;
        }
        else if(vegetable_item=='4')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*119;
        }
        else if(vegetable_item=='5')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*70;
        }
        else if(vegetable_item=='6')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*55;
        }
        else if(vegetable_item=='7')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*35;
        }
        else
        {
            cout<<"You have entered wrong options."<<endl;
            goto spices_level;
        }
    }

snacks_level:


    cout<<endl<<endl<<endl;
    if(choice=='5')
    {
        system("cls");
        cout<<"________________________________________________________________"<<endl;
        cout<<"|                           Snacks details                      |"<<endl;
        cout<<"|                                                               |"<<endl;
        cout<<"|                    (1)Chips 1 packet=> Price:35TK             |"<<endl;
        cout<<"|                    (2)Noodles 1 packet=> Price:50TK           |"<<endl;
        cout<<"|                    (3)Biscuits 1 packet=> Price:59TK          |"<<endl;
        cout<<"|                    (4)Cake 1 packet=> Price:119TK             |"<<endl;
        cout<<"|                    (5)Coke 1 liter=> Price:70TK               |"<<endl;
        cout<<"|                    (6)Juice 1 liter=> Price:50TK              |"<<endl;
        cout<<"|                    (7)Honey nuts 1KG=> Price:1050TK           |"<<endl;
        cout<<"|_______________________________________________________________|"<<endl;
        cout<<endl;
        cout<<"please enter your choice: ";
        cin>>vegetable_item;
        cout<<endl;

        if(vegetable_item=='1')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*35;
        }
        else if(vegetable_item=='2')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*50;
        }
        else if(vegetable_item=='3')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*59;
        }
        else if(vegetable_item=='4')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*119;
        }
        else if(vegetable_item=='5')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*70;
        }
        else if(vegetable_item=='6')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*50;
        }
        else if(vegetable_item=='7')
        {
            cout<<"Enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*1050;
        }
        else
        {
            cout<<"You have entered wrong options."<<endl;
            goto snacks_level;
        }
    }






    return billamount;
}

int main()
{
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    char username[50];
    char password[50];
    loading();
    system("cls");
    SetConsoleTextAttribute(h,7);////////////////////////// to add colour in text//////////////////////////

    cout<<"\n\n\n\n\n";
    cout<<"\n\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n";
    cout<<"\n\t\t      =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
    cout<<"\n\t\t      =                  WELCOME                  =";
    cout<<"\n\t\t      =                    TO                     =";
    cout<<"\n\t\t      =                  SHOPPING                 =";
    cout<<"\n\t\t      =                 MANAGEMENT                =";
    cout<<"\n\t\t      =                   SYSTEM                  =";
    cout<<"\n\t\t      =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
    cout<<"\n\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n";

    cout<<"\n\n\n\n";
username:
    cout<<"\t\t\tEnter User name: ";
    cin>>username;

password:

    cout<<"\n\n\t\t\tEnter password: ";
    cin>>password;

    if(strcmp(username,"admin")==0)         ///////
    {

        if(strcmp(password,"123")==0)
        {





            char startvalue,shopagain;
            float onlineshopping(void);

st:

            cout<<"\n\t\tPress s to start shopping  :";

start:

            cin>>startvalue;
            if(startvalue=='s'|| startvalue=='S')
            {
                float totalamount=onlineshopping();
                cout<<endl;
                cout<<"Total bill amount is :"<<totalamount<<"TK"<<endl;

do_u_want_to_shop_again:

                cout<<endl;
                cout<<"Do you want to shop again, y or n : ";
                cin>>shopagain;
                if(shopagain=='y' || shopagain=='Y' )
                {

                    goto st;

                }
                else if(shopagain=='n' || shopagain=='N')
                {

                    cout<<"\n\n\n\n\n";

                    cout<<"\n\t\t  #*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
                    cout<<"\n\t\t      =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
                    cout<<"\n\t\t      |                                           |";
                    cout<<"\n\t\t      |                  THANK                    |";
                    cout<<"\n\t\t      |                   YOU                     |";
                    cout<<"\n\t\t      |                   FOR                     |";
                    cout<<"\n\t\t      |                 SHOPPING                  |";
                    cout<<"\n\t\t      |                                           |";
                    cout<<"\n\t\t      ---------------------------------------------";
                    cout<<"\n\t\t      =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
                    cout<<"\n\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n";

                    cout<<"\n\n\n\n";
                    goto end;


                }
                else
                {
                    cout<<"You have entered wrong option .Please type again."<<endl;
                    goto do_u_want_to_shop_again;
                }
            }
            else
            {
                cout<<"You have entered wrong option .Please press s"<<endl;
                goto start;
            }
            onlineshopping(); ////////////////////////Function call/////////////////////////////////////////////////



        }
        else
        {

            cout<<"\n\n\n\t\t\tInvalid password."<<endl;
            goto password;
        }
    }
    else
    {

        cout<<"\n\n\n\t\t\tInvalid user name."<<endl<<endl;
        goto username;
    }
end:

    getch();
}
