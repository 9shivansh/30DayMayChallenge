class Solution {
public:
    double angleClock(int hour, int minutes) 
    {
        double hourAngle = (hour % 12) * 30 + 1.0 * minutes / 2;
        
        
        double minuteAngle = minutes * 6;
        
        
        return min(abs(hourAngle - minuteAngle), 360 - abs(hourAngle - minuteAngle));
    }
};