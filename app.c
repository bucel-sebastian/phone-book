#include <stdio.h>
#include <string.h>

// Definirea structurii pentru un contact
struct Contact
{
    char name[50];
    char phoneNumber[15];
};

// Definirea phonebook-ului ca un vector de 100 de contacte
struct Contact phonebook[100];
int contactCount = 0;

// Funcția pentru adăugarea unui contact
void addContact()
{
    if (contactCount < 100)
    {
        struct Contact newContact;
        printf("Nume: ");
        scanf("%s", newContact.name);
        printf("Număr de telefon: ");
        scanf("%s", newContact.phoneNumber);

        phonebook[contactCount] = newContact;
        contactCount++;
        printf("Contactul a fost adăugat cu succes!\n");
    }
    else
    {
        printf("Phonebook-ul este plin. Nu mai pot fi adăugate contacte.\n");
    }
}

// Funcția pentru afișarea tuturor contactelor din phonebook
void displayContacts()
{
    if (contactCount > 0)
    {
        printf("Contactele din phonebook:\n");
        for (int i = 0; i < contactCount; i++)
        {
            printf("%d. Nume: %s, Număr de telefon: %s\n", i + 1, phonebook[i].name, phonebook[i].phoneNumber);
        }
    }
    else
    {
        printf("Phonebook-ul este gol.\n");
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\nPhonebook - Meniu:\n");
        printf("1. Adaugă contact\n");
        printf("2. Afișează toate contactele\n");
        printf("3. Ieșire\n");
        printf("Alegeți o opțiune: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addContact();
            break;
        case 2:
            displayContacts();
            break;
        case 3:
            return 0;
        default:
            printf("Opțiune invalidă. Vă rugăm să alegeți din nou.\n");
        }
    }

    return 0;
}