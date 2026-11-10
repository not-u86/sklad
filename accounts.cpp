#include "Accounts.hpp"

size_t userSize = 3;
size_t currentSize = 0;
std::wstring currentStatus;

std::wstring* loginArr = new std::wstring[userSize] { L"admin",L"user1",L"manager" };
std::wstring* passArr = new std::wstring[userSize] { L"notu123", L"1111", L"2222" };
std::wstring* statusArr = new std::wstring[userSize] { L"Admin", L"User", L"Moder" };
unsigned int* userIdArr = new unsigned int[userSize] {0, 1, 2};