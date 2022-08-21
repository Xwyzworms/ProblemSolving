# KNown 
    # Employee

# Goal 
    # find maximum total earnings for all employee
    # find total number employees who have maximum total earnings
# REq Goal
    # Print space-sperated integers
SELECT months*salary as c, Count(employee_id) FROM
employee 
Where months*salary = (SELECT max(months*salary) From employee LIMIT 1)
GROUP BY c
ORDER BY c DESC;


