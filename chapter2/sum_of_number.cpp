#include <iostream>
using namespace std;

int main (){
    int n = 10;
    int sum = 0;

    for(int i = 1; i <= n; i++){
        sum+=i;     //(sum+=i  =  sum=sum+i)
    }
    cout<<"sum = "<<sum<< endl;

    return 0;
}

// factorial
#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i; //(sum+=i  =  sum=sum+i)
    }
    cout << "fact = " << fact << endl;

    return 0;
}