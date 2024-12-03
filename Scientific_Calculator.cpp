#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int option;
    cout<<"\t\t\t_________________________________________________________________\n";
    cout<<"\t\t\t******************** SCIENCETIFIC CALCULATOR ********************\n";
    cout<<"\t\t\t\t---------------------------------------------------\n";
    cout<<"\t\t\t\t\t [select your option(1 to 15)]\n";
    cout<<"\t\t\t_________________________________________________________________\n";
    cout<<"________________________________________________________________________________________________________________________";
    cout<<"\n1.Addition\t\t\t";
    cout<<"2.Subtraction\t\t\t";
    cout<<"3.Multiplication\n";
    cout<<"4.Division\t\t\t";
    cout<<"5.Formulas\t\t\t";
    cout<<"6.Root function\n";
    cout<<"7.Power function\t\t";
    cout<<"8.Factorial\t\t\t";
    cout<<"9.Perfect number\n";
    cout<<"10.Even\t\t\t\t";
    cout<<"11.odd\t\t\t\t";
    cout<<"12.Middle term\n";
    cout<<"13.Scientific Constants\t\t";
    cout<<"14.logarithmic functions\t";
    cout<<"15.Trigonometric functions\n";
    cout<<"\n| Press What You Want |= ";
    cin>>option;



//Addition

    if(option == 1){
        double positive1,positive2,sum=0;
        cout<<"enter two positive numbers: ";
        cin>>positive1>>positive2;
        sum = (positive1+positive2);
        cout<<"Result:= "<<sum;
    }



//Subtraction

     else if(option == 2){
        double negative1,negative2,sum=0;
        cout<<"enter your 1st numbers: ";
        cin>>negative1;
        cout<<"enter your 2nd numbers: ";
        cin>>negative2;
        sum = (negative1-negative2);
        cout<<"Result:= "<<sum;
     }


//Multiplication

     else if (option == 3){
        double a,n,multiply;
        cout<<"enter your two numbers: ";
        cin>>a>>n;
        multiply = (a*n);
        cout<<"Result:= "<<multiply;
     }



//Division

     else if (option == 4){
        double b,c,division;
        cout<<"enter your 1st number: ";
        cin>>b;
        cout<<"enter your 2nd number: ";
        cin>>c;
        division = (b/c);
        cout<<"Result:= "<<division;
     }



//Formulas

     else if (option == 5){
            int option1;
        cout<<"\n1.Trigonometric formulas\n";
        cout<<"2.Algebra formulas\n";
        cout<<"choose option 1/2:= ";
        cin>>option1;
        if(option1==1){
            cout<<"\n1.sin(x+y) = sin(x)cos(y)+cos(x)sin(y)\n";
            cout<<"2.cos(x+y) = cos(x)cos(y)-sin(x)sin(y)\n";
            cout<<"3.tan(x+y) = (tan x + tan y)/ (1-tan x * tan y)\n";
            cout<<"4.sin(x-y) = sin(x)cos(y)-cos(x)sin(y)\n";
            cout<<"5.cos(x-y) = cos(x)cos(y) + sin(x)sin(y)\n";
            cout<<"6.tan(x-y) = (tan x-tan y)/ (1+tan x * tan y)\n";
        }
            if (option1 == 2){
                cout<<"\n1. a^2 - b^2 = (a - b)(a + b)\n";
                cout<<"2. (a+b)^2 = a^2 + 2ab + b^2\n";
                cout<<"3. a^2 + b^2 = (a + b)^2 - 2ab\n";
                cout<<"4. (a - b)^2 = a^2 - 2ab + b^2\n";
                cout<<"5. (a + b + c)^2 = a^2 + b^2 + c^2 + 2ab + 2bc + 2ca\n";
                cout<<"6. (a - b - c)2 = a^2 + b^2 + c^2 - 2ab + 2bc - 2ca\n";
                cout<<"7. (a + b)3 = a^3 + 3a2b + 3ab^2 + b^3" ;
                cout<<"(a + b)^3 = a^3 + b^3 + 3ab(a + b)\n";
                cout<<"8. (a - b)^3 = a^3 - 3a^2 b + 3ab^2 - b^3\n";
                cout<<"9. a^3 - b^3 = (a - b)(a^2 + ab + b^2)\n";
                cout<<"10. a3 + b3 = (a + b)(a^2 - ab + b^2)\n";
                cout<<"11. (a + b)^4 = a^4 + 4a^3 b + 6a^2 b^2 + 4ab^3 + b^4\n";
                cout<<"12. (a - b)^4 = a^4 - 4a^3 b + 6a^2 b^2 - 4ab^3 + b^4\n";
                cout<<"13. a^4 - b^4 = (a - b)(a + b)(a^2 + b^2)\n";
                cout<<"14. a^5 - b^5 = (a - b)(a^4 + a^3 b + a^2 b^2 + ab^3 + b^4)\n\n";
                cout<<"1. n! = (1).(2).(3)...(n - 1).n\n";
                cout<<"2. n! = n(n - 1)! = n(n - 1)(n - 2)! = ...\n";
                cout<<"3. 0! = 1";

        }

     }



