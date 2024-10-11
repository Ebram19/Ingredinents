// Title : Ingredient 
// Programmer Name : Ebram Azer 
//REquirment:A cookie recipe calls for the following ingredients :
//• 1.5 cups of sugar
//• 1 cup of butter
//• 2.75 cups of flour
//The recipe produces 48 cookies with this amount of the ingredients.


#include <iostream>

int main() {
    // Original recipe quantities for 48 cookies
    const double sugarPerBatch = 1.5; // cups of sugar
    const double butterPerBatch = 1.0; // cups of butter
    const double flourPerBatch = 2.75; // cups of flour
    const int cookiesPerBatch = 48;

    // Variables to hold user input and calculated ingredients
    int desiredCookies;
    double sugarNeeded, butterNeeded, flourNeeded;

    // Prompt user for the number of cookies they want to make
    std::cout << "Enter the number of cookies you want to make: ";
    std::cin >> desiredCookies;

    // Calculate the required ingredients based on the desired number of cookies
    sugarNeeded = (sugarPerBatch / cookiesPerBatch) * desiredCookies;
    butterNeeded = (butterPerBatch / cookiesPerBatch) * desiredCookies;
    flourNeeded = (flourPerBatch / cookiesPerBatch) * desiredCookies;

    // Display the results
    std::cout << "For " << desiredCookies << " cookies, you will need:\n";
    std::cout << sugarNeeded << " cups of sugar\n";
    std::cout << butterNeeded << " cups of butter\n";
    std::cout << flourNeeded << " cups of flour\n";

    return 0;
}
