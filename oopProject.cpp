#include <iostream>
using namespace std;
class MainActivity{
    public:
     MainActivity(){   //Constructor
      cout<<">>>>    UNIVERSITIES AGGREGATES CALCULATIONS    <<<<"<<endl;
       cout<<endl;
        cout<<"chose below options :"<<endl;
         cout<<"press 1 FAST NU"<<endl;
          cout<<"press 2 NUST"<<endl;
           cout<<"press 3 GIKI"<<endl;
              cout<<"press 4 ETEA Medical "<<endl;
                cout<<"press 5 Engineering"<<endl;
                  cout<<"Enter your choice : ";
    }

     ~MainActivity(){
          //Destructors 
     }

};

class inputMarks{    //Base Class
    protected:
    int obtained_Matric , total_Matric , obatined_Fsc, total_Fsc;
    double matric_Percenatge , fsc_percentage;
   
     public:
    void matricPercentage(){
       cout<<"Enter obtained marks of Matric : ";
         cin>>obtained_Matric;
         cout<<"Enter Total marks of Matric : ";
         cin>>total_Matric;
         
          ///  Exceptional Handling 
         try{
           if(total_Matric>0){
             matric_Percenatge = ((obtained_Matric * 100) / total_Matric) ;
           }
           else
           {
             throw(total_Matric);
           }
           
         }
         catch(int marks){
           cout<<"warning : You Entered wrong marks : "<<marks<<endl;
         }
    }
    /////////////////////////     Zara Presentation
   public:
    void FscPercentage(){
         cout<<"Enter obtained marks of Fsc : ";
         cin>>obatined_Fsc;
         cout<<"Enter Total marks of Fsc : ";
         cin>>total_Fsc;

        ///  Exceptional Handling 
           try{
           if(total_Fsc>0){
             fsc_percentage =((obatined_Fsc * 100) / total_Fsc);
           }
           else
           {
             throw(total_Fsc);
           }
           
         }
         catch(int marks){
           cout<<"warning : You Entered wrong marks : "<<marks<<endl;
         }

    }

    ///////////////////

     public:
     virtual void agg(){
          cout<<"Function for Overriding"<<endl;
        }
};

class FAST : public inputMarks{   //Dervied Classes start from here

  protected:
  double fastAgg;
  public:
  void agg(){           // Function Overriding
  fastAgg = ((matric_Percenatge * 50) / 100 ) + ((fsc_percentage * 50) / 100);
  cout<<">>>>  Your FAST NU Aggregate  : "<<fastAgg<<endl;
  cout<<"Aggregate according to COVID-19 policy"<<endl;
  }
  
};

class NUST : public inputMarks{

  protected:
  int NET;
  double nustAgg, NETpercentage;

  public:
  void agg(){    //Function Overriding
    cout<<"Enter Your NET marks : ";
    cin>>NET;
    NETpercentage = ((NET * 100) / 200);
  nustAgg = ((matric_Percenatge * 10)/100) + ((fsc_percentage * 15)/100) + ((NETpercentage * 75)/100);
  cout<<">>>>  Your NUST Aggregate : "<<nustAgg<<endl;
  }
};

  class GIKI : public inputMarks{

  protected:
  int gikiTest;
  double GIKIAgg, GIKITestPercentage;

  public:
  void agg(){    //Function Overriding
    cout<<"Enter Your GIKI Test marks : ";
    cin>>gikiTest;
    GIKITestPercentage = ((gikiTest * 100) / 200);
  GIKIAgg = ((matric_Percenatge * 5)/100) + ((fsc_percentage * 10)/100) + ((GIKITestPercentage * 85)/100);
  cout<<">>>>  Your GIKI Aggregate : "<<GIKIAgg<<endl;
  }
  
};


 class EMedical : public inputMarks{

  protected:
  int ETEATest;
  double EMAgg, ETestPercentage;

  public:
  void agg(){   //Function Overriding
    cout<<"Enter Your ETEA Medical Test marks : ";
    cin>>ETEATest;
    ETestPercentage = ((ETEATest * 100) / 200);
  EMAgg = ((fsc_percentage * 50)/100) + ((ETestPercentage * 50)/100);
  cout<<">>>>  Your ETEA Medical Aggregate : "<<EMAgg<<endl;
  }
  
};

  class EEngineering : public inputMarks{

  protected:
  int EngrTest;
  double EngrAgg, EngrTesTPercentage;

  public:
  void agg(){    //Function Overriding
    cout<<"Enter Your ETEA Engineering Test marks : ";
    cin>>EngrTest;
    EngrTesTPercentage = ((EngrTest * 100) / 800);
  EngrAgg = ((matric_Percenatge * 10)/100) + ((fsc_percentage * 40)/100) + ((EngrTesTPercentage * 50)/100);
  cout<<">>>>  Your ETEA ENGINEERING Aggregate : "<<EngrAgg<<endl;
  }
  
};
int main(){  //call All functions

int option;
FAST F;
NUST N;
GIKI G;
EMedical M;
EEngineering E;
char chose;
int i=0;


do{
MainActivity();
cin>>option;
    
////////////   FAST  /////////
if (option == 1){
  cout<<"----    FAST NU Aggregate Calculation -----"<<endl;
  cout<<endl;
     F.matricPercentage();
     F.FscPercentage();
     F.agg();
}
////////////   NUST   /////////
else if (option == 2){
  cout<<"----    NUST Aggregate Calculation    -----"<<endl;
  cout<<endl;
     N.matricPercentage();
     N.FscPercentage();
     N.agg();
}

/////////////// GIKI ////////

else if (option == 3){
  cout<<"----    GIKI Aggregate Calculation    -----"<<endl;
  cout<<endl;
     G.matricPercentage();
     G.FscPercentage();
     G.agg();
}

//////////////// ETea Medical //////////

else if (option == 4){
  cout<<"----   ETEA MEDICAL Aggregate Calculation    -----"<<endl;
  cout<<endl;
  M.FscPercentage();
  M.agg();
  
}

////////// ETEA ENGINEERING /////////

else if (option == 5){
  cout<<"----   ETEA ENGINEERING Aggregate Calculation    -----"<<endl;
  cout<<endl;
  E.matricPercentage();
  E.FscPercentage();
  E.agg();
  
}

else {
  cout<<"****  Wrong INPUT. Please select a right choice  ****"<<endl;
}
cout << "----------------------------" << endl;
cout << "for Continoue press 'Y' and for Exit press 'E'" << endl;
cout << endl;
cin >> chose;
i++;
}
while(chose=='y' || chose=='Y');

}

