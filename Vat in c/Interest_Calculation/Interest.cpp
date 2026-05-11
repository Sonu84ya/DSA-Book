#include <iostream>
#include <conio.h>
#include <math.h>
#include<string.h> 
using namespace std;

class Interest
{
private:
    double interest_amt;
    string calc_name;
public:
    Interest(string s)
    {
        calc_name = s;
    }

    double p, t, r;

    void setData()
    {
        cout << "Principle: ";
        cin >> p;
        cout << "Time: ";
        cin >> t;
        cout << "Rate: ";
        cin >> r;
    }
  
    void see(){
        cout<<"Principle: "<<p<<endl;
        cout<<"Time: "<<t<<endl;
        cout<<"Rate: "<<r<<endl;    
    }
  
    double total;
    void calc_CI()
    {
        for (int i = 0 ; i < t ; i++)
        {
            if(i==0){
                total  = p * (1+(r/100)); 
            }
            else{
               total = total * (1+(r/100));
        }
    }
        cout<<"Your compund interest is "<<total;
  }

  void calc_Greatest(){
      int num,arr[100];
       
       cout<<"Enter number of numbers:";
       cin>>num;

       arr[num];
       cout<<"Enter your numbers: ";
       for(int i=0; i<num ; i++){
          cin>>arr[i]; 
       }
       int greater = 0;
       for(int i=0 ; i<num ; i++){
        if(arr[i] > greater){
            greater = arr[i];
        }
       }

       cout<<"Greatest numebr is "<<greater;

  }
 
 // Checking special character 
   void check_specal_c(){
      
      char c,c_in , a;
      cout << "Enter your character: ";
      cin >> c_in;
    
      for(int i=48 ; i<=57 ; i++){
          c = i ;
         if(c_in == c){
           cout<<"Sorry your entered number not special character";   
         }  
      }
      int num_check = 48; 
      for(int i=65 ; i<=90 ; i++){

          c = i;
          if(c_in == c){
            cout<<"Sorry you entered alphabet not a special character"; 
            break; 
          }
          else if(num_check < 58){
             c = num_check;
             if(c_in == c){
                cout<<"Sorry you entered number not a character";
                break;
             }
             break;
           }
          else{
            cout<<"Well you entered a special character";
          }
          num_check++;
       }
      
  }
};

class mean{

     private: 
     int data ;
     string name , address;
     public: 
     void setdata(){
        
        cout<<"Enter your name: "; cin>>name;
        cout<<"Enter your address: "; cin>>address;    

     }  

     void getdata(){
       int  count;

      

     }


};

int main()
{
    Interest i1("SI");

    // i1.setData();
    // i1.see();
    // i1.calc_CI();
    // i1.calc_Greatest();
    
    // i1.check_specal_c();
    
    mean m1;
     
    m1.setdata();
    m1.getdata();
}