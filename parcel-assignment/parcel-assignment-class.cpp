#include <iostream>

using namespace std;
class Parcel {
private:
    int id;
    string senderName;
    string senderAddress;
    string receiverName;
    string receiverAddress;
    int weight;
    int fee;
    int feePerGram;
    int additionalFeePerGram;
public:

    void setFeePerGram(int feePerGram){
        this->feePerGram = feePerGram;
    }
    int getFeePerGram(){
        return this->feePerGram ;
    }
    void setId(int id){
        this->id = id;
    }
    int getId(){
        return this->id;
    }

    void setSenderName(string sname){
        senderName = sname;
    }
    string getSenderName(){
        return senderName;
    }

    void setSenderAddress(string saddress){
        senderAddress = saddress;
    }
    string getSenderAddress(){
        return senderAddress;
    }

    void setReceiverName(string rname){
        receiverName = rname;
    }
    string getReceiverName(){
        return receiverName;
    }

    void setReceiverAddress(string raddress){
        receiverAddress = raddress;
    }
    string getReceiverAddress(){
        return this->receiverAddress;
    }

    void setWeight(int weight){
        this->weight = weight;
    }
    int getWeight(){
        return this->weight;
    }

    void setFee(int f){
        fee = f;
    }
    int getFee(){
        return fee;
    }
    int getAdditionalFeePerGram(){
        return this->additionalFeePerGram;

    }
    void setAdditionalFeePerGram(int additionalFeePerGram){
        this->additionalFeePerGram = additionalFeePerGram;
    }

    void displayNormalReceipt(){
        int overWeightCharges = 0;
        int totalOverWeight = 0;
        int totalCharges = this->fee;

        if(this->weight > 900 ){

            totalOverWeight = this->weight - 900 ;
            overWeightCharges =  totalOverWeight * this->feePerGram ;
            totalCharges =  totalCharges + overWeightCharges;

        }


        cout<<"\n\nShipment Receipt"<<endl;
        cout<<"-------------------------"<<endl;
        cout<<"Receipt No. : "<<this->id<<endl;
        cout<<"Sender Name : "<<this->senderName<<endl;
        cout<<"Sender Address : "<<this->senderAddress<<endl;
        cout<<"Receiver Name : "<<this->receiverName<<endl;
        cout<<"Receiver Address : "<<this->receiverAddress<<endl;
        cout<<"Parcel Weight : "<<this->weight<<endl;
        if(totalOverWeight>0) {
            cout<<"OverWeight : "<<totalOverWeight<<"g"<<endl;
        } else {
            cout<<"OverWeight : No"<<endl;
        }

        cout<<"Basic Charges : "<<this->fee<<endl;
        cout<<"OverWeight Charges: "<<overWeightCharges<<endl;
        cout<<"Shipment Total Charges: "<<totalCharges<<endl;
        cout<<"Type of Shipment: Normal"<<endl;
    }

    void displayUrgentReceipt(){
        int overWeightCharges = 0;
        float totalCharges = 0;
        int totalOverWeight = 0;
        float basicCharges = this->fee;
        basicCharges =  (basicCharges + (basicCharges * 0.5));
        totalCharges =  basicCharges ;
        int appliedRate = 0;
        if(this->weight > 900 ){

            totalOverWeight = this->weight - 900 ;

            appliedRate =  (this->feePerGram  + this->additionalFeePerGram);
            overWeightCharges =  totalOverWeight * appliedRate;
            totalCharges =  basicCharges + overWeightCharges;
        }



        cout<<"\n\nShipment Receipt"<<endl;
        cout<<"-------------------------"<<endl;
        cout<<"Receipt No. : "<<this->id<<endl;
        cout<<"Sender Name : "<<this->senderName<<endl;
        cout<<"Sender Address : "<<this->senderAddress<<endl;
        cout<<"Receiver Name : "<<this->receiverName<<endl;
        cout<<"Receiver Address : "<<this->receiverAddress<<endl;
        cout<<"Parcel Weight : "<<this->weight<<endl;
        cout<<"Applied Rate : "<<appliedRate<<endl;
        if(totalOverWeight>0){
            cout<<"OverWeight : "<<totalOverWeight<<"g"<<endl;
        }else{
            cout<<"OverWeight : No"<<endl;
        }

        cout<<"Basic Charges : "<<basicCharges<<endl;
        cout<<"OverWeight Charges: "<<overWeightCharges<<endl;
        cout<<"Shipment Total Charges: "<<totalCharges<<endl;
        cout<<"Type of Shipment: Urgent"<<endl;

    }
};
main() {

    int receiptnum, weight, charges,serviceType,overFee;
    string sname, saddress, rname, raddress;

    while(1) {
        cout<<"Enter 1 for normal and 2 for urgent service.";
        cin>>serviceType;
        cout<<"Selected Type of Serice  : "<<serviceType<<endl;
        if(serviceType == 1 || serviceType == 2){
            break;
        } else {
            cout<<"Selected Type Of Service is Incorrect"<<endl;
        }


    }



    cout<<"Enter receipt no.: ";
    cin>>receiptnum;
    cin.ignore();

    cout<<"Enter sender name: ";
    getline(cin, sname);

    cout<<"Enter sender address: ";
    getline(cin, saddress);

    cout<<"Enter receiver name: ";
    getline(cin, rname);

    cout<<"Enter receiver address: ";
    getline(cin, raddress);

    cout<<"Enter weight(in grams)) of parcel: ";
    cin>>weight;

    cout<<"Basic Charges of Parcel: ";
    cin>>charges;

    cout<<"Fee per Gram (Overweight): ";
    cin>>overFee;
    int additionalFee = 0;
    Parcel p;
    p.setId(receiptnum);

    p.setSenderName(sname);
    p.setSenderAddress(saddress);
    p.setReceiverName(rname);
    p.setReceiverAddress(raddress);
    p.setWeight(weight);
    p.setFee(charges);
    p.setFeePerGram(overFee);
    if(serviceType == 2 ){
        cout<<"Enter Additional Fee Per Gram : ";
        cin>>additionalFee;
        p.setAdditionalFeePerGram(additionalFee);
        p.displayUrgentReceipt();
    }else{
        p.displayNormalReceipt();

    }

}

