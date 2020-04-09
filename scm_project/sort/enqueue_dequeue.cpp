#include <iostream>
using namespace std;
class queue
{
private:
    int rear,fron,capacity;
    int *arr,choice;
public:
    queue(int y):capacity(y)
    {
        rear=fron=-1;
        arr=new int[capacity];
    }
    int isemp()
    {
        return(fron==-1);
    }
    int isfull()
    {
        return(rear==capacity-1);
    }
    void enqueue();
    void dequeue();
    void menu();
};
void queue:: enqueue()
    {
        if(isfull())
        {
            cout<<"Queue is full:"<<endl;
        }
        else
        {
            rear++;
            cout<<"Enter data:"<<endl;
            cin>>arr[rear];
            if(fron==-1)
            {
                fron=rear;
            }
        }
    }

<<<<<<< HEAD
void queue:: dequeue()
    {
        if(isemp())
        {
            cout<<"Queue is empty"<<endl;
        }
        else
        {
            cout<<"Data is: "<<arr[fron]<<endl;
            fron++;
            if(rear+1==fron)
            {
                rear=fron=-1;
            }
        }
    }
=======
>>>>>>> eff82a4ca325f69bdc8504201959611701a69900
int main()//int main programme
