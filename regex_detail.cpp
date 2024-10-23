#include <iostream>
#include <regex>
#include <string>

//to detect specific string and number word that can be malicious
//assuming the 4 numbers and 4 letters is a malicious password
int main() {
    std::string text = "The password is 1234-abcd!";
    std::regex pattern(R"(\d{4}-[a-z]{4})"); // Matches a pattern like 1234-abcd

    if (std::regex_search(text, pattern)) {
        std::cout << "Found a match!" << std::endl;
    }
    else {
        std::cout << "No match found." << std::endl;
    }

    return 0;
}


//to identify SQL injections

#include <iostream>
#include <regex>
#include <string>

int main() {
    std::string userInput = "SELECT * FROM users WHERE username = 'admin' --";
    std::regex pattern(R"(--\s*)"); // Matches SQL comments

    if (std::regex_search(userInput, pattern)) {
        std::cout << "Potential SQL injection detected!" << std::endl;
    }
    else {
        std::cout << "No security issues found." << std::endl;
    }

    return 0;
}
/*
Cross - Site Scripting(XSS) :
    Regex Pattern : R"(<(script|iframe|img|link|style|object|embed)[^>]*>)"
    */


//regex pattern

/*Character Classes:

[a-z]: Matches any lowercase letter.
[A-Z]: Matches any uppercase letter.
[0-9]: Matches any digit.
Quantifiers:

*: Matches zero or more occurrences (e.g., a* matches a, aa, or nothing).
+: Matches one or more occurrences (e.g., a+ matches a or aa).
{n}: Matches exactly n occurrences (e.g., \d{3} matches exactly three digits).
Anchors:

^: Matches the start of a string.
$: Matches the end of a string.
Groups and Alternation:

(...): Groups patterns (e.g., (abc|def) matches either abc or def).
Special Characters:

\d: Matches any digit (equivalent to [0-9]).
\w: Matches any word character (alphanumeric + underscore).
\s: Matches any whitespace character (space, tab, newline).*/
/*

To encrypt user's password

(?=.*[A-Z]): At least one uppercase letter.
(?=.*[a-z]): At least one lowercase letter.
(?=.*\d): At least one digit.
(?=.*[\W_]): At least one special character.
. {8,}: At least 8 characters long


To encrypt social security number

for social security number, example of regex pattern can be this
 SSNs (\d{3}-\d{2}-\d{4}),


*/