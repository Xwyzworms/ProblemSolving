# KNOWN 
    # Employees Table
# GOALS 
    # Find the differences between Miscalculations and 
    # What is the actual average salary
        # Calculate the actual - miscalculated, 
        # Round up
# Additional
    # Salary is permont
    # 1000 < Salary < 10^5



SELECT ABS(
        SUM(REPLACE(salary, "0", "")) / COUNT(SALARY) 
       - SUM(salary) / COUNT(salary)
       ) 
 FROM employees