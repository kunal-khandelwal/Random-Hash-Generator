#include<bits/stdc++.h>
#include<cmath>


using namespace std;

const int MAX=62;
string generateHashAll(int x) {
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
    for (int  i = 0; i < x; i++)
      res += arr[rand() % MAX];

    return res;
  }

  string generateHashAN(int x) {
    char arr[36] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z' ,'0' ,'1',
                          '2','3','4','5','6' ,'7','8','9' ,
                          };
    string res = "";
    for (int  i = 0; i < x; i++)
      res += arr[rand() % 36 ];

    return res;
  }

  string generateHashAlpha(int x) {
    char arr[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z' };
    string res = "";
    for (int  i = 0; i < x; i++)
      res += arr[rand() % 26];

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

    //type of hash
    cout<<"select choice- "<<endl;
    cout<<"1. Capital alphabets, Numbers, alphabets"<<endl;
    cout<<"2. alphabets, numbers"<<endl;
    cout<<"3. alphabets only"<<endl;
    int choice;
    cin>>choice;

    switch(choice)
    {
    case 1:
        {
    for(int i=0;i<num;i++)
    cout<<generateHashAll(x)<<endl;
    break;
        }

        case 2:
        {
    for(int i=0;i<num;i++)
        cout<<generateHashAN(x)<<endl;
    break;
        }

        case 3:
        {
    for(int i=0;i<num;i++)
        cout<<generateHashAlpha(x)<<endl;
    break;
        }

    }

}
