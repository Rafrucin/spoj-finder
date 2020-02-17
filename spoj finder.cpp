//SPOJ submission 24113164 (CPP)plaintext list.Status: AC, problem SKARBFI, contest SPOJPL.By ravruc(ravruc), 2019 - 07 - 20 21 : 42 : 26.
#include <iostream>

using namespace std;



int main()
{
    int x = 0, y = 0, prob, zestaw, a, b;
    cin >> prob;
    for (int i = 1; i <= prob; i++)
    {
        cin >> zestaw;
        for (int j = 1; j <= zestaw; j++)
        {
            cin >> a >> b;
            if (a == 0) y += b;
            else if (a == 1) y -= b;
            else if (a == 2) x -= b;
            else if (a == 3) x += b;
        }


        if (x == 0 && y == 0) cout << "studnia" << endl;
        else
        {
            if (y != 0)
            {
                if (y < 0) cout << "1 " << -y << endl;
                else cout << "0 " << y << endl;
            }
            if (x != 0)
            {
                if (x < 0) cout << "2 " << -x << endl;
                else cout << "3 " << x << endl;
            }
        }
        x = 0; y = 0;
    }
    return 0;
}
