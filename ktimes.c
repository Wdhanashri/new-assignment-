
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Step 1: Count frequencies of each element
        unordered_map<int, int> frequencyMap;
        for (int num : nums) {
            frequencyMap[num]++;
        }

        // Step 2: Create a min-heap based on frequency
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        
        // Step 3: Push elements into the heap, maintaining the size of heap to be k
        for (auto& entry : frequencyMap) {
            minHeap.push({entry.second, entry.first});
            
            // If heap size exceeds k, pop the element with the smallest frequency
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }

        // Step 4: Extract the top k frequent elements
        vector<int> result;
        while (!minHeap.empty()) {
            result.push_back(minHeap.top().second); // Get the element (not frequency)
            minHeap.pop();
        }

        return result;
    }
};
