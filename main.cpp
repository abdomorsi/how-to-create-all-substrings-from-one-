#include <iostream>
#include <vector>
#include <set>
#include <string.h>
using namespace std;

  vector <string> v(100);

  int q=0 , w=0 , fail = 0;
  void create_SUBS ( string s , int index = 0 )
  {
    ++fail;
    int len = s.size();
    int limit = len;

    for ( int i = index ; i < len ; i++ ){

        //cout << s[i];
        v[q]=s[i];
        q++;
        int j = i+1;

        for (  j ; j < limit ; j++ ){
            string temp = "";
            temp+=v[w];
            temp+=s[j];
            v[q]= temp;
            q++;

            //if (j == limit-1){ j = ++c; }
            //cout << s[i] << s[j];
        }
        w++;
    }
    w=q;
    set < string > st_strigs;
    set < string > :: iterator  itr ;

    for( int i = 0 ; i <= q ; i++ ){ st_strigs.insert(v[i]);}





    if ( fail == len-1 ){
     for(  itr = st_strigs.begin() ; itr != st_strigs.end() ; itr++ ){
        cout << *itr << endl;
        }

            return ;
    }
    else create_SUBS(s , fail);

  }



int main()
{

    string str = "abcd";

    create_SUBS(str);


//    create_SUBS(str.substr(2,str.size()));



}
