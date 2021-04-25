#include "Date.h"
#include "Triad.h"
#include <Windows.h>
#include "Date.h"
#include "Exception.h"
int a;
int b;
int c;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    {

        Triad a;

        try
        {
            Triad B(2, 2, 2);
        }
        catch (invalid_argument e)
        {
            cout << e.what() << endl;
        }
        catch (bad_exception e)
        {
            cout << e.what() << endl;
        }
        catch (Exception& e)
        {
            cout << e.what() << endl;
        }
        catch (const char* e)
        {
            cerr << e << endl;
        }

        cin >> a;
        a.incDay();
        Date a2;
        a2.Init(a);
        a2.Display();
        a2.incDay();
        a2.addDay();
        a2.Display();
        cout << " A++ " << endl;
        cout << a++ << endl;
        cout << " A-- " << endl;
        cout << a-- << endl;
        cout << " ++A " << endl;
        cout << ++a << endl;
        cout << " --A " << endl;
        cout << --a << endl;

    }
}