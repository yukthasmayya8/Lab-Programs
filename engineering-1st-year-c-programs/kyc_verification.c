/*
Develop a C program that takes a unique identification input like PAN Number,
AADHAR_Number, APAAR_Id, Driving License, Passport and checks it against a
set of stored KYC records. Based on the input, display whether the individual
is verified or not. Use an appropriate control structure to handle multiple
possible ID matches. Assume all Unique identification are of integer type.
*/

#include <stdio.h>

void main()
{
    int choice;
    int id;

    int pan_records[] = {123456789, 987654321};
    int aadhar_records[] = {111122223, 444455556};
    int apaar_records[] = {555566667, 888899990};
    int dl_records[] = {222233334, 999900001};
    int passport_records[] = {101010101, 202020202};

    int i, verified = 0;

    printf("\n===== KYC Verification System =====\n");
    printf("1. PAN Number\n");
    printf("2. Aadhaar Number\n");
    printf("3. APAAR ID\n");
    printf("4. Driving License\n");
    printf("5. Passport\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the ID number: ");
    scanf("%d", &id);

    switch (choice)
    {
    case 1:
        for (i = 0; i < 2; i++)
        {
            if (id == pan_records[i])
            {
                verified = 1;
                break;
            }
        }
        break;

    case 2:
        for (i = 0; i < 2; i++)
        {
            if (id == aadhar_records[i])
            {
                verified = 1;
                break;
            }
        }
        break;

    case 3:
        for (i = 0; i < 2; i++)
        {
            if (id == apaar_records[i])
            {
                verified = 1;
                break;
            }
        }
        break;

    case 4:
        for (i = 0; i < 2; i++)
        {
            if (id == dl_records[i])
            {
                verified = 1;
                break;
            }
        }
        break;

    case 5:
        for (i = 0; i < 2; i++)
        {
            if (id == passport_records[i])
            {
                verified = 1;
                break;
            }
        }
        break;

    default:
        printf("Invalid choice!\n");
        return;
    }

    if (verified)
        printf("KYC Status: VERIFIED\n");
    else
        printf("KYC Status: NOT VERIFIED\n");
}

/*
Output:

1.
Enter your choice: 1
Enter the ID number: 123456789
KYC Status: VERIFIED

2.
Enter your choice: 1
Enter the ID number: 111122223
KYC Status: NOT VERIFIED

3.
Enter your choice: 2
Enter the ID number: 111122223
KYC Status: VERIFIED

4.
Enter your choice: 2
Enter the ID number: 123456789
KYC Status: NOT VERIFIED

5.
Enter your choice: 3
Enter the ID number: 555566667
KYC Status: VERIFIED

6.
Enter your choice: 3
Enter the ID number: 123456789
KYC Status: NOT VERIFIED

7.
Enter your choice: 4
Enter the ID number: 222233334
KYC Status: VERIFIED

8.
Enter your choice: 4
Enter the ID number: 123456789
KYC Status: NOT VERIFIED

9.
Enter your choice: 5
Enter the ID number: 101010101
KYC Status: VERIFIED

10.
Enter your choice: 5
Enter the ID number: 123456789
KYC Status: NOT VERIFIED

11.
Enter your choice: 6
Invalid choice!
*/