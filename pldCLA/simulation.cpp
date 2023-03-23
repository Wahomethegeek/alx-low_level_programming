/*
 * BUS-242-087/2019
 * BUS-242-
 * BUS-242-059/2020


#include <iostream>
#include <fstream>
#include <cstdlib> // contains rand() function
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{ 
    // Single server queue:
    // arrival and service times are normally distributed.
    // mean and standard deviation of arrivals are 10 and 1.5 minutes.
    // mean and standard deviation of service times are 9.5 and 1.0 

    int i, j, run = 10;
    double x, x1, x2, st, awt, pcu, wt = 0, iat = 0, it;
    double mean = 10.0, sd = 1.5, mue = 9.5, sigma = 1.0;
    double sb = 0.0, se = 0.0, cit = 0.0, cat = 0.0, cwt = 0.0;
    
    ofstream outfile("output.txt");
    outfile << "\n i r' IAT CAT SB r' ST SE WT IT\n";
    
    for (j = 1; j <= run; ++j)
    {
        // Generate inter arrival time
        double sum = 0;
        for (i = 1; i <= 12; ++i)
        {
            x = rand() / 32768.0;
            sum = sum + x;
        }
        x1 = mean + sd * (sum - 6.0);
        iat = x1;
        // cout << "iat=" << iat;
        cat = cat + iat;
        // cout << "cat=" << cat;
        if (cat <= se)
        {
            sb = se;
            wt = se - cat;
            cwt = cwt + wt;
            // cout << "cwt=" << cwt;
        }
        else
        {
            sb = cat;
            it = sb - se;
            cit = cit + it;
        }
        
        // generate service time
        sum = 0.0;
        for (i = 1; i <= 12; ++i)
        {
            x = rand() / 32768.0;
            sum = sum + x;
        }
        x2 = mue + sigma * (sum - 6.0);
        st = x2;
        se = sb + st;
        
        outfile << j << '\t' << setprecision(4) << x1 << '\t' << setprecision(4) << iat << '\t' << setprecision(4)
                << cat << '\t' << setprecision(4) << sb << '\t' << setprecision(4) << x2 << '\t' << setprecision(4) << st << '\t' 
                << setprecision(4) << se << '\t' << setprecision(4) << wt << '\t' << setprecision(4) << it << '\n';
    }
    
    awt = cwt / run;
    pcu = (cat - cit) * 100.0 / cat;
    outfile << "Average waiting time\n";
    outfile << awt << '\n';
    outfile << "Percentage capacity utilization\n" << pcu << '\n';
    
    outfile.close();
    return 0;
}
