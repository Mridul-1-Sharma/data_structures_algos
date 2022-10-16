/*Problem Statement :-
Chef has the binary representation S of a number X with him. He can modify the number by applying the following operation exactly once:

Make X:=X ⊕ ⌊X/pow(2,Y)⌋, where (1≤Y≤∣S∣) and ⊕ denotes the bitwise XOR operation.
Chef wants to minimize the value of X after performing the operation. Help Chef in determining the value of Y which will minimize the value of X after the operation.*/

#include <iostream>
using namespace std;

int main()
{
    int l, T, y;
    string s;
    cin >> T;

    for (int k = 1; k <= T; k++)
    {

        cin >> l;

        cin >> s;

        y = 0;

        for (int j = 0; j < l; j++)
        {
            if (s[j] == '1')
            {
                y++;
            }

            if (s[j + 1] == '0')
            {
                y++;
            }

            else if (s[j + 1] = '1')
            {
                break;
            }
        }
        cout << y << endl;
    }
    return 0;
}