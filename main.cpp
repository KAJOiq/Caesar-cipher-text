#include<iostream>
using namespace std;

int main()
{
	string crypt_text = "kujlth"; 
  for(int i=0 ; i<26 ; i++)
    {
      for(int j=0 ; j<crypt_text.length() ; j++)
        {
          if(crypt_text[j] != ' ')
          {
            char normal_text = char (int(crypt_text[j]+i-97)%26 +97);
            cout << normal_text;
          }
          else
          {
            cout << ' ';
          }
        }
      cout << endl;
    }

  
	return 0;
}