//LAMBDA EXPRESSION -> ANONYMOURS INLINE FUNCTION (INLINE)
#include<iostream>
using namespace std;

int main(){
/* SYNTAX:  
    [capture_list](parameters) -> return type { // compiler can detect return type automatically
        body ;
    }
    capture list: values available in lambda expression -> surrounding variables we can access using names
        [] -> empty / can't access surrounding variables
        [=] -> capture by value / copies pass
        [&] -> capture by reference / same variables pass
        [a,&b] -> specific capture / a - capture by value, b - capture by reference
    parameters: values we pass during function call -> can be pass by value , pass by reference
    return type: 
        thing function is returning / campiler can automatically detect 
        we cannot have to write
*/
    int x = 3, y = 23;
    []() -> void { // can't acccess outside variables // no parameters
        cout << "Hello World!";
    }();//we write () at the end to function call
    /*
    HOW TO USE LAMBDA EXPRESSION REPREATEDLY
    -> just store the expression into the variable and use that for function call as many times 
    */
   auto fun = [=](int a) -> int {
        cout << a + x << endl;
        return a + x;
   };
   fun(2);
   fun(3);
   fun(5);
   /*now look at this lambda function it is just creating a lambda function but not executing it
   [&](){
    x = 5;
   };
   now when you print cout << x; it will still print 3 to call this you must write function call operator () at the end
   */
  [&](){ // by reference
    x = 5;
   }();
   cout << x << endl;
    return 0;
}