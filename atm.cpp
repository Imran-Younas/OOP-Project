#include <iostream>
#include<string>
#include<fstream>
using namespace std;
struct Registration
{
string name,password, cnic;
int age,i=1,j=1;
float money=0;

};

struct Account
{
    string account[4]={"1 widraw cash" , "2 check balance" ,"3 Easyload"};
    string username,pass,s,pw,n,uname,network,phone;
     string b,bal;
     int opnum;
     int wcash,rembal,con_bal,easyload;
    
};
int main()
{

    ifstream fin;
    ofstream myfile;
    ifstream in;
    char op;
Registration r;
Account a;

cout<<"==================================="<<endl;
cout<<"            ATM                  "<<endl;
cout<<"==================================="<<endl;
cout<<endl;
cout<<"For Registration of account press 'R'"<<endl;
cout<<"To open account press 'A'"<<endl;
cout<<"For exit press 'E'"<<endl;

cin>>op;

if (op=='R'||op=='r')
{
    cout<<"Enter your Name"<<endl;
    cin>>r.name;

    cout<<"How old are you"<<endl;
    cin>>r.age;

    cout<<"Enter your CNIC digits without dashes"<<endl;
    cin>>r.cnic;
    
   
    cout<<"Enter password as you  want"<<endl;
    cin>>r.password;

    cout<<"Do you want add Cash now in your account ? if you want add then Enter money other wise press 0"<<endl;
    cin>>r.money;

    cout<<"Congratulation your account is created"<<endl;

cout<<"********************************************"<<endl;
cout<<endl;
cout<<"Your account Information"<<endl;
cout<<"======================================="<<endl;
cout<<endl;
cout<<"Name= "<<r.name<<endl;
cout<<"Age= "<<r.age<<endl;
cout<<"CNIC: "<<r.cnic<<endl;
cout<<"Balance= "<<r.money<<endl;
cout<<"<><><><><><><><><><><><><><><><><><><><><><>"<<endl;
cout<<"kindly keep username and password secreat"<<endl; 
cout<<"UserName= "<<r.name<<r.j++<<endl;
cout<<"Password= "<<r.password<<endl;
cout<<"================================="<<endl;
    
myfile.open("ATM.txt");
myfile<<"Your account Information"<<endl;
myfile<<"======================================="<<endl;
myfile<<"Name= "<<r.name<<endl;
myfile<<"Age= "<<r.age<<endl;
myfile<<"CNIC: "<<r.cnic<<endl;
myfile<<"Balance= "<<r.money<<endl;
myfile<<"<><><><><><><><><><><><><><><><><><><><><><>"<<endl;

myfile<<"UserName= "<<r.name<<r.i++<<endl;
myfile<<"Password= "<<r.password<<endl;
myfile<<"================================="<<endl;


myfile.close();

}

else if (op=='a'|| op == 'A')

{

    in.open("ATM.txt");
    while(!in.eof())
    {
        in>>a.s;
        if(a.s=="Password=")
        {
            in>>a.s;
            a.pw=a.s;
        }
        in>>a.n;
        if(a.n=="UserName=")
        {
            in>>a.n;
           a.uname=a.n;
        }
        
    }

    in.close();
///////////////////////////////
    fin.open("ATM.txt");
    while(!fin.eof())
    {
        fin>>a.b;
        if(a.b=="Balance=")
        {
        	fin>>a.b;
			a.bal=a.b;
		}
      
    }
 fin.close();

  a.con_bal = stoi(a.bal);
////////////////////////////////////
    cout<<"-----------------------------------------------"<<endl;
    cout<<"For login your account please Enter your User Name "<<endl;
    cin>>a.username;
    cout<<"Enter your password"<<endl;
    cin>>a.pass;

if(a.uname==a.username && a.pw==a.pass)
{
 
    cout<<">>>>  Your account  <<<<"<<endl;
    cout<<endl;

    for (int i=0; i<4; i++)
    cout<<a.account[i]<<endl;
    cout<<endl;

    cout<<"-----------------------"<<endl;
    cout<<"Enter what you want press 1,2 or 3"<<endl;
    cin>>a.opnum;

    if(a.opnum==1)
    {
        
cout<<"How much cash you want widraw"<<endl;
cin>>a.wcash;


if(a.wcash<=15000)
{

a.rembal = (a.con_bal) - (a.wcash);
cout<<"your remining balance= "<<a.rembal<<endl;
}
else
{
    cout<<"please Enter  less then 15000 amount"<<endl;
}


    }

    else if(a.opnum==2)
    {
        cout<<"balance in your acoount= "<<a.con_bal<<endl;
    }

else if(a.opnum==3)
{

    cout<<"please  Enter your conection Name;"<<endl;
cin>>a.network;
cout<<"please Enter your phone number"<<endl;
cin>>a.phone;
cout<<"please Enter balance "<<endl;
cin>>a.easyload;

if(a.easyload>=40)
{
a.rembal=  (a.con_bal)- (a.easyload);
cout<<"your remining balance= "<<a.rembal<<endl;
}


else
{
   cout<<" sorry please Enter Minimum balance = 40"<<endl;
}



}


}

else
    {
        cout<<"Sorry wrong Username or password"<<endl;
    }

    
}
else 
{
cout<<"Thank you "<<endl;

}

return 0;

}
