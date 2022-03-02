#include<stdio.h>
//#include<conio.h>
#include<string.h>

void main()
{
     /* Declare Functions */
     void callCarRentalSystem();
     callCarRentalSystem();
}


/* Declare Global Variables for Functions*/
char rideStartDate[10],rideStartTime[5],bookingInterest[5];
char custName[30],custMobile[10],custCity[10];
char rideSource[30],rideDestination[30];

int rideDay,rideMonth,rideYear;
int rideDays,custAge;
float carRentPerHour,rentalCharges;

/* Declare Functions Globally */
void readCustomerDetails();
void readRideDetails();
void displayCarBrands();

/* Functions Defined Below */
void callCarRentalSystem()
{
    char anotherBooking[5];
    printf("WELCOME TO FRIENDS' TRAVELS");
    do
    {
        displayCarBrands();
        printf("\nWould you like to perform another booking - yes or no\n");
        scanf("%s",&anotherBooking);
    }while(strcmp(anotherBooking,"yes")==0);
    printf("\nThank you for choosing our services. Visit Again!\n");
}

void readCustomerDetails()
{
    printf("\nEnter Customer Name\n");
    scanf("%s",&custName);
    printf("\nEnter Customer Age\n");
    scanf("%d",&custAge);
    printf("\nEnter Customer Mobile\n");
    scanf("%s",&custMobile);
    while(strlen(custMobile)!=10)
    {
      printf("\nMobile number should have 10 digits\n");
      printf("Please enter the correct Mobile Number\n");
      scanf("%s",&custMobile);
    }
}

void readRideDetails()
{
    int dateValidator(int a,int b,int c);
    printf("\nEnter Ride's Source City\n");
    scanf("%s",&rideSource);
    printf("\nEnter Ride's Destination City\n");
    scanf("%s",&rideDestination);
    do
    {
        printf("\nEnter Ride Start Date in DD/MM/YYYY format\n");
        scanf("%d/%d/%d",&rideDay,&rideMonth,&rideYear);
    }while(dateValidator(rideDay,rideMonth,rideYear));
    printf("\nEnter Ride Start Time in HHMM and 24 hour format\n");
    scanf("%s",&rideStartTime);
    printf("\nFor how many days would you like to rent the vehicle\n");
    scanf("%d",&rideDays);
}

