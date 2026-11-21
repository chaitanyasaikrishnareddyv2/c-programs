# UNEDV54

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### My Day Saving

You have a fixed amount of money in your wallet and you spend it on various activities during the week. In this task, you’ll calculate:

- The total money spent.
- The remaining balance in your wallet after subtracting those expenses.

 **Data Values** 
• Initial wallet balance: $100
• Groceries expense: $30
• Entertainment expense: $20

 **Expected Output** 
If the total money spent is 50 and the remaining balance is 50, then the output should be:

```
50
50

```

Try implementing this in Python and verify that you get the correct totals for your chosen amounts.

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-21T17:12:31.580Z  

```py
# Define initial wallet balance and expenses
wallet_balance = 100       # Total money in the wallet
groceries = 30             # Money spent on groceries
entertainment = 20         # Money spent on entertainment

# Calculate the total money spent
total_spent = groceries + entertainment

# Calculate the remaining balance
remaining_balance = wallet_balance - total_spent

# Print the results
print(total_spent)
print(remaining_balance)
```

---

[View on CodeChef](https://www.codechef.com/problems/UNEDV54)