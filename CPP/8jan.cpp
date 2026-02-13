/*
        5 PROBLEMS EVERYDAY

        Problem 1 – Add Two Numbers
        Input: 10 20
        Output: 30

Problem 2 – Area of Circle
Input: radius
Output: area

Problem 3 – Swap Numbers
Problem 4 – Odd or Even
Problem 5 – Simple Interest


*/

// ADD TWO NUMBERS :

/*

#include<iostream>
using namespace std;

int main()
{
    int a , b;
    cout<<"\nEnter a = ";
    cin>>a;
    cout<<"\nEnter b = ";
    cin>>b;
    cout<<"\nsum of a and b = "<<a+b;

}
*/

// 2. Area of circle:


/*
    #include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"\nenter radius of circle = ";
    cin>>r;

    cout<<"Area of Circle = "<<3.14*r*r;

}
*/
    // 3. SWAPPING TWO NUMBERS 

  /*
    
    #include<iostream>
    using namespace std;

int main()
{
    int a, b, temp;

    cout<<"Enter two numbers: ";
    cin>>a>>b;

    // Swapping logic
    temp = a;
    a = b;
    b = temp;

    cout<<"After swapping:"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b;

    return 0;
}
        */


        // 4. check whether the no is odd or even

/*
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"\nEnter the number = ";
    cin>>num;

    if (num%2==0)
    {
        cout<<"\nThe Number is EVEN";
    }else{
    cout<<"\nThe Number is ODD";
    }
    
}

*/


// 5. Simple intrest:

#include<iostream>
using namespace std;

int main()
{
    float principal, rate, time, interest;

    cout<<"Enter Principal amount: ";
    cin>>principal;

    cout<<"Enter Rate of interest: ";
    cin>>rate;

    cout<<"Enter Time (in years): ";
    cin>>time;

    // Simple Interest Formula
    interest = (principal * rate * time) / 100;

    cout<<"Simple Interest is: "<<interest;

    return 0;
}
   

