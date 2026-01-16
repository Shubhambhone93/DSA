#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n >= 300 && n <= 460)
    {
        cout << " You won a macbook!" << endl;
        if (n >= 300 && n <= 380)
        {
            cout << "Model: M1 Mac" << endl;
        }
        else if (n >= 381 && n <= 460)
        {
            cout << "Model: M2 Mac";
        }
    }
    else if (n >= 200 && n <= 280)
    {
        cout << "You won a pack of KurKure!";
    }
    if (n >= 200 && n <= 240)
    {
        cout << "Flavor:Chilli KurKure" << endl;
    }
    else if (n >= 241 && n <= 280)
    {
        cout << "Flavor:Onion KurKure";
    }
    else if (n >= 1100 && n <= 1500)
    {
        cout << "You won Cycle!" << endl;
    
        if (n >= 1100 && n <= 1300)
        {
            cout << "Brand:Avon Cycle" << endl;
        }
        else if (n >= 1301 && n >= 1500)
        {
            cout << "Brand: Hero Cycle";
        }
        else if (n > 50 && n <= 80)
        {
            cout << "You won a Bike!" << endl;
            if (n > 50 && n <= 65)
            {
                cout << "Model:Bullet" << endl;
            }
            else if (n > 65 && n <= 80)
            {
                cout << "Model: Rajdoot";
            }
        }
    }
}