int dateValidator(int day,int month,int year)
{
    if(year>=2021)
    {
        if(day>=1 && day<=31)
        {
            if(month>=1 && month<=12)
            {
                if(month%2==1 && day>30)
                {
                    printf("Invalid Date - Date should range between 1 and 30");
                    return 1;
                }
                else if(month==2)
                {
                    if(year%4==0 && day>29)
                    {
                        printf("Invalid date! - year entered is Leap Year");
                        return 1;
                    }
                    else if(year%4==1 && day>28)
                    {
                        printf("Invalid Date! - year entered is not Leap Year");
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                }
                else
                {
                    return 0;
                }

            }
            else
            {
                printf("Invalid Month! - Month should range between 1 and 12");
                return 1;
            }
        }
        else
        {
            printf("Invalid Date Range!");
            return 1;
        }
    }
    else
    {
        printf("Invalid Year! - Year cannot be older than 2021");
        return 1;
    }
}

void displayCarBrands()
{
    int brandChoice,carModel;
    char continueBooking[5];
    void calculateRentals();
    void displayBookingConfirmation();

    printf("\nEnter your desired car brand\n\n");
    printf("1. HYUNDAI\n");
    printf("2. HONDA\n");
    printf("3. MARUTI SUZUKI\n");
    scanf("%d",&brandChoice);

    switch(brandChoice)
    {
    case 1:
        printf("Please select your interested model: \n");
        printf("1. i10\n");
        printf("2. i20\n");
        printf("3. Verna\n");
        printf("4. Elantra\n");
        printf("5. Creta\n");
        scanf("%d", &carModel);
        switch(carModel)
        {
            case 1:
                if(carModel==1)
                {
            printf("Rent per hour is INR 150\n");
            printf("Do you wish to proceed - yes or no?");
            scanf("%s",continueBooking);
            if(strcmp(continueBooking,"yes")==0)
            {
                carRentPerHour=150;
                readCustomerDetails();
                readRideDetails();
                calculateRentals();
                displayBookingConfirmation();
            }
            else
            {
                printf("\nPlease Try Again.....\n");
                displayCarBrands();
            }
                }
            break;
            case 2:
                if(carModel==2)
                  {
            printf("Rent per hour is INR 175\n");
            printf("Do you wish to proceed - yes or no?");
            scanf("%s",continueBooking);
            if(strcmp(continueBooking,"yes")==0)
            {
                carRentPerHour=175;
                readCustomerDetails();
                readRideDetails();
                calculateRentals();
                displayBookingConfirmation();
            }
            else
            {
                printf("\nPlease Try Again.....\n");
                displayCarBrands();
            }
            break;
        }

        case 3:
                if(carModel==3)
                  {
            printf("Rent per hour is INR 200\n");
            printf("Do you wish to proceed - yes or no?");
            scanf("%s",continueBooking);
            if(strcmp(continueBooking,"yes")==0)
            {
                carRentPerHour=200;
                readCustomerDetails();
                readRideDetails();
                calculateRentals();
                displayBookingConfirmation();
            }
            else
            {
                printf("\nPlease Try Again.....\n");
                displayCarBrands();
            }
            break;
        }

        case 4:
                if(carModel==4)
                  {
            printf("Rent per hour is INR 225\n");
            printf("Do you wish to proceed - yes or no?");
            scanf("%s",continueBooking);
            if(strcmp(continueBooking,"yes")==0)
            {
                carRentPerHour=225;
                readCustomerDetails();
                readRideDetails();
                calculateRentals();
                displayBookingConfirmation();
            }
            else
            {
                printf("\nPlease Try Again.....\n");
                displayCarBrands();
            }
            break;
        }

        case 5:
                if(carModel==5)
                  {
            printf("Rent per hour is INR 250\n");
            printf("Do you wish to proceed - yes or no?");
            scanf("%s",continueBooking);
            if(strcmp(continueBooking,"yes")==0)
            {
                carRentPerHour=250;
                readCustomerDetails();
                readRideDetails();
                calculateRentals();
                displayBookingConfirmation();
            }
            else
            {
                printf("\nPlease Try Again.....\n");
                displayCarBrands();
            }
            break;
        }
        }
    }
    switch(brandChoice)
    {
    case 2:
        printf("Please select your interested model: \n");
        printf("1. Jazz\n");
        printf("2. Civic\n");
        printf("3. City\n");
        printf("4. Amaze\n");
        printf("5. BRV\n");
        scanf("%d", &carModel);
        switch(carModel)
        {
            case 1:
                if(carModel==1)
                {
            printf("Rent per hour is INR 150\n");
            printf("Do you wish to proceed - yes or no?");
            scanf("%s",continueBooking);
            if(strcmp(continueBooking,"yes")==0)
            {
                carRentPerHour=150;
                readCustomerDetails();
                readRideDetails();
                calculateRentals();
                displayBookingConfirmation();
            }
            else
            {
                printf("\nPlease Try Again.....\n");
                displayCarBrands();
            }
                }
            break;
            case 2:
                if(carModel==2)
                  {
            printf("Rent per hour is INR 175\n");
            printf("Do you wish to proceed - yes or no?");
            scanf("%s",continueBooking);
            if(strcmp(continueBooking,"yes")==0)
            {
                carRentPerHour=175;
                readCustomerDetails();
                readRideDetails();
                calculateRentals();
                displayBookingConfirmation();
            }
            else
            {
                printf("\nPlease Try Again.....\n");
                displayCarBrands();
            }
            break;
        }

        case 3:
                if(carModel==3)
                  {
            printf("Rent per hour is INR 200\n");
            printf("Do you wish to proceed - yes or no?");
            scanf("%s",continueBooking);
            if(strcmp(continueBooking,"yes")==0)
            {
                carRentPerHour=200;
                readCustomerDetails();
                readRideDetails();
                calculateRentals();
                displayBookingConfirmation();
            }
            else
            {
                printf("\nPlease Try Again.....\n");
                displayCarBrands();
            }
            break;
        }

        case 4:
                if(carModel==4)
                  {
            printf("Rent per hour is INR 225\n");
            printf("Do you wish to proceed - yes or no?");
            scanf("%s",continueBooking);
            if(strcmp(continueBooking,"yes")==0)
            {
                carRentPerHour=225;
                readCustomerDetails();
                readRideDetails();
                calculateRentals();
                displayBookingConfirmation();
            }
            else
            {
                printf("\nPlease Try Again.....\n");
                displayCarBrands();
            }
            break;
        }

        case 5:
                if(carModel==5)
                  {
            printf("Rent per hour is INR 250\n");
            printf("Do you wish to proceed - yes or no?");
            scanf("%s",continueBooking);
            if(strcmp(continueBooking,"yes")==0)
            {
                carRentPerHour=250;
                readCustomerDetails();
                readRideDetails();
                calculateRentals();
                displayBookingConfirmation();
            }
            else
            {
                printf("\nPlease Try Again.....\n");
                displayCarBrands();
            }
            break;
        }
        }
    }
    switch(brandChoice)
    {
    case 3:
        printf("Please select your interested model: \n");
        printf("1. Ritz\n");
        printf("2. Swift\n");
        printf("3. Swift Desire\n");
        printf("4. Ciaz\n");
        printf("5. Ertiga\n");
        scanf("%d", &carModel);
        switch(carModel)
        {
            case 1:
                if(carModel==1)
                {
            printf("Rent per hour is INR 150\n");
            printf("Do you wish to proceed - yes or no?");
            scanf("%s",continueBooking);
            if(strcmp(continueBooking,"yes")==0)
            {
                carRentPerHour=150;
                readCustomerDetails();
                readRideDetails();
                calculateRentals();
                displayBookingConfirmation();
            }
            else
            {
                printf("\nPlease Try Again.....\n");
                displayCarBrands();
            }
                }
            break;
            case 2:
                if(carModel==2)
                  {
            printf("Rent per hour is INR 175\n");
            printf("Do you wish to proceed - yes or no?");
            scanf("%s",continueBooking);
            if(strcmp(continueBooking,"yes")==0)
            {
                carRentPerHour=175;
                readCustomerDetails();
                readRideDetails();
                calculateRentals();
                displayBookingConfirmation();
            }
            else
            {
                printf("\nPlease Try Again.....\n");
                displayCarBrands();
            }
            break;
        }

        case 3:
                if(carModel==3)
                  {
            printf("Rent per hour is INR 200\n");
            printf("Do you wish to proceed - yes or no?");
            scanf("%s",continueBooking);
            if(strcmp(continueBooking,"yes")==0)
            {
                carRentPerHour=200;
                readCustomerDetails();
                readRideDetails();
                calculateRentals();
                displayBookingConfirmation();
            }
            else
            {
                printf("\nPlease Try Again.....\n");
                displayCarBrands();
            }
            break;
        }

        case 4:
                if(carModel==4)
                  {
            printf("Rent per hour is INR 225\n");
            printf("Do you wish to proceed - yes or no?");
            scanf("%s",continueBooking);
            if(strcmp(continueBooking,"yes")==0)
            {
                carRentPerHour=225;
                readCustomerDetails();
                readRideDetails();
                calculateRentals();
                displayBookingConfirmation();
            }
            else
            {
                printf("\nPlease Try Again.....\n");
                displayCarBrands();
            }
            break;
        }

        case 5:
                if(carModel==5)
                  {
            printf("Rent per hour is INR 250\n");
            printf("Do you wish to proceed - yes or no?");
            scanf("%s",continueBooking);
            if(strcmp(continueBooking,"yes")==0)
            {
                carRentPerHour=250;
                readCustomerDetails();
                readRideDetails();
                calculateRentals();
                displayBookingConfirmation();
            }
            else
            {
                printf("\nPlease Try Again.....\n");
                displayCarBrands();
            }
            break;
        }
        }
    }
}


void calculateRentals()
{
    int numberOfHours;
    numberOfHours=rideDays*24;
    rentalCharges=numberOfHours*carRentPerHour;
}

void displayBookingConfirmation()
{
    printf("*********************************************************\n");
    printf("\t\tBOOKING CONFIRMATION\n");
    printf("*********************************************************\n");
    printf("Customer Name: %s\n",custName);
    printf("Customer Mobile: %s\n",custMobile);
    printf("Ride Source Station: %s\n",rideSource);
    printf("Ride Destination Station: %s\n",rideDestination);
    printf("Ride Start Date: %d/%d/%d\n",rideDay,rideMonth,rideYear);
    printf("Ride Start Time: %s hours\n",rideStartTime);
    printf("Booking for %d Days\n",rideDays);
    printf("Car Rental Charges: %f\n",rentalCharges);
    printf("*********************************************************\n");
}
