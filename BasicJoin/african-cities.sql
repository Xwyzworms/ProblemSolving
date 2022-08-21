SELECT ct.name FROM CITY as ct 
    INNER JOIN
    country as cou
    ON ct.COUNTRYCODE = cou.code 
    WHERE cou.continent="Africa"