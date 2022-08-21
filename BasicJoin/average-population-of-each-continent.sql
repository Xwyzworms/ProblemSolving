-- Print Continents, avg populations Rounded down
SELECT cou.CONTINENT, ROUND(AVG(city.population)) FROM
city INNER JOIN country as cou 
ON city.countrycode = cou.code;