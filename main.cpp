//  Term1 proj
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

void Menu(){
    cout<<"Operators"<<endl<<endl;
    cout <<"[+]" <<endl << "[-]" <<endl << "[/]" <<endl << "[%]" << endl<<"[*]" << endl<<"[S]" << endl<<"[$]" << endl<<"[e]" << endl<<"[#]" << endl<<"[p]" << endl<<"[l]" << endl<<"[f]" << endl<<"[v]" << endl<<"[^]" << endl<<"[<]"<< endl<<"[a]" <<endl<<"[M]" <<endl<<"[G]" <<endl;
    cout<< endl <<"Choose: ";
}
//--------------------------------------------
void Sum(){
    cout <<"You Choose [+]"<<endl;
    float a , b, sum;
    cout<<"Enter Numbers: "<<endl;
    cin>>a>>b;
    sum = a + b;
    cout<<a<<" + " << b << " = " <<sum<<endl;
}
//--------------------------------------------
void Minus(){
    cout <<"You Choose [-]"<<endl;
    float a , b, minus;
    cout<<"Enter Numbers: "<<endl;
    cin>>a>>b;
    minus = a - b;
    cout<<a<<" - " << b << " = " <<minus<<endl;
}
//--------------------------------------------
void Division(){
    cout <<"You Choose [/]"<<endl;
    float a , b, division;
    cout<<"Enter Numbers: "<<endl;
    cin>>a>>b;
    division = a / b;
    cout<<a<<" / " << b << " = " <<division<<endl;
}
//--------------------------------------------
void Remain(){
    cout <<"You Choose [%]"<<endl;
    int a , b;
    float remain;
    cout<<"Enter Numbers: "<<endl;
    cin>>a>>b;
    remain = a % b;
    cout<<a<<" % " << b << " = " <<remain<<endl;
}
//--------------------------------------------
void Multipli(){
    cout <<"You Choose [*]"<<endl;
    float a , b, multi;
    cout<<"Enter Numbers: "<<endl;
    cin>>a>>b;
    multi = a * b;
    cout<<a<<" * " << b << " = " <<multi<<endl;
}
//--------------------------------------------
void Square(){
    cout <<"You Choose [S]"<<endl;
    float a,S;
    cout<<"Enter Number: "<<endl;
    cin>>a;
    S = sqrt(a);
    cout<<"The Square of "<<a<<" is "<<S<<endl;
}
//--------------------------------------------
void Sinus(){
    cout <<"You Choose [$]"<<endl;
    float a,sinus;
    cout<<"Enter Number: "<<endl;
    cin>>a;
    sinus = sin(a);
    cout<<"The sinus of "<<a<<" is "<<sinus<<endl;
}
//--------------------------------------------
void Exponential(){
    cout <<"You Choose [e]"<<endl;
    float a,exponential;
    cout<<"Enter Number: "<<endl;
    cin>>a;
    exponential = exp(a);
    cout<<"The exponential of "<<a<<" is "<<exponential<<endl;
}
//--------------------------------------------
void Cosine(){
    cout <<"You Choose [#]"<<endl;
    double a,cosine;
    cout<<"Enter Number: "<<endl;
    cin>>a;
    cosine = cos(a);
    cout<<"The cosine of "<<a<<" is "<<cosine<<endl;
}
//--------------------------------------------
void Power(){
    cout <<"You Choose [p]"<<endl;
    double a,b,power;
    cout<<"Enter Numbers: "<<endl;
    cin>>a>>b;
    power = pow(a, b);
    cout<<a<<" to the power of "<<b<< " becomes "<<power<<endl;
    
}
//--------------------------------------------
void Logarithm(){
    cout <<"You Choose [l]"<<endl;
    double a,log;
    cout<<"Enter Number: "<<endl;
    cin>>a;
    log = log10(a);
    cout<<"log "<<a<<" is "<<log<<endl;
}
//--------------------------------------------
void Factorial(){
    cout<<"You Choose [f]"<<endl;
    int fact = 1,a;
    cout<<"Enter A Number: "<<endl;
    cin>>a;
    for (int i = 1; i <= a; i++){
        fact *= i;
    }
    cout<<"Factorial: "<<fact;
}
//--------------------------------------------
void Variance(){
    cout <<"You Choose [v]"<<endl;
    int n;
    float avg,sum = 0,t,var;
    cout <<"Enter num count: "<<endl;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cout <<"Enter num: ";
        cin>>a[i];
        sum +=a[i];
    }
    avg = sum/n;
    sum = 0.0;
    
    for(int i =0 ; i<n ; i++){
        t=a[i]-avg;
        t=pow(t,2);
        sum=sum+t;
    }
    var=sum/n;
    cout<<endl<<"Variance is : "<<var<<endl;
    
}
//--------------------------------------------
void upMatrix(){
    cout<<"You Choose [^]"<<endl;
    int i,j;
    int a[10][10];
    for(i =0;i<10;i++){
        for(j=0;j<10;j++){
            if (i<=j) {
                a[i][j]=1;
            }
            else{
                a[i][j]=0;
            }
        }
    }
    cout <<"array : \n";
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            cout<<setw(5)<<a[i][j];
        }
        cout<<endl;
    }
}
//--------------------------------------------
void downMatrix(){
    cout<<"You Choose [<]"<<endl;
    int i,j;
    int a[10][10];
    for(i =0;i<10;i++){
        for(j=0;j<10;j++){
            if (i>=j) {
                a[i][j]=1;
            }
            else{
                a[i][j]=0;
            }
        }
    }
    cout <<"array : \n";
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            cout<<setw(5)<<a[i][j];
        }
        cout<<endl;
    }
}
//--------------------------------------------
void Average(){
    cout<<"You Choose [a]"<<endl;
    int n;
    float  sum=0, avg;
    cout <<"Enter num count: "<<endl;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cout <<"Enter num: ";
        cin>>a[i];
        sum +=a[i];
    }
    avg = sum/n;
    cout << "Average = " << avg;
}
//--------------------------------------------
void mathGame(){
    cout<<"You Choose [M]"<<endl;
    int num1 = 1 + (rand() % 100) ,num2 = 1 + (rand() % 100);
    int ans = num1 * num2,userAns;
    cout<<num1<<" * "<<num2<<" = ? ";
    cin>>userAns;
    if (userAns == ans) {
        cout<<"Good Job! "<<num1<<" * "<<num2<<" = "<<ans;
    }
    else {
        cout<<"You choose wrong!"<<endl<<"The answer is : "<< num1<<" * "<< num2<<" = "<<ans;
    }
}
//--------------------------------------------
void Shape(){
    int shNum;
    cout<<"Enter num(1-6) : ";
    cin>>shNum;
    cout<<"You Choose [G]"<<endl;
    switch (shNum) {
        case 1:
           
            cout<<"#########"<<endl;
            cout<<"### # ###"<<endl;
            cout<<"#### ####"<<endl;
            cout<<"### # ###"<<endl;
            cout<<"#### ####"<<endl;
            cout<<"#### ####"<<endl;
            cout<<"##"<<" "<<" "<<" "<<" "<<" "<<"##"<<endl;
            cout<<"###"<<" "<<" "<<" "<<"###"<<endl;
            cout<<"###"<<" "<<" "<<" "<<"###"<<endl;
            
            break;
        case 2:
            cout<<"#########"<<endl;
            cout<<"#########"<<endl;
            cout<<"##  #  ##"<<endl;
            cout<<"##  #  ##"<<endl;
            cout<<"#########"<<endl;
            cout<<"#  ###  #"<<endl;
            cout<<"## ### ##"<<endl;
            cout<<"###"<<" "<<" "<<" "<<"###"<<endl;
            cout<<"#########"<<endl;
            break;
        case 3:
            cout<<"#########"<<endl;
            cout<<"## ### ##"<<endl;
            cout<<"#"<<" "<<" "<<" "<<"#"<<" "<<" "<<" "<<"#"<<endl;
            cout<<"#"<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"#"<<endl;
            cout<<"#"<<"#"<<" "<<" "<<" "<<" "<<" "<<"#"<<"#"<<endl;
            cout<<"#"<<"#"<<" "<<" "<<" "<<" "<<" "<<"#"<<"#"<<endl;
            cout<<"#"<<"#"<<"#"<<" "<<" "<<" "<<"#"<<"#"<<"#"<<endl;
            cout<<"#"<<"#"<<"#"<<"#"<<" "<<"#"<<"#"<<"#"<<"#"<<endl;
            cout<<"#########"<<endl;
            break;
        case 4:
            cout<<"#########"<<endl;
            cout<<"#### ####"<<endl;
            cout<<"#"<<"#"<<"#"<<"#"<<" "<<" "<<"#"<<"#"<<"#"<<endl;
            cout<<"#"<<"#"<<"#"<<"#"<<" "<<" "<<" "<<"#"<<"#"<<endl;
            cout<<"#"<<"#"<<"#"<<"#"<<" "<<" "<<" "<<" "<<"#"<<endl;
            cout<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<endl;
            cout<<"#"<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"#"<<endl;
            cout<<"#"<<"#"<<" "<<" "<<" "<<" "<<" "<<"#"<<"#"<<endl;
            cout<<"#########"<<endl;
            break;
        case 5:
            cout<<"#### ####"<<endl;
            cout<<"#"<<"#"<<"#"<<" "<<" "<<" "<<"#"<<"#"<<"#"<<endl;
            cout<<"#"<<"#"<<" "<<" "<<" "<<" "<<" "<<"#"<<"#"<<endl;
            cout<<"#"<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"#"<<endl;
            cout<<"#"<<"#"<<" "<<" "<<" "<<" "<<" "<<"#"<<"#"<<endl;
            cout<<"#"<<"#"<<" "<<" "<<" "<<" "<<" "<<"#"<<"#"<<endl;
            cout<<"#"<<"#"<<" "<<" "<<"#"<<" "<<" "<<"#"<<"#"<<endl;
            cout<<"#"<<"#"<<" "<<" "<<"#"<<" "<<" "<<"#"<<"#"<<endl;
            cout<<"#"<<"#"<<" "<<" "<<"#"<<" "<<" "<<"#"<<"#"<<endl;
            break;
        case 6:
            cout<<"#### ####"<<endl;
            cout<<"#"<<"#"<<"#"<<" "<<" "<<" "<<"#"<<"#"<<"#"<<endl;
            cout<<"#"<<"#"<<"#"<<" "<<"#"<<" "<<"#"<<"#"<<"#"<<endl;
            cout<<"#"<<"#"<<"#"<<" "<<" "<<" "<<"#"<<"#"<<"#"<<endl;
            cout<<"#"<<"#"<<" "<<" "<<" "<<" "<<" "<<"#"<<"#"<<endl;
            cout<<"#"<<" "<<" "<<" "<<" "<<" "<<" "<<" "<<"#"<<endl;
            cout<<"#"<<"#"<<"#"<<" "<<" "<<" "<<"#"<<"#"<<"#"<<endl;
            cout<<"#"<<"#"<<"#"<<" "<<"#"<<" "<<"#"<<"#"<<"#"<<endl;
            cout<<"#"<<"#"<<" "<<"#"<<"#"<<"#"<<" "<<"#"<<"#"<<endl;
            break;
            
        default:
            cout<<"Worng number!"<<endl;
            break;
    }
    
}
//--------------------------------------------
int main() {
    char oprt;
    char ans;
    while (1) {
        Menu();
        cin >> oprt;
        cout<<endl;
        switch (oprt) {
            case '+':
                Sum();
                break;
                
            case '-':
                Minus();
                break;
                
            case '/':
                Division();
                break;
            case '%':
                Remain();
                break;
                
            case '*':
                Multipli();
                break;
            case 'S':
                Square();
                break;
            case '$':
                Sinus();
                break;
            case 'e':
                Exponential();
                break;
            case '#':
                Cosine();
                break;
            case 'p':
                Power();
                break;
            case 'l':
                Logarithm();
                break;
            case 'f':
                Factorial();
                break;
            case 'v':
                Variance();
                break;
            case 'a':
                Average();
                break;
            case 'M':
                mathGame();
                break;
            case '^':
                upMatrix();
                break;
            case '<':
                downMatrix();
                break;
            case 'G':
                Shape();
                break;
            default:
                cout << "You Choose Wrong" <<endl;
                break;
        }
        
        cout<<endl<<"New task? (Y & N)"<<endl;
        cin >> ans;
        if (ans=='N') {
            break;
        }
        else if (ans=='Y') {
            continue;
        }
        else{
            cout<<"you choose wrong"<<endl;
        }
    }
    return 0;
}

