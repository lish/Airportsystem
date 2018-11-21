#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <ctime>
#include <fstream>
using namespace std;


  
   
// toutos en o customer mas
class Customer {
public:
    Customer();
    bool exist; // touto an ine true simeni oti iparxi..an ine false simeni oti ne iparxi
    int id; // touto en to id mas
    char name[150];
    char surname[150];
    int code;
    
    // char* flights_brit[] = {"Cyprus 16:00  to  Germany 20:00","Cyprus 18:00  to  France  21:00","Cyprus 22:00  to  Italy   00:00","Cyprus 20:00  to  Greece  21:30","Cyprus 00:00  to  Spain  04:00"}; //en to dexete
   
   
   //char* flights_cy[] = {"Cyprus 16:00  to  Germany 20:00","Cyprus 18:00  to  France  21:00","Cyprus 22:00  to  Italy   00:00","Cyprus 20:00  to  Greece  21:30","Cyprus 00:00  to  Spain  04:00"}; //en to dexete!
    
};

Customer::Customer() { // touto en to custructor tou Customer...opote dimiourgite enas customer 8a kamni to exist false..
    exist = false;
}

class Airport {
public:
    Airport();
    void display_customers(); // touto enna kamni display enan customer
    void add_customer(); // touto add
    void delete_customer(); // je touto delete
    void display_flights();
    void display_british();
    void display_cyprus();
   // int random_seat();
private:
    Customer cust[150]; // dame dimiourgoume 150 customer..dld to custructor pou ides tou proigoumenou class enna extelesti 150 fores..
    int current_id; //toutos en h tautotita!
    int flight_code;
};


 Airport::Airport() { // touto en to custructor tou Customers to opio kamni initialize to current_id jai to flight code
    current_id = 100; //dame kamni initialize to current_id se 100
    flight_code = 1000; //dame kamni initialize to flight_code se 1000
}


void  Airport::display_cyprus(){
  
  int ar;
   
   
   cout <<endl;
   cout << "Chose a flight"<< endl;
   cout <<endl;
   cout <<"1: Cyprus 16:00  to  Germany 20:00"<< endl;
   cout <<"2: Cyprus 18:00  to  France  21:00"<< endl;
   cout <<"3: Cyprus 22:00  to  Italy   00:00"<< endl;
   cout <<"4: Cyprus 20:00  to  Greece  21:30"<< endl;
   cout <<"5: Cyprus 00:00  to  Spain   04:00"<< endl;
   
   cin >> ar;
 
 
 switch(ar){
  
  case 1:

  break;
  
  case 2:
    
  break;
     
  case 3:
     
  break;
  
  case 4:
      
  break;
  
  case 5:
   
  break;
  
  default: // an en otidipote allo tote enna tou di3i minima
     cout << "wrong input" << endl;
     getchar();
     getchar();
 
}
}

void  Airport::display_british(){
  
  int ra;
   
   cout <<endl;
   cout << "Chose a flight"<< endl;
   cout <<endl;
   cout <<"1: Cyprus 06:00  to  Germany 10:00"<< endl;
   cout <<"2: Cyprus 08:00  to  France  11:00"<< endl;
   cout <<"3: Cyprus 14:00  to  Italy   16:00"<< endl;
   cout <<"4: Cyprus 20:00  to  Greece  21:30"<< endl;
   cout <<"5: Cyprus 00:00  to  Spain   04:00"<< endl;
   
   cin >> ra;
 
 
 switch(ra){
  
  case 1:

  
  break;
  
  case 2:

  break;
  
  case 3:

  break;
  
  case 4:

  break;
  
  case 5:
    
  break;
  
  default: // an en otidipote allo tote enna tou di3i minima
     cout << "wrong input" << endl;
     getchar();
     getchar();
 
   }

}

void Airport::display_flights(){
  
  int ar;
     
    cout << endl;
    cout <<"Chose Flight Operator"<< endl;
    cout << endl;
    cout <<"1:British Airways" << endl;
    cout << endl;
    cout <<"2:Cyprus Airways " << endl;
    
    cin >> ar;
  
  switch(ar){
     
     case 1:
      
     display_british();
     
     break;
     
     case 2:
     
     display_cyprus();
     
     break;
     
     default: // an en otidipote allo tote enna tou di3i minima
          cout << "wrong input" << endl;
          getchar();
          getchar();
     
     }

}

/*int Customers::random_seat(){
     int i;
     int randvalue;
  srand(time(NULL));    
 for (i = 1; i <= 1; i++){
   randvalue = 1 + rand() % 10;
    }
return randvalue;
}*/

