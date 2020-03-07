#include<bits/stdc++.h>
#include<cmath>


using namespace std;

const int MAX=62;
string generateRandomHash(int x) {
    char arr[MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z' ,'0' ,'1',
                          '2','3','4','5','6' ,'7','8','9' ,
                          'A', 'B', 'C', 'D', 'E', 'F', 'G',
                          'H', 'I', 'J', 'K', 'L', 'M', 'N',
                          'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                          'V', 'W', 'X', 'Y', 'Z' };
    string res = "";
    for (int  i = 0; i <= x; i++)
      res += arr[rand() % MAX];

    return res;
  }
int main()
{
    cout<<"enter hash size-";
    int x,num;
    cin>>x;
    cout<<"enter number of hashes- ";
    cin>>num;
    cout<<endl;
    for(int i=0;i<num;i++)
    cout<<generateRandomHash(x)<<endl;

}
