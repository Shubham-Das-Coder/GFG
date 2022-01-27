/*
Link of the question : https://practice.geeksforgeeks.org/problems/capacity-to-ship-packages-within-d-days/1
*/
class Solution
{
public:
    bool is_valid(int arr[], int n, int day, int cap)
    {
        int d = 1;
        int curr_sum = 0;
        for (int i = 0; i < n; i++)
        {
            curr_sum += arr[i];
            if (curr_sum > cap)
            {
                d++;
                curr_sum = arr[i];
            }
        }
        if (d <= day)
            return true;
        return false;
    }

    int leastWeightCapacity(int arr[], int n, int day)
    {
        int total_sum = 0;
        for (int i = 0; i < n; i++)
        {
            total_sum += arr[i];
        }
        int low = *max_element(arr, arr + n);
        int high = total_sum;
        int ans = 0;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (is_valid(arr, n, day, mid))
            {
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        return ans;
    }
};