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
