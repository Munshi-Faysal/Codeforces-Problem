/*Solved By

       Munshi Faysal Ahmed
	Dept. of CSE,IUBAT
	E-mail: 18203036@iubat.edu
	cell: 01303132459

	**********HAPPY CODING**********

    ***             ***     ***         ***     ***      *******    ************     *******       *******    *******
    ****           ****     ***         ***     ****      *****    **************     *****         *****      *****
    *****         *****     ***         ***     *****      ***     ***        ***      ***           ***        ***
    ******       ******     ***         ***     ******     ***      ***       ***      ***           ***        ***
    *** ***     *** ***     ***         ***     *** ***    ***        ***              ***           ***        ***
    ***   ***  ***  ***     ***         ***     ***  ***   ***          ***            *** ********* ***        ***
    ***    ******   ***     ***         ***     ***   ***  ***            ***          *** ********* ***        ***
    ***     ****    ***     ***         ***     ***    *** ***             ***         ***           ***        ***
    ***      **     ***     ***         ***     ***     ******     ***       ***       ***           ***        ***
    ***             ***      **         **      ***      *****     ***        ***      ***           ***        ***
   *****           *****       *********       *****      ****     **************     *****         *****      *****
  *******         *******       *******       *******      ***      ************     *******       *******    *******
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i;
        float sum = 0.0;
        cin>>n;
        int a[n];
        for( i = 0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for( i = 0; i<n-1; i++){
            sum = sum+a[i];
        }
        double res = sum/(n-1);
        double fin = res + a[n-1];

        printf("%.9lf",fin);
        cout<<endl;

    }

}



