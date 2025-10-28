#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter number of rows " << endl;
    cin >> a;
    int b;
    cout << "enter numvber of column " << endl;
    cin >> b;
    // for (int i = 1;i<=a;i++){
    //     for(int j = 1;j<=b;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }
    // Using while loop
    // int a;
    // cout << "Enter number of rows " << endl;
    // cin >> a;
    // int b;
    // cout << "enter numvber of column " << endl;
    // cin >> b;
    // int i = 1;
    //     while (i<=a)
    // {
    //     int j = 1;
    //     while (j<=b)
    //     {
    //         cout<<"*"<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    // using number ********************************************
    // int a;
    // cout << "Enter number of rows " << endl;
    // cin >> a;
    // int b;
    // cout << "enter numvber of column " << endl;
    // cin >> b;
    //    int i = 1;
    //     while (i<=a)
    // {
    //     int j = 1;
    //     while (j<=b)
    //     {
    //         cout<<i<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // int a;
    // cout << "Enter number of rows " << endl;
    // cin >> a;
    // int b;
    // cout << "enter numvber of column " << endl;
    // cin >> b;

    // int i = 1;
    //     while (i<=a)
    // {
    //     int j = 1;
    //     while (j<=b)
    //     {
    //         cout<<j<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    //*********************************************** */
    // int a;
    // cout << "Enter number of rows " << endl;
    // cin >> a;
    // int b;
    // cout << "enter numvber of column " << endl;
    // cin >> b;

    // int i = 1;
    // int v = 1;
    // while (i <= a)
    // {
    //     int j = 1;
    //     while (j <= b)
    //     {

    //         cout << v << " ";
    //         ;
    //         v++;
    //         j++;
    //     }

    //     cout << endl;
    //     i++;
    // }

    // *************************************next pattern ********************************************
    // int a;
    // cout << "Enter number of rows " << endl;
    // cin >> a;
    // int b;
    // cout << "enter numvber of column " << endl;
    // cin >> b;

    // for (int i = 1; i <= a; i++){ // rows
    //     for (int j = i; j >= 1; j--){ // column
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // int i = 1;

    // while (i<=a)
    // {
    //     int j = i;
    //     while (j>=1)
    //     {
    //         cout<<"*"<<" ";
    //         j--;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //**************************************next pattern ******************************************************
    // for (int i = a; i >= 1; i--){ // rows
    //     for (int j = i; j >= 1; j--){ // column
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // int i = a;
    // while (i>=1)
    // {
    //     int j = i;
    //     while (j>=1)
    //     {
    //         cout<<"*"<<" ";
    //         j--;
    //     }
    //     cout<<endl;
    //     i--;
    // }

    //**************************************next pattern ******************************************************
    // for (int i = 1; i <= a; i++){ // rows
    //      for (int j = i; j >= 1; j--){ // column
    //          cout << "*" << " ";
    //      }
    //      cout << endl;
    //  }

    // int i = 1;
    // while (i<=a)
    // {
    //     int j = i;
    //     while (j>=1)
    //     {
    //             cout<<"*"<<" ";
    //             j--;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    //**************************************next pattern ******************************************************

    // for (int i = 1; i <= a; i++){ // rows
    //     for (int j = a-i; j >= 1; j--){ // column
    //         cout <<" ";
    //     }
    //     for(int j = 1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout <<endl;
    // }

    // int i = 1;
    // while (i<=a)
    // {
    //     int j = a-i;
    //     while (j>=1)
    //     {
    //             cout<<" ";
    //             j--;
    //     }
    //     int k = 1;
    //     while (k<=i)
    //     {
    //         cout<<"*";
    //         k++;
    //     }

    //     cout<<endl;
    //     i++;
    // }
    
    // int i =1;
    // while(i<=a){
    //     int j = 1;
    //     while (j<=i)
    //     {
    //         cout<<"*"<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
        
    // }
    // int i =1;
    // while(i<=a){
    //     int j = 1;
    //     while (j<=i)
    //     {
    //         cout<<i<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
        
    // }

    // int i =1;
    // int k=1;
    // while(i<=a){
    //     int j = 1;
    //     while (j<=i)
    //     {
    //         cout<<k<<" ";
    //         k++;
    //         j++;
    //     }
    //     cout<<endl;
        
    //     i++;
        
    // }


    // int i =1;
    // while(i<=a){
    //     int k=i;
    //     int j = 1;
    //     while (j<=i)
    //     {
    //         cout<<k<<" ";
    //         k++;
    //         j++;
    //     }
    //     cout<<endl;
        
    //     i++;
        
    // }
    //                    with k
    // int i =1;
    // while(i<=a){
    //     int k=i;
    //     int j = 1;
    //     while (j<=i)
    //     {
    //         cout<<k<<" ";
    //         k--;
    //         j++;
    //     }
    //     cout<<endl;
        
    //     i++;
        
    // }
    //              without k
    // int i =1;
    // while(i<=a){
    //     // int k=i;
    //     int j = 1;
    //     while (j<=i)
    //     {
    //         cout<<(i-j+1)<<" ";
            
    //         // k--;
    //         j++;
    //     }
    //     cout<<endl;
        
    //     i++;
        
    // }
    //***************************************************************************** */
    //                 Logic
    // char ch = 'A';
    // cout<<char(ch+1)<<endl;  



    // int a;
    // cout << "Enter number of rows " << endl;
    // cin >> a;
    // int b;
    // cout << "enter numvber of column " << endl;
    // cin >> b;
    // int i =1;
    // char ch = 'A';
    // while(i<=a){
        
    //     int j = 1;
    //     while (j<=i)
    //     {
    //         cout<<char(ch+i-1)<<" ";     
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    //*********************************************************************** */
    // int a;
    // cout << "Enter number of rows " << endl;
    // cin >> a;
    // int b;
    // cout << "enter numvber of column " << endl;
    // cin >> b;

    // int i =1;
    // char ch = 'A';
    // while(i<=a){
        
    //     int j = 1;
    //     while (j<=b)
    //     {
    //         cout<<ch<<" ";     
    //         j++;
    //         ch++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    //*********************************************************************** */
    // int a;
    // cout << "Enter number of rows " << endl;
    // cin >> a;
    // int b;
    // cout << "enter numvber of column " << endl;
    // cin >> b;
    // int i =1;
    // while(i<=a){
        
    //     char ch = 'A';
    //     int j = 1;
    //     while (j<=b)
    //     {
    //         cout<<char('A'-1+ i+j-1)<<" ";     
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    // *********************************************************************** */
    // int a;
    // cout << "Enter number of rows " << endl;
    // cin >> a;
    // int b;
    // cout << "enter numvber of column " << endl;
    // cin >> b;

    // int i =1; 
    // char ch = 'A';
    // while(i<=a){
        
    //     int j = 1;
    //     while (j<=i)
    //     {
    //         cout<<ch<<" ";     
    //         j++;
    //     }
    //     cout<<endl;
    //     ch++;
    //     i++;
    // }
    // *********************************************************************** */
    // int a;
    // cout << "Enter number of rows " << endl;
    // cin >> a;
    // int b;
    // cout << "enter numvber of column " << endl;
    // cin >> b;

    // int i =1; 
    // char ch = 'A';
    // while(i<=a){
        
    //     int j = 1;
    //     while (j<=i)
    //     {
    //         cout<<char('A'+i+j-2)<<" ";     
            
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // *********************************************************************** */
    // int a;
    // cout << "Enter number of rows " << endl;
    // cin >> a;

    // int i =1; 
    // while(i<=a){
        
    //     int j = i;
    //     while (j<a){
            
    //         cout<<" ";     
    //         j++;
    //     }
    //     int k = 1;
    //     while (k<=i){
    //         cout<<"*";
    //         k++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // *********************************************************************** */
    // int a;
    // cout << "Enter number of rows " << endl;
    // cin >> a;
    
    // int i =1; 
    // while(i<=a){
        
    //     int j = i;
    //     while (j<a){
            
    //         cout<<"*";     
    //         j++;
    //     }
    //     int k = 1;
    //     while (k<=i){
    //         cout<<" ";
    //         k++;
    //     }
    //     cout<<endl;
    //     i++;
    // }



    // *********************************************************************** */
    // int a;
    // cout << "Enter number of rows " << endl;
    // cin >> a;
    
    // int i =1; 
    // while(i<=a){
        
    //     int j = i;
    //     int l = i;
    //     while (j<a){
            
    //         cout<<l;     
    //         j++;
    //         l++;
    //     }
        
    //     int k = 1;
    //     while (k<=i){
    //         cout<<" ";
    //         k++;
    //     }
    //     cout<<endl;
    //     l++;
    //     i++;
    // }
    // *********************************************************************** */
    // int a;
    // cout << "Enter number of rows " << endl;
    // cin >> a;
    
    // int i =1;
    // while(i<=a){
    //     int k = 2;
    //     while (k<=i)
    //     {
    //         cout<<" ";
    //         k++;
    //     }
    //     int j = i; 
    //     while (j<=a){
    //         cout<<i;
    //         j++;
    //     }
            
    //     cout<<endl;        
    //     i++;
    // }


    // *********************************************************************** */
    // int a;
    // cout << "Enter number of rows " << endl;
    // cin >> a;
    
    // int i =1;
    // int l = 2;
    // int o = i-1;
    // while(i<=a){
    //     int j =l;
    //     while (j<=a)
    //     {
    //         cout<<" ";
    //         j++;
    //     }
    //     int k = 1;
    //     while (k<=i)
    //     {
    //         cout<<k;
    //         k++;
    //     }
    //     int n = o;
    //     while (n<=i&&n>=1)
    //     {
    //         cout<<n;
    //         n--;
    //     }
        
    //     int m = l;
    //     while (m<=a)
    //     {
    //         cout<<" ";
    //         m++;
            
    //     }
        
    //     cout<<endl;        
    //     l++;
    //     o++;
    //     i++;

    // }

    // *********************************************************************** */
    // int a;
    // cout << "Enter number of rows " << endl;
    // cin >> a;
    
    // int i =1;
    // while(i<=a){
    //     int j =a-i;
    //     while (j)
    //     {
    //         cout<<" ";
    //         j--;
    //     }
    //     int k = 1;
    //     while (k<=i)
    //     {
    //         cout<<k;
    //         k++;
    //     }
    //     int n = i-1;
    //     while (n)
    //     {
    //         cout<<n;
    //         n--;
    //     }
    //     cout<<endl;        
    //     i++;

    // }

    // *********************************************************************** */
    // int a;
    // cout << "Enter number of rows " << endl;
    // cin >> a;
    
    int i =1;
    int x = a;
    while(i<=a){
        //first triangle
        int j = 1;
        while (j<=x)
        {
            cout<<j;
            j++;
        }
        // second triangle'
        int star = 1;
        while (star<=i-1)
        {
            cout<<"*";
            star++;
        }
        //third triangle
        int star2 = 1;
        while (star2<=i-1)
        {
            cout<<"*";
            star2++;
        }
        //forth triangle
        int k = x;
        while (k>=1)
        {
            cout<<k;
            k--;        
        }
        cout<<endl;        
        i++;
        x--;

    }





}