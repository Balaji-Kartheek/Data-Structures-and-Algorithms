#include<iostream>
using namespace std;

// end sem

/*
1. Write a C++ program with a class PATIENT for a group of 12 
diabetic patients holding data for their Patient ID, Name, Age, 
Fasting Glucose, Random Glucose. 
a) Call linear search function to display data of patient with a 
particular Patient ID.
b) Call bubble sort function to arrange data of patients according 
to Patient ID and display the sorted list. Also, write a function to 
display the details of the patient whose Fasting Glucose > 120 
and Random Glucose is > 150.
c) Apply binary search on the above sorted list (part b) to display 
data of a patient with Random Glucose value is 150
*/


class Patient{

    // Detals of the Patient should be in Public
    public:
        int ID;
        string name;
        int age;
        int fast_glucose,rand_glucose;

        void linear_search(int patient_id,int patients,Patient patient[]){
            for(int i=0;i<patients;i++){
                if(patient[i].ID==patient_id){
                    cout<<"Details of the Patient with ID: "<<patient_id<<endl;
                    cout<<"patient Name: "<<patient[i].name<<endl;
                    cout<<"patient Age: "<<patient[i].age<<endl;
                    cout<<"patient Fast Glucose: "<<patient[i].fast_glucose<<endl;
                    cout<<"patient Random Glucose: "<<patient[i].rand_glucose<<endl;
                }
            }
        }

        void BubbleSort(int patients,Patient patient[]){
            for(int i=0;i<patients-1;i++){
                for(int j=0;j<patients-i-1;j++){
                    if(patient[j].ID>patient[j+1].ID){
                        Patient temp = patient[j];
                        patient[j] = patient[j+1];
                        patient[j+1] = temp;                        
                    }
                }
            }
        }

        void Details(int patients,Patient patient[]){
            for(int i=0;i<patients;i++){
                cout<<"Details of the Patient: "<<endl;
                cout<<"Patient ID: "<<patient[i].ID<<endl;
                cout<<"patient Name: "<<patient[i].name<<endl;
                cout<<"patient Age: "<<patient[i].age<<endl;
                cout<<"patient Fast Glucose: "<<patient[i].fast_glucose<<endl;
                cout<<"patient Random Glucose: "<<patient[i].rand_glucose<<endl;
                cout<<"----------------------------"<<endl;
                cout<<endl;
            }
        }

        void getDetails(int patients,Patient patient[]){
            for(int i=0;i<patients;i++){
                if((patient[i].fast_glucose>120) && (patient[i].rand_glucose>150)){
                    cout<<"Details of the Patient: "<<endl;
                    cout<<"Patient ID: "<<patient[i].ID<<endl;
                    cout<<"patient Name: "<<patient[i].name<<endl;
                    cout<<"patient Age: "<<patient[i].age<<endl;
                    cout<<"patient Fast Glucose: "<<patient[i].fast_glucose<<endl;
                    cout<<"patient Random Glucose: "<<patient[i].rand_glucose<<endl;
                    cout<<"----------------------------"<<endl;
                    cout<<endl;
                }
            }
        }

        void getDetails_rg(int patients,Patient patient[]){
            int low = 0;
            int high = patients-1;

            while(low<high){
                
                while(low<high){
                    int mid = (low+high)/2;
                    if(patient[mid].rand_glucose==150){
                        cout<<"Details of the Patient: "<<endl;
                        cout<<"Patient ID: "<<patient[mid].ID<<endl;
                        cout<<"patient Name: "<<patient[mid].name<<endl;
                        cout<<"patient Age: "<<patient[mid].age<<endl;
                        cout<<"patient Fast Glucose: "<<patient[mid].fast_glucose<<endl;
                        cout<<"patient Random Glucose: "<<patient[mid].rand_glucose<<endl;
                        cout<<"----------------------------"<<endl;
                        cout<<endl;
                    }
                    else if(patient[mid].rand_glucose<150){
                        high = mid-1;
                    }else{
                        low = mid+1;
                    }
                }
            }
        }

};



int main(){
    //main function

    // Details of patients

    cout<<"Enter Number of patients: "<<endl;
    int patients;
    cin>>patients;

    Patient patient[patients];         //multiple objects declaration using arrays

    for(int i=0;i<patients;i++){
        cout<<"Enter ID of patient: "<<i+1<<endl;
        cin>>patient[i].ID;

        cout<<"Enter Name of patient: "<<i+1<<endl;
        cin>>patient[i].name;

        cout<<"Enter Age of patient: "<<i+1<<endl;
        cin>>patient[i].age;

        cout<<"Enter Fast Glucose of patient: "<<i+1<<endl;
        cin>>patient[i].fast_glucose;

        cout<<"Enter Random Glucose of patient: "<<i+1<<endl;
        cin>>patient[i].rand_glucose;

    }


    // Display Details of a particular paient

    cout<<"Enter the Patient ID to get the Details: "<<endl;
    int patient_id;
    cin>>patient_id;

    Patient method;
    // method object is useful to call functions in the Patient class 
    
    method.linear_search(patient_id,patients,patient);

    method.BubbleSort(patients,patient);

    method.Details(patients,patient);

    method.getDetails(patients,patient);

    method.getDetails_rg(patients,patient);
}