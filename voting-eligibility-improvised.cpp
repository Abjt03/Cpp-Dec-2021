#include <iostream>

using namespace std;

void eligibility (int v_age) {
    int age;
    cout<<"Enter Your Age : ";
    cin>>age;
    cout<<"\nYour Country's Voting Eligibility Age is "<<v_age<<endl;
    if(age>=v_age)
    cout<<"You are \'Eligible\' for Voting in your Country";
    else {
        cout<<"You are \'Not Eligible\' for Voting in your Country";
        cout<<"\nYou need to wait \'"<<(v_age-age)<<"\' years to be Eligible to Vote";
    }
}

int main()
{
   int ch,a;
   cout<<"Number of people whose eligibilty is to be found : ";
   cin>>a;
   do {
   cout<<"\n\nSelect Value corresponding to your Country :\n1 <- Nicaragua, Scotland, Isle of Man, Guernsey, Ethiopia, Ecuador, Cuba, Brazil, Austria\n2 <- Sudan, South Sudan, North Korea, Indonesia, Greece, East Timor\n3 <- India,Bangladesh,Malaysia, Afghanisthan, China, Japan, United States, Canada, France, Italy, England\n4 <- South Korea\n5 <- Nauru, Taiwan, Bahrain\n6 <- Malaysia, Oman, Singapore, Kuwait\n";
   lbl:
   cout<<"\nPlease Enter the Value : ";
   cin>>ch;
   switch(ch) {
        case 1 : eligibility(16); break;
        case 2 : eligibility(17); break;
        case 3 : eligibility(18); break;
        case 4 : eligibility(19); break;
        case 5 : eligibility(20); break;
        case 6 : eligibility(21); break;
        default: cout<<"Invalid Choice"; goto lbl;
   }
   a--;
   }while(a);
   return 0;
}
