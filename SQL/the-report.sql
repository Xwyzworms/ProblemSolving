# Known
    # Table 
    # students 
    # Grades

# Goals
# Output Report containing Name, grade, and mark

# Goals Req
# Grade > 8
    # Descending order Grade, name
        # Grade < 8 NULL as its name
        # Order by Marks 

## Use Subquery

SELECT CASE WHEN g.grade <= 7 THEN 'NULL' ELSE s.name end , g.grade, s.marks FROM 
Students as s LEFT JOIN Grades as g 
ON s.marks Between g.min_mark and g.max_mark
ORDER BY g.grade DESC ,  s.name, s.marks
