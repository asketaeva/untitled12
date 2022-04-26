#include <iostream>
#include <fstream>
#include <string>


using namespace std;
int main() {

    ifstream infile;
    infile.open("file.txt");
    ofstream outfile1;
    outfile1.open("Thread_1.txt");

    ofstream outfile2;
    outfile2.open("Thread_2.txt");
    while(infile) {

        float total = 0, n = 0, count = 0;
        float min = 10, max = 0;

        while (infile >> n) {
            total += n;
            count++;

            for (float i = 0; i < n; i++) {
                if (n < min) {
                    min = n;
                }
                if (n > max) {
                    max = n;
                }
            }
        }

        cout << "min number: " << min << "\nmax number: " << max << endl;
        float average = (total / count);

        cout << "Avg: " << average << endl;
        if (average < max) {
            outfile1 << "bigger than avg: " << max << endl;
        }
        if(average > min)
            outfile2 << "smaller than avg: " << min << endl;
    }
    outfile1.close();
    outfile2.close();


    return 0;
}
