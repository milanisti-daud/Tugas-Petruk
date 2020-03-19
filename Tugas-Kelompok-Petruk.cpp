#include<bits/stdc++.h>
using namespace std;

int A[100];

void masukan (int *);
void hasil (int *);

int main (){
   int n;
   cout << "Jumlah angka yang ingin di input : ";
   cin >> n;
   masukan (&n);
   hasil (&n);

   return 0;
}

void masukan (int *n){
   int i;
   for (i = 0; i < *n; i++){
      cout << "Masukan angka ke " << i + 1 << " : ";
      cin >> A[i];
   }
}

void hasil (int *n){
   int i, max, min;
   max = A[0];
   for (i = 0; i < *n; i++){
       if (max < A[i]){
           max = A[i];
       }
       else if (min > A[i]){
           min = A[i];
       }
   }

   cout << "\nNilai terbesar adalah :" << max << endl;
   
