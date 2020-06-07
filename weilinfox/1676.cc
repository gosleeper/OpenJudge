#include <iostream>
#include <cstdlib>
#include <iomanip>

#define ll long long

using namespace std;

ll gdb (ll a, ll b)
{
        return b == 0 ? a : gdb(b, a%b);
}

class Fract {
        ll a, b;
public:
        Fract (ll aa, ll bb) {
                ll c = gdb(abs(aa), abs(bb));
                a = aa / c;
                b = bb / c;
                if (b < 0) {
                        b = -b;
                        a = -a;
                }
        }
        void show () {
                if (a == 0) cout << '0' << endl;
                else if (b == 1) cout << a << endl;
                else cout << a << '/' << b << endl;
        }
        operator double() {
                if (this->a == 0) return 0;
                else return (double)(this->a) / (this->b);
        };
};


int main()
{
    int n, m;
    while(cin >> n >> m)
    {
        Fract fr(n, m);
        cout << (double)fr << " ";
        fr.show();
    }
}

/**************************************************************
	Problem: 1676
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

