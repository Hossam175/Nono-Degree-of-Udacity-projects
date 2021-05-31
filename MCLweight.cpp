#include<iostream>

using namespace std;

double w[] = {0.6 , 1.2 , 2.4 , 0.6 , 1.2};
double sum = 0;

void computeprob(double w[] , int n)
{
    for (int i = 0; i < n; i++)
    {
        sum = sum + w[i];
    }
    for (int j = 0; j < n; j++)
    {
        w[j] = w[j] /sum ;
        cout << "P" << j + 1 << "=" << w[j] << endl;
        
    }
    
}

int main(){
    computeprob(w , sizeof(w)/ sizeof(w[0]));
    return 0 ;
}