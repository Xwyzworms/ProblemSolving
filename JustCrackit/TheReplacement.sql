SELECT 
    title,
    rating,
    replacement_cost,
    AVG(replacement_cost) OVER(
        PARTITION BY rating
    ) AS Avg_cost

    FROM FILM;