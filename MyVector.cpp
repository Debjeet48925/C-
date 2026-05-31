#include<iostream>
using namespace std;
class Vector{
    public:
    int size;
    int capacity;
    int* arr;
    Vector()
    {
        size=0;
        capacity=1;
        arr=new int[1];
    }
    void add(int ele)
    {
        if(size==capacity)
        {
            capacity*=2;
            int *arr2=new int[capacity];
            for(int i=0;i<size;i++)
            {
                arr2[i]=arr[i];
            }
        arr=arr2;
        }
    arr[size]=ele;
    size++;
    }
    void print()
    {
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int get(int index)
    {
        if(size==0)
        {
            cout<<"Vector is empty"<<endl;
            return -1;
        }
        if(index>=size || index<0)
        {
            cout<<"Invalid index"<<endl;
            return -1;
        }
        return arr[index];
    }
};
int main()
{
    // int* arr = new int[5]; // Dynamic allocation of an array of integers
    // arr[0]=5;
    // arr[3]=4;
    // cout<<arr[0]<<endl; // Output: 5
    Vector v;
    cout<<"Size: "<<v.size<<" Capacity: "<<v.capacity<<endl;//0 1
    v.add(10);
    v.print();
    cout<<"Size: "<<v.size<<" Capacity: "<<v.capacity<<endl;//1 1
    v.add(15);
    v.print();
    cout<<"Size: "<<v.size<<" Capacity: "<<v.capacity<<endl;//2 2
    v.add(7);
    v.print();
    cout<<"Size: "<<v.size<<" Capacity: "<<v.capacity<<endl;//3 4
    cout<<"Element at index 1: "<<v.get(1)<<endl;//15
    cout<<"Element at index 0: "<<v.get(0)<<endl;//10
    cout<<"Element at index 2: "<<v.get(2)<<endl;//7
    cout<<"Element at invalid index: "<<v.get(5)<<endl;//-1
}