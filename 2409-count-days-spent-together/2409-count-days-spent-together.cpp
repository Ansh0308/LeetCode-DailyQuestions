class Solution {
private:
    // Helper function to convert "MM-DD" string to day number of the year
    int dateToDayOfYear(string date) {
        int month = stoi(date.substr(0, 2));
        int day = stoi(date.substr(3, 2));
        
        // Days in each month for a standard non-leap year
        int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        int dayCount = 0;
        // Sum up days of all completely passed months
        for (int m = 1; m < month; m++) {
            dayCount += daysInMonth[m - 1];
        }
        
        // Add the days of the current month
        dayCount += day;
        
        return dayCount;
    }

public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        // Convert all date strings into numerical days of the year
        int aliceStart = dateToDayOfYear(arriveAlice);
        int aliceEnd = dateToDayOfYear(leaveAlice);
        int bobStart = dateToDayOfYear(arriveBob);
        int bobEnd = dateToDayOfYear(leaveBob);
        
        // Find the overlapping interval
        int latestStart = max(aliceStart, bobStart);
        int earliestEnd = min(aliceEnd, bobEnd);
        
        // If they overlap, earliestEnd will be >= latestStart
        if (latestStart <= earliestEnd) {
            return earliestEnd - latestStart + 1;
        }
        
        // No overlap at all
        return 0;
    }
};
