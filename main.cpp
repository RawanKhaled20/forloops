#include <iostream>

using namespace std;

// A complete problem solved using for loops/ nested for loops

int main()
{
    //1.Write a program to reverse a given array provided by the user

    int arr[5];
    int temp;

    //First read the array using for loop
    for(int i=0; i<5; i++)
    {
        cout<<"enter a number: ";
        cin>>arr[i];
    }

    //Start reversing the last elements with the first ones
    for(int i=0; i<5/2; i++)
    {
        temp= arr[i];
        arr[i]=arr[4-i];
        arr[4-i]=temp;
    }

    //print the output using for loop
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //Input: 4 1 8 3 0
    //expected output= 0 3 8 1 4

    //2.write a program to print a right angle triangle of stars

    for (int i=0; i<6; i++)
    {
        for(int j=0; j<i; j++ )
        {
            cout<<"*";
        }
        cout<<endl;
    }


    //3.write a program to print an isosceles triangle of stars
    for (int i = 1; i <= 6; i++) {

        for (int j = 1; j <= 6 - i; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }

        cout <<endl;
    }

    return 0;
}
