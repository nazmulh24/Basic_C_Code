#include <stdio.h>
struct DonationRecord
{
    char patientName[50];
    char location[50];
    char date[20];
};
int main()
{
    FILE *file;
    struct DonationRecord donation;
    file = fopen("blood_donation_records.txt", "a");
    if (file == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }
    printf("Enter Patient Name: ");
    scanf("%s", donation.patientName);
    printf("Enter Location: ");
    scanf("%s", donation.location);
    printf("Enter Date: ");
    scanf("%s", donation.date);
    fprintf(file, "Patient Name: %s\n", donation.patientName);
    fprintf(file, "Location: %s\n", donation.location);
    fprintf(file, "Date: %s\n", donation.date);
    fprintf(file, "--------------------------\n");
    fclose(file);
    printf("Blood donation information has been recorded in 'blood_donation_records.txt'.\n");
    return 0;
}
