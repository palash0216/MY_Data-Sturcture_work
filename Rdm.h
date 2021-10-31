// #include <stdio.h>      /* printf, scanf, puts, NULL */
// #include <iostream>
// using namespace std;
int *Rdm(int n)
{
  int iSecret, iGuess;
  int *p;
  p = new int(n);
  srand(time(NULL));
  for (int i = 0; i < n; i++)
  {
    p[i] = rand() % 100;
  }
  return p;
  // delete []p;
}
// int main ()
// {
//   int n;
//   cout<<"Enter the size of the array : ";
//   cin>>n;
//   Rdm(n);

// }
