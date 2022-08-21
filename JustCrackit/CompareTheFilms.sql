
SELECT 
    title,
    name,
    length,
    MAX(length) OVER(
        PARTITION BY name
    )
    FROM (
        SELECT f.title, c.name, f.length
        FROM film as f INNER JOIN film_category as fc
        ON f.film_id = fc.film_id INNER JOIN category as c
        ON fc.category_id = c.category_id
    ) as X