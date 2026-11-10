#include "autorization.hpp"


void Start()
{
    while (true)
    {
        if (Login())
        {
            system("cls");
            std::wcout << L"\n\n\t\t\tУспешный вход в SellDrink\n";
            system("pause");
            
        }
        else
        {
            break; 
        }
    }
}

bool Login()
{
    std::wstring login, pass;


    while (true)
    {
        system("cls");
        std::wcout << L"\n\n\n\t\t\tWelcome\n\n\t\t\t   SellDrink\n\n\n";
        std::wcout << L"Введите логин или \"exit\" для выхода: ";
        Getline(login);

        if (login == L"exit" || login == L"Exit")
            return false;

        std::wcout << L"Введите пароль: ";
        Getline(pass);

        for (size_t i = 0; i < userSize; i++)
        {
            if (login == loginArr[i] && pass == passArr[i])
            {
                std::wcout << L"\nWelcome, " << loginArr[i] << L"!\n";
                std::wcout << L"уровень доступа: " << statusArr[i] << L"\n";

                currentStatus = statusArr[i];
                return true;
            }
        }

        std::wcout << L"\nневерный логин или пароль.\n";
        Sleep(1500);
    }
}