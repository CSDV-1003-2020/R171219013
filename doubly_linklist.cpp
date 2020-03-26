#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int insertdata(int x);
void display();
void deleteint(int x);
void reversel();
int searchint(int x);
int compare_fn(int a,int b)
{
    if(a>b)
        return 1;
    else if(b>a)
        return -1;
}
int compare_no=1;
struct node
{
int data;
node *prev;
node *next;
};
node *top = NULL;
int main()
{
    int ch,d,y;
    char ans='y';
    while(ans=='y')
    {
        cout<<"\n\t 1.Insert        2. Delete        3.Reverse      4.EXIT\nEnter Choice : ";
        cin>>ch;
        if(ch==1)
        {
            cout<<"Enter An Element To be inserted : ";
            cin>>d;
            d=insertdata(d);
            display();
        }
        else if(ch==2)
        {
            cout<<"Enter Element To Be Deleted : ";
            cin>>d;
            deleteint(d);
            display();
        }
        else if(ch==3)
            reversel();
        else
            return 0;
    }
    return 0;
}
int searchint(int x)
void display()
