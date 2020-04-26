#include <iostream>
#include<string>
using namespace std;
bool isValid(string exp);
int main()
{
    string exp;
    cout << "enter the string " << endl;
    getline(cin,exp);
    if(isValid(exp))
    {
        cout<<"TRUE "<<endl;
    }
    else {cout<<" FALSE "<<endl;}
    return 0;
}
bool isValid(string exp)
{
    int count1=0
        ,count2=0
        ,count3=0;
    for(int i=0;i<exp.size();i++ )
    {
        switch(exp[i]){
        case '(':
            {
                count1++;
                break;
            }
        case '{' :
            {
                count2++;
                break;
            }
        case '[' :
            {
                count3++;
                break;
            }
        case ')':
            {
                count1--;
                break;
            }
        case '}' :
            {
                count2--;
                break;
            }
        case ']' :
            {
                count3--;
                break;
            }
        }
    }
    if (count1==0 && count2==0 && count3==0)
    {
        return true;
    }
    else {return false ;}
}
