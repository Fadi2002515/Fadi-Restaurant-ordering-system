#include <iostream>
#include<string>
#include<vector>

using namespace std;

int prices(int choice);
int Appetizerssection();
int SoupSize();
int choices(int choice);
void Menu();
void Combo();

void Menu() {

    cout << "---------------------" << endl;
    cout << " 1- Rice or Bulgur bowl" << endl;
    cout << " 2- Salad bowl" << endl;
    cout << " 3- Laffa wrap" << endl;
    cout << " 4- Appetizers" << endl;
    cout << " 5- Lentil soup" << endl;
    cout << "---------------------" << endl;
}


int choices(int choice) {

    int totalprice ;
    if (choice >= 1 && choice <= 3) {
        totalprice = prices(choice);
    }
    else if (choice == 4) {
        totalprice = Appetizerssection();
    }

    else if (choice == 5) {
        totalprice = SoupSize();
    }
    
    else {
        cout << "Invalid choice" << endl;
    }
    return totalprice;
}
    int Appetizerssection() {
        char choice;
        cout << " A- Hummus" << endl;
        cout << " B- Baba Ghanouj" << endl;
        cout << " C- Rice side" << endl;
        cin >> choice;
        
        if (choice == 'A' || choice == 'a') {
            return 5;
        }
        else if (choice == 'B' || choice == 'b') {
            return 5;
        }
        else if (choice == 'C' || choice == 'c') {
            return 4;
        }
        else{
            cout << " Invalid choice!";
            return 0;
        }
    }

  int SoupSize() {
        int sizechoice;

        cout << " 1- Regular" << endl;
        cout << " 2- Quart" << endl;
        cin >> sizechoice;

        if (sizechoice == 1) {
            return 5;
        }
        else if (sizechoice == 2) {
            return 10;
        }
        else {
            cout << "We do not have this size!" << endl;
            return 0;
        }
    }
int prices(int choice) {
    int price = 0;
    if (choice == 1) {
       price=11;
    }
    else if (choice==2){
       price=11;
    }
    else if (choice == 3) {
     price=9;
    }
    return price;
}

void Combo() {
    cout << " 1- Side of Rice" << endl;
    cout << " 2- Fries" << endl;
    cout << " 3- Soup" << endl;
}
int main(){

    int choice;
    int totalprice = 0;
    int again = 1;
    bool ordering = true;

    cout << "Welcome to Fadi's Resturant" << endl;

    while (ordering) {
        cout << "What do you like to order today?" << endl;

        Menu();
        cin >> choice;

        totalprice += choices(choice);

        cout << "Would you like to order something else today?(1 for Yes, else for No)" << endl;
        cin >> again;

        switch (again) {

        case 1:
            break;

        case 2:
            ordering = false;
            break;

        default:
            cout << "Invalid choice" << endl;
            ordering = false;
            break;
        }
    }

    cout << "Your total price is: " << totalprice << "$" << endl;
   
    return 0;
    }