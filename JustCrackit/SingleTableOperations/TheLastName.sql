SELECT last_name, COUNT(last_name) 
FROM actor
WHERe last_name in ('DAVIS', 'BRODY', 'ALLEN', 'BERRY')
GROUP BY last_name