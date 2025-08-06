#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y; 
        cin >> x >> y;
        int screen = y/2;
        int baki = screen*7;

        if(y%2 != 0)
        {
            screen++;
            baki += 11;
        }

        if(x > baki)
        {
            x -= baki; 
            screen += x/15;

            if(x%15 != 0)
            {
                screen++;
            }
        }
        cout << screen << endl;
    }

    return 0;
}