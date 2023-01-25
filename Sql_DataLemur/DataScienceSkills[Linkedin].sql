SELECT candidate_id FROM candidates 
WHERE skill IN('Python', 'Tableau', 'PostgreSQL') 
GROUP by candidate_id
HAVING COUNT(skill) = 3
ORDER BY candidate_id;

