#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World";
    return 0;
}



#include <iostream>
using namespace std;

int main()
{
    int a;
    float b;
    char c;

    cin >> a >> b >> c;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}





#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << "Add = " << a + b << endl;
    cout << "Subtract = " << a - b << endl;
    cout << "Multiply = " << a * b << endl;
    cout << "Divide = " << a / b << endl;

    return 0;
}





#include <iostream>
using namespace std;

int main()
{
    float c, f;
    cin >> c;

    f = (9 * c) / 5 + 32;
    cout << "Fahrenheit = " << f;

    return 0;
}







#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Hello\nWorld" << endl;
    cout << "Hello\tWorld" << endl;
    cout << "Hello\bWorld" << endl;
    cout << setw(10) << "C++";

    return 0;
}





#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    a += 5;
    cout << a << endl;

    a -= 3;
    cout << a << endl;

    return 0;
}







#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << a << " " << b;

    return 0;
}








#include <iostream>
using namespace std;

int main()
{
    int days;
    cin >> days;

    if (days <= 5)
        cout << "Fine = 50 paise";
    else if (days <= 10)
        cout << "Fine = 1 rupee";
    else if (days <= 30)
        cout << "Fine = 5 rupees";
    else
        cout << "Membership cancelled";

    return 0;
}









#include <iostream>
using namespace std;

int main()
{
    int a, b, ch;
    cin >> a >> b;
    cin >> ch;

    switch (ch)
    {
        case 1: cout << a + b; break;
        case 2: cout << a - b; break;
        case 3: cout << a * b; break;
        case 4: cout << a / b; break;
        default: cout << "Invalid choice";
    }

    return 0;
}






#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";

    cout << endl;

    cout << (n % 2 == 0 ? "Even" : "Odd");

    return 0;
}
