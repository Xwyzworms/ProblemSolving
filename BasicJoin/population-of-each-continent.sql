SELECT cou.CONTINENT, FLOOR(AVG(city.population)) FROM
city INNER JOIN country as cou 
ON city.countrycode = cou.code
GROUP BY cou.continent
ORDER BY cou.continent DESC;