void Airport::display_customers() { // dame kamnoume to display
    bool empty = true; // touto an ine true simeni oti en iparxoun customers
    cout << endl;
    for (int i=0; i<150; i++)
        if (cust[i].exist) {
            empty = false; // dame kamnoume to false..ara iparxoun            
            cout << "ID: " << cust[i].id << " Name: " << cust[i].name << " Surname: " << cust[i].surname << " Flight Code: "<< cust[i].code << endl; // dame tiponoume to id to name,surname,flightcode 
        }

    if (empty) // an en true tote enna tiposi oti en eshi customers
        cout << "there are no customers" << endl;
}

void Airport::add_customer() {
    int index = -1; // touto en to index pou enna valoume ton neo customer...ekamato -1 etsi an den evri xoro enna mini -1 je enna 3eroume oti en eshi xori
    for (int i=0; i<150; i++) // dame psaxni gia to proto false
        if (cust[i].exist == false) {
            index = i; // je valli to i sto index
            break;
        }
    cout << endl;
    if (index == -1) // an emine -1 simeni oti en ivre xoro
        cout << "out of memory" << endl;
    else { // dame kamnoume add ton customer
        cout << "Name: ";
        cin >> cust[index].name;
        cout << "Surname: ";
        cin >> cust[index].surname;
        cust[index].id = current_id++; // dame valloume to id tou je pros8etoume 1 sto current_id
        cust[index].code = flight_code++; //dame valloume to flight code tou customer
        display_flights();
        cust[index].exist = true; // dame laloume oti pleon iparxi toutos o customer        
        cout << endl << "customer with id: " << cust[index].id <<" and with the flight code number: "<< cust[index].code <<" has been added"  << endl; // dame laloume oti ekamamen ton add
        
    }
}

void Airport::delete_customer() {
    // dame kamnoume delete ton customer me to id tou
    int id;
    cout << endl << "Customer id: ";
    cin >> id;
    for (int i=0; i<100; i++) // dame psaxnoume stous customers
        if (cust[i].exist && cust[i].id == id) { // je an ton evri
            cust[i].exist = false; // kamniton remove
            break;
        }
}




int menu() { // touto en to menu je epistrefi ti e8kiavase
    int i;
    cout << "[1] display customers" << endl;
    cout << "[2] add customer" << endl;
    cout << "[3] delete customer" << endl;
    cout << "[0] log off" << endl;
    cout << endl << "select a number [1-3]: ";
    cin >> i;
    return i;
}

int intro(){
   int a;
    cout << "-== AIRPORT SYSTEM MAIN MENU ==- " << endl;
    cout << endl;
    cout << endl;
    cout << "1. Log-in" << endl;
    cout << "2. Quit" << endl;
    cin >>a;
    return a;
}


bool login(char *username){

 char temp_password[6];
 
 cout << " Enter your username and password " << endl;
    cout <<"Username : ";
     cin >> username;
      cout << endl;
  
  
 while(true)
 {
      cout <<"Password:";
       cin >>temp_password;
 
    
 if(strcmp(temp_password, "apoel") == 0){ // password me to strcmp  apto pdf COMP-255 lectb (strcmp() — Compare two strings (returns 0 if equal))
 
   cout <<"Correct Password " <<endl;
  return true;
  
  }

 
 }

return true;
}

int main() { // je touto en to main

    Airport customers; // dame exoume to class Customers
 /*   
    Airport cy1("Cyprus 16:00  to  Germany 20:00");
    Airport cy2("Cyprus 18:00  to  France  21:00");
    Airport cy3("Cyprus 22:00  to  Italy   00:00");
    Airport cy4("Cyprus 20:00  to  Greece  21:30");
    Airport cy5("Cyprus 00:00  to  Spain   04:00");
   */ 

   
   //string flights_cy[] = {"Cyprus 16:00  to  Germany 20:00","Cyprus 18:00  to  France  21:00","Cyprus 22:00  to  Italy   00:00","Cyprus 20:00  to  Greece  21:30","Cyprus 00:00  to  Spain  04:00"};
     
    int i,a; // touto enna pianni oti epistrepsi to menu()
    
    
    char username[20];
    
 while ((a = intro()) != 0) {
        switch(a){
             case 1: 
             login(username);
             getchar();
             getchar();
             break;
             
             case 2: return false;
             break;
             
             default: // an en otidipote allo tote enna tou di3i minima
                cout << "wrong input" << endl;
                getchar();
                getchar();
  }   
    
    

    while ((i = menu()) != 0) { // an to i en otidipote extos pou 0 tote enna mpi sto switch je meta enna 3ana di3i to menu
        switch(i) {
            case 1: // an e8kiale3e na kami display
                customers.display_customers();
                getchar(); // en opos to pause touto
                getchar();
                break;
            case 2: // an e8kiale3e na kami add
                customers.add_customer();
                getchar();
                getchar();
                break;
            case 3: // an e8kiale3e na kami delete
                customers.delete_customer();
                getchar();
                getchar();
                break;
            
            default: // an en otidipote allo tote enna tou di3i minima
                cout << "wrong input" << endl;
                getchar();
                getchar();
        }
    }
}
}
