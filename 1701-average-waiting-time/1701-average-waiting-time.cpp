class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double total_time=0;
        int current_time=0;
        for(const auto& customer:customers){
            int arrival_time=customer[0];
            int order_time=customer[1];
            current_time=max(current_time,arrival_time)+order_time;
         total_time+=current_time-arrival_time;
        }
        return total_time/customers.size();
    }
};

     /*   double totalWaitTime = 0; // Store the total waiting time for all customers.
        int currentTime = 0; // The current time to track when the chef finishes the orders.

        // Loop over each customer
        for (const auto& customer : customers) {
            int arrivalTime = customer[0]; // The time when the customer arrives.
            int orderTime = customer[1];   // The time taken to prepare the customer's order.

            // Update currentTime. If the chef is idle, set currentTime to the arrival time of the current customer.
            // Otherwise, add the order preparation time to the current time.
            currentTime = std::max(currentTime, arrivalTime) + orderTime;
          
            // The waiting time for the current customer is the total time since their arrival until the food is ready.
            // Add this to the total waiting time.
            totalWaitTime += currentTime - arrivalTime;
        }

        // Return the average waiting time, which is the total waiting time divided by the number of customers.
        return totalWaitTime / customers.size();
    }
}; */