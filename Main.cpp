#include <iostream>
#include <format>

#include "faker-cxx/Datatype.h"
#include "faker-cxx/Date.h"
#include "faker-cxx/Internet.h"
#include "faker-cxx/String.h"
#include "faker-cxx/Person.h"

int main()
{
    const auto id = faker::String::uuid();                   // 6fdb588e-0be9-480e-9eeb-8ff11b8afc00
    const auto email = faker::Internet::email();             // Sergio_Greenfelder@hotmail.com
    const auto password = faker::Internet::password();       // 91gZxLB*TfhAA!G
    const auto nickname = faker::Internet::username();       // Stuart_Boyle
    const auto active = faker::Datatype::boolean();          // true
    const auto emailVerified = faker::Datatype::boolean();   // false
    const auto verificationCode = faker::String::numeric(8); // 56910620
    const auto createdAt = faker::Date::pastDate();          // 2023-03-11T08:33:34Z
    const auto updatedAt = faker::Date::recentDate();        // 2023-07-19T22:59:19Z
    const auto name = faker::Person::fullName();                 // Stuart Boyle

    std::cout << std::format("id: {}, email: {}, password: {}, nickname: {}, active: {}, emailVerified: {}. "
                             "verificationCode: {}, createdAt: {}, updatedAt: {}, name: {}",
                             id, email, password, nickname, active, emailVerified, verificationCode, createdAt,
                             updatedAt, name);

    return 0;
}