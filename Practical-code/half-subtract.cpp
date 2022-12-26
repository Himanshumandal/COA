#include <bits/stdc++.h>

using namespace std;

void halfsubstractor(int A,int B)
{
    int difference,borrow;
    difference = A^B;
    A = not(A);
    borrow = A&B;
    cout<<difference<<" "<<borrow<<endl;

}
int main()
{
    int A=1;
    int B=0;
    halfsubstractor(A,B);
    return 0;
}
