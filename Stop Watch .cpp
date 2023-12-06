#include<bits/stdc++.h>
#include<stdlib.h>
#include<windows.h> //To access  windows library
#define cycle 5

using namespace std;

int main(){
//int cycle=5;
int hour,minute,second;
cout<<"Enter hour:minute:second"<<endl;
cin>>hour>>minute>>second;


int h=0,m=0,s=0;

while(1){

        cout<<h<<" "<<m<<" "<<s<<endl;
    if(h==hour && m==minute && s==second){

        break;
    }else{

    system("cls");

    }
    s++;
    Sleep(1);
    if(s==cycle){   //s==60
        m++;
        s=0;
    }

    if(m==cycle){   //m==60
        h++;
        m=0;
    }
}
}
