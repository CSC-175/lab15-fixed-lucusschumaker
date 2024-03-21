void getInfo(int &pickFrom, int &numPicks);
double computeWays(int n, int k);
double factorial(int n);

int main() {
    int pickFrom, numPicks;
    getInfo(pickFrom, numPicks); // Get information about the lottery
    double ways = computeWays(pickFrom, numPicks); // Calculate the number of possible combinations
    std::cout << "Number of possible combinations: " << ways << std::endl;
    return 0;
}

// Gets and validates lottery info from the user and places it in reference parameters
void getInfo(int &pickFrom, int &numPicks) {
    std::cout << "Enter the total number of numbers to pick from: ";
    std::cin >> pickFrom;
    std::cout << "Enter the number of numbers to pick: ";
    std::cin >> numPicks;
}

// Computes and returns the number of different possible sets of k numbers that can be chosen from a set of n numbers.
double computeWays(int n, int k) {
    // Using the formula: n! / (k! * (n - k)!)
    double ways = factorial(n) / (factorial(k) * factorial(n - k));
    return ways;
}

// Recursive function to compute factorials
double factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}


