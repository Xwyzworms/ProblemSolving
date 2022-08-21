SELECT  EXTRACT(YEAR from rental_ts) as YEARs,
        EXTRACT(MONTH from rental_ts) as MONTHs,
        COUNT(customer_id)
FROM rental
GROUP BY YEARs, MONTHs