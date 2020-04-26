#include <iostream>

using namespace std;
template <class T>
class stack
{
private :
    T *val;
    int top,capacity;
public:
    int sizee;
    stack()
    {
        top=-1;
        cout<<"enter the size of the stack"<<endl;
        cin>>sizee;
        val=new T[sizee];
        capacity=sizee;
    }
    stack(T val,int sizee)
    {
        this->val=val;
        this->sizee=sizee;
    }
    T & TOP()
    {
        return  val[sizee-1];
    }
    void pop()
    {
        sizee-=1;
        top--;
    }
    void push(T data)
    {
        ++top;
        val[top]=data;
    }
    int size()
    {
        return top+1;
    }
    int isEmpty()
    {
        if (top==-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int full()
    {
        if (top==(sizee-1))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    ~stack()
    {
        delete val;
    }

};
int main()
{
    int ch;
    cout<<"choose type "<<endl;
    cout<<"1) int "<<endl;
    cout<<"2) float"<<endl;
    cout<<"3) character"<<endl;
    cout<<"4) string "<<endl;
    cin>>ch;
    switch (ch ){
    case 1:
        {
                stack <int> one;
                 char ans;
                 cout<<"add in stack"<<endl;
            for(int i=0;i<one.sizee;i++){
                int val ;
                cin>>val;
                one.push(val);}
        do
        {
            int choice;
            cout<<"choose"<<endl;
            cout<<"1) delete last element "<<endl;
            cout<<"2) show last element "<<endl;
            cout<<"3) show size "<<endl;
            cin>> choice;
            switch (choice){
            case 1:{
                int check;
                check=one.isEmpty();
                if (check==0){
                one.pop();
                cout<<"element has been deleted successfully "<<endl;
                }
                else {cout<<"the stack is empty "<<endl;}
                break;}
            case 2:
                {
                    int check , value;
                    check=one.isEmpty();
                    if (check==0)
                        value = one.TOP();
                    cout<<"value is "<<value<<endl;
                    break;
                }
            case 3:
                {
                    int sizee;
                    sizee=one.size();
                    cout<<"size is "<<sizee<<endl;
                }
            }
            cout <<"would you like to do another operation "<<endl;
            cin >> ans;
        }while (ans=='y'&&'Y');
                break;
        }
    case 2:
        {
             stack<float> flot;
              char ans;
              cout<<"add in stack"<<endl;
            for(int i=0;i<flot.sizee;i++){
                float val ;
                cin>>val;
                flot.push(val);}
        do
        {
            int choice;
            cout<<"choose"<<endl;
            cout<<"1) delete last element "<<endl;
            cout<<"2) show last element "<<endl;
            cout<<"3) show size "<<endl;
            cin>> choice;
            switch (choice){
            case 1:{
                int check;
                check=flot.isEmpty();
                if (check==0){
                flot.pop();
                cout<<"element has been deleted successfully "<<endl;}
                else {cout<<"the stack is empty "<<endl;}
                break;}
            case 2:
                {
                    int check ;
                     float value;
                    check=flot.isEmpty();
                    if (check==0)
                        value = flot.TOP();
                    cout<<"value is "<<value<<endl;
                    break;
                }
            case 3:
                {
                    int sizee;
                    sizee=flot.size();
                    cout<<"size is "<<sizee<<endl;
                }
            }
            cout <<"would you like to do another operation "<<endl;
            cin >> ans;
        }while (ans=='y'&&'Y');
             break;
        }
    case 3:
        {
            stack<char> cha;
             char ans;
             cout<<"add in stack"<<endl;
            for(int i=0;i<cha.sizee;i++){
                char val ;
                cin>>val;
                cha.push(val);}
        do
        {
            int choice;
            cout<<"choose"<<endl;
            cout<<"1) delete last element "<<endl;
            cout<<"2) show last element "<<endl;
            cout<<"3) show size "<<endl;
            cin>> choice;
            switch (choice){
            case 1:{
                int check;
                check=cha.isEmpty();
                if (check==0){
                cha.pop();
                cout<<"element has been deleted successfully "<<endl;}
                else {cout<<"the stack is empty "<<endl;}
                break;}
            case 2:
                {
                    int check ;
                     char value;
                    check=cha.isEmpty();
                    if (check==0)
                        value = cha.TOP();
                    cout<<"value is "<<value<<endl;
                    break;
                }
            case 3:
                {
                    int sizee;
                    sizee=cha.size();
                    cout<<"size is "<<sizee<<endl;
                }
            }
            cout <<"would you like to do another operation "<<endl;
            cin >> ans;
        }while (ans=='y'&&'Y');
            break;
        }
    case 4:
        {
            stack <string> stri;
             char ans;
             cout<<"add in stack"<<endl;
            for(int i=0;i<stri.sizee;i++){
                string val ;
                cin>>val;
                stri.push(val);}
        do
        {
            int choice;
            cout<<"choose"<<endl;
            cout<<"1) delete last element "<<endl;
            cout<<"2) show last element "<<endl;
            cout<<"3) show size "<<endl;
            cin>> choice;
            switch (choice){
            case 1:{
                int check;
                check=stri.isEmpty();
                if (check==0){
                stri.pop();
                cout<<"element has been deleted successfully "<<endl;
                }
                else {cout<<"the stack is empty "<<endl;}
                break;}
            case 2:
                {
                    int check ;
                    string value;
                    check=stri.isEmpty();
                    if (check==0)
                        value = stri.TOP();
                    cout<<"value is "<<value<<endl;
                    break;
                }
            case 3:
                {
                    int sizee;
                    sizee=stri.size();
                    cout<<"size is "<<sizee<<endl;
                }
            }
            cout <<"would you like to do another operation "<<endl;
            cin >> ans;
        }while (ans=='y'&&'Y');
            break;
        }

    }

    return 0;
}