//Constant

     else if (option == 13){
        cout<<"\n me 9.109 * 10^-31 kg/n";
        cout<<" Mp 1.6726 * 10^-27 kg/n";
        cout<<" e 1.6022 * 10^-19 C\n";
        cout<<" c 2.9979 * 108 m s^-1\n";
        cout<<" µ0 4*3.1416 * 10^-7 H m^-1\n";
        cout<<" 0 8.854 * 10^-12 F m^-1\n";
        cout<<" h 6.626 * 10^-34 J s\n";
        cout<<" kB 1.3807 * 10^-23 J K^-1\n";
        cout<<" R = kB/mH 8.250 * 103 J kg^-1 K^-1\n";
        cout<<" R 8.315 J mol^-1 K^-1\n";
        cout<<" NA 6.022 * 1023 mol^-1\n";
        cout<<" Standard molar volume 22.414 * 10^-3 m3 mol^-1\n";
        cout<<" u 931.5 MeV/c2 = 1.660538* 10^-27 kg\n";
        cout<<" mH 1.0078u = 1.6735 * 10^-27 kg\n";
        cout<<" a0 5.292 * 10^-11 m\n";
        cout<<" a = 4σ/c 7.561 * 10^-16 J m^-3 K^-4\n";
        cout<<" G = 6.673 * 10^-11 N m2 kg^-2";
     }



//Root Funtion

     else if (option == 6){
        int option2;
        cout<<"1.Compute square root\n";
        cout<<"2.Compute cubic root\n";
        cout<<"choose option 1/2: ";
        cin>>option2;
        if (option2 == 1){
            double d,root;
        cout<<"\nenter your value: ";
        cin>>d;
        root = sqrt(d);
        cout<<"Result:= "<<root;
        }
        if (option2 == 2){
            double d,e,root;
        cout<<"\nenter your value: ";
        cin>>d;
        root = cbrt(d);
        cout<<"Result:= "<<root;
        }
     }



//Power Funtion

     else if (option == 7){
        double base,exponent,power;
        cout<<"enter your base: ";
        cin>>base;
        cout<<"enter your exponent: ";
        cin>>exponent;
        power = pow(base,exponent);
        cout<<"Result:= "<<power;
     }



//Middle term

     else if (option == 12){
        int a,c,b,sum,x1,x2;
        cout<<"enter the value of b= ";
        cin>>b;
        cout<<"enter the value of a= ";
        cin>>a;
        cout<<"enter the value of c= ";
        cin>>c;
        x1 =((-b+sqrt((b*b)-(4*a*c)))/(2*a));
        x2 =((-b-sqrt((b*b)-(4*a*c)))/(2*a));
        cout<<"X1="<<x1;
        cout<<"\nX2="<<x2;
     }



//Even

     else if (option == 10){
        int range1,range2;

        cout<<"enter your 1st range: ";
        cin>>range1;
        cout<<"enter your last range: ";
        cin>>range2;
        for(int i=range1; i<=range2; i++){
                if(i%2==0){
                  cout<<i<<' ';
             }
        }

     }



//Odd

     else if(option == 11){
        int range1,range2;
        cout<<"enter your 1st range: ";
        cin>>range1;
        cout<<"enter your last range: ";
        cin>>range2;
        for(int i=range1; i<=range2; i++ ){
            if(i%2!=0){
                cout<<i<<' ';
             }
        }

     }



//Logarithm

     else if(option == 14){
        int option3;
        cout<<"1.Compute natural logarithm\n";
        cout<<"2.Compute common logarithm\n";
        cout<<"choose option 1/2: ";
        cin>>option3;
        if (option3 == 1){
            double d,lg;
        cout<<"\nenter your value: ";
        cin>>d;
        lg = log(d);
        cout<<"Result:= "<<lg;

        }
        if (option3 == 2){
            double d,lg10;
        cout<<"\nenter your value: ";
        cin>>d;
        lg10 = log10(d);
        cout<<"Result:= "<<lg10;

        }

     }


//Trigonomitre

     else if(option == 15){
        int option4;
        cout<<"1.Compute cosine\n";
        cout<<"2.Compute sine\n";
        cout<<"3.Compute tangent\n";
        cout<<"choose option : ";
        cin>>option4;
        if (option4 == 1){
            double k,c,pi=3.1416;
        cout<<"\nenter your value: ";
        cin>>k;
        c = cos(k*pi/180);
        cout<<"Result:= "<<c;

        }
        if (option4 == 2){
            double f,s,pi=3.1416;
        cout<<"\nenter your value: ";
        cin>>f;
        s = sin (f*pi/180);
        cout<<"Result:= "<<s;

        }
        if (option4 == 3){
            double w,t,pi=3.1416;
        cout<<"\nenter your value: ";
        cin>>w;
        t = tan (w*pi/180);
        cout<<"Result:= "<<t;

        }

     }


//Factorial

     if (option == 8){
     	int n, fact=1;
     	cout<<"enter positive number: ";
     	cin>>n;
     	for(int i=1; i<=n; i++){
     		fact=fact*i;
		 }
		 cout<<"Result: "<<fact;

	 }


	 if (option == 9){
	 	int n,i=1,sum=0;
    	cout << "Enter a number: ";
    	cin >> n;
       	while(i<n){
       	if(n%i==0)
       		sum=sum+i;
       		i++;
		}
		if (sum=n){
			cout<<sum<<'='<<"is perfect number";
		}
		else{
			cout<<sum<<'='<<"is not perfect number";
		}
	 }



    return 0;
}
