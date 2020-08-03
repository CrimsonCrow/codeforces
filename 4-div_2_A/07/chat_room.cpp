 #include <iostream>
 #include <string>

 int main() {
   std::string st = "";
   std::string ky = "hello";
   std::cin >> st;
   int c = 0;

   for (auto i = 0; i < st.length(); i++) {
     if (st[i] == ky[c]) {
       c++;
       if (c == 5) {
         std::cout << "YES\n";
         break;
       }
     }
   }
   if (c != 5) {
     std::cout << "NO\n";
   }

   return 0;
 }
