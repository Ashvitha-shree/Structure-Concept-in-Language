#include<stdio.h>
struct passenger_details{
      int passenger_id;
      char Name[30];
      long long mobile_no;

};
int main(){
struct flight_booking{
    int FID;
    char Destination[100];
    int fare;
    struct Journey_date{
       short day_number;
       char month_name[20];
       int year;
    }JD;
};
    struct flight_booking FB;
    printf("Enter the Flight ID");
    scanf("%d",&FB.FID);
    printf("Enter the Destination");
    scanf("%s",FB.Destination);

    printf("Enter the day");
    scanf("%hd",&FB.JD.day_number);

    printf("Enter the month");
    scanf("%s",FB.JD.month_name);

    printf("Enter the year");
    scanf("%d",&FB.JD.year);
    printf("Enter the Fare");
    scanf("%d",&FB.fare);


    int n;
     printf("Enter the Number of tickets u want to book");
     scanf("%d",&n);
     struct passenger_details details[n];
     for (int i=0;i<n;i++){
        printf("\nEnter the passenger id");
        scanf("%d",&details[i].passenger_id);
        printf("Enter the passenger name");
        scanf("%s",&details[i].Name);
        printf("Enter the mobile number");
        scanf("%ld",&details[i].mobile_no);
        printf("\n\n...........person %d detail was stored successfully...............\n\n",i+1);

     }
    printf("*******Passenger Details*******\n\n");
     for (int i=0;i<n;i++){
        printf("Passenger id %d\n",details[i].passenger_id);

        printf("passenger name %s\n",details[i].Name);

        printf("passenger mobile number %ld\n",details[i].mobile_no);
}

    printf("\n\n................*****Flight Booking Details*****............... \n\n");
    printf("FID :%d\n",FB.FID);
    printf("Destination :%s\n",FB.Destination);
    printf("Journey Date :%hd- %s - %d",FB.JD.day_number,FB.JD.month_name,FB.JD.year);
    printf("\n==========\n");
    printf("Total number of ticket booked %d\n\n",n);
    printf("Total cost = %d",(n*FB.fare));
    return 0;

